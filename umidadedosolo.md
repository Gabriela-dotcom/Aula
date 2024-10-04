# Documentação do Projeto: Sensor de Umidade do Solo

## Introdução
Este projeto tem como objetivo medir a umidade do solo utilizando um sensor analógico conectado a um microcontrolador Arduino.
A leitura da umidade é realizada periodicamente, e os resultados são exibidos no Monitor Serial. O código fornece uma maneira simples 
de identificar as condições do solo, categorizando a umidade em "Solo seco", "Solo Ideal" e "Solo Úmido".

## Materiais Necessários
Para realizar este projeto, você precisará dos seguintes materiais:

1 Arduino Uno ou qualquer outra placa compatível.
1 Sensor de Umidade do Solo (analógico).
Fios jumper para conexão.
1 protoboard (opcional).
Computador com software Arduino IDE instalado.
Esquema de Conexão
Conecte o terminal de sinal do sensor de umidade ao pino A0 do Arduino.
Conecte o terminal de VCC do sensor à fonte de 5V do Arduino.
Conecte o terminal GND do sensor ao GND do Arduino.

## Código
Abaixo está o código utilizado para realizar a leitura da umidade do solo e exibir os resultados no Monitor Serial.

![Sensor de Umidade do Solo](https://github.com/user-attachments/assets/7ea83a46-7745-49c3-ba98-19bc15eb1581)
