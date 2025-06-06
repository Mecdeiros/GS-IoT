# GS-IoT

# 🌧️ AquAlert - Sistema de Alerta de Chuvas com Arduino

## 📌 Descrição do Problema

As enchentes e alagamentos são problemas recorrentes no Brasil, causados principalmente por chuvas intensas, falta de infraestrutura e ausência de sistemas de alerta eficientes. Milhões de pessoas são afetadas todos os anos, sofrendo com perdas materiais, riscos à saúde e interrupção de serviços essenciais. A prevenção e o aviso antecipado são fundamentais para reduzir danos e salvar vidas.

---

## 💡 Visão Geral da Solução

O **AquAlert** é um sistema simples e eficiente de alerta de chuvas, desenvolvido com Arduino, sensor de umidade e display LCD. O objetivo é fornecer informações em tempo real sobre as condições climáticas locais, ajudando a população a se preparar para chuvas e possíveis alagamentos.

### ⚙️ Como Funciona

- O sensor de umidade detecta o nível de umidade do ambiente.
- O Arduino processa os dados e exibe mensagens no display LCD:
  - **"Situacao normal"**
  - **"Leve guarda-chuva"**
  - **"PERIGO! Chuva! Procure ABRIGO!"**
- O sistema pode ser instalado em pontos estratégicos da cidade, escolas ou residências, promovendo a conscientização e a prevenção.

### 🧰 Componentes Utilizados

- Arduino Uno (ou similar)
- Sensor de umidade (ex: DHT11, DHT22 ou sensor de chuva)
- Display LCD 16x2
- Jumpers e protoboard

### 🖼️ Esquema de Montagem

![image](https://github.com/user-attachments/assets/527a16bf-1826-49af-92a9-cad996dae983)


---

## 🖥️ Guia de Simulação

Você pode simular este projeto online usando o [Wokwi](https://wokwi.com/)

### ▶️ Passo a Passo para Simular no Wokwi

1. Acesse o link do projeto: [Simule aqui no Wokwi](https://wokwi.com/projects/432959850634907649)
2. Clique em **Start Simulation** para iniciar.
3. Observe o valor do sensor de umidade e a mensagem exibida no LCD.
4. Altere o valor do sensor para testar diferentes mensagens.

## 💻 Código-Fonte

O código está disponível no arquivo `aqualert_arduino.ino`.  
Ele é totalmente comentado para facilitar o entendimento e a adaptação.

---

## 🎬 Demonstração em Vídeo

Assista ao vídeo demonstrativo do sistema em funcionamento:  
[Assista no YouTube](https://www.youtube.com/watch?v=_0lRp1BXRRc)

---

## 📝 Instruções de Uso

1. Monte o circuito conforme o esquema acima.
2. Faça o upload do código para o Arduino.
3. Ligue o sistema e observe as mensagens no display LCD.
4. Use o sistema para se informar sobre as condições de chuva e se prevenir!

---

## 🖼️ Figuras Ilustrativas

### Exemplo de Mensagem no Display

| Situação          | Mensagem no LCD                                 |
|-------------------|-------------------------------------------------|
| Tempo seco        |TSituacao normal                                 |
| Umidade moderada  | Leve guarda-chuva                               |
| Umidade alta      | "PERIGO! Chuva! Procure ABRIGO!                 |

---

## 👨‍💻 Créditos

Desenvolvido por Guilherme de Medeiros RM:561699 e Victor Pucci RM:561736

Disciplina: Edge Computing & IoT
Universidade: FIAP 
Ano: 2025

---
