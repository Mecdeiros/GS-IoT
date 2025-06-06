#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>

// Definições de pinos
#define DHTPIN 7
#define DHTTYPE DHT22

const int ledVerde = 2;
const int ledAmarelo = 3;
const int ledVermelho = 4;
const int buzzer = 9;

// Inicialização dos objetos
DHT_Unified dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin(9600);
  dht.begin();
  lcd.begin(16, 2);
  lcd.backlight();

  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(buzzer, OUTPUT);

  desligaTodos();
}

void loop() {
  float umidade = mediaUmidade();

  desligaTodos(); // Garante que tudo começa desligado

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Umidade: ");
  lcd.print(umidade, 1);
  lcd.print("%");

  if (umidade >= 80.0) {
    // Umidade alta: perigo de chuva forte
    lcd.setCursor(0, 1);
    lcd.print("PERIGO! Chuva!");
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(buzzer, HIGH);

    delay(3000);

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Procure ABRIGO!");
    delay(3000);

  } else if (umidade >= 60.0) {
    // Umidade média: alerta para levar guarda-chuva
    lcd.setCursor(0, 1);
    lcd.print("Leve guarda-chuva");
    digitalWrite(ledAmarelo, HIGH);
    // Não aciona buzzer
    delay(3000);

  } else {
    // Umidade baixa: situação normal
    lcd.setCursor(0, 1);
    lcd.print("Situacao normal");
    digitalWrite(ledVerde, HIGH);
    delay(3000);
  }
}

// Função para desligar todos os LEDs e buzzer
void desligaTodos() {
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVermelho, LOW);
  digitalWrite(buzzer, LOW);
}

// Função para calcular a média de 5 leituras de umidade
float mediaUmidade() {
  sensors_event_t event;
  float soma = 0;
  for (int i = 0; i < 5; i++) {
    dht.humidity().getEvent(&event);
    if (!isnan(event.relative_humidity)) {
      soma += event.relative_humidity;
    }
    delay(500); // Meio segundo entre leituras
  }
  return soma / 5.0;
}
