# Sensor de Temperatura

## Introdução

 O objetivo desse projeto e criar um sensor de tempertarura, que capture corretamente a temperatura ambiente
 o desafio era:

 - detectar a temperatura ambiente
 - monstrar a informações na tela lcd

## Materiais 

- um arduino uno
- um sensor de temperatura
- uma tela lcd
- uma placa de ensaio

## Código

O void setup executa as configurações iniciais do arduino.
O void loop executa as introduçoes repetidamente. 
as variaveis sensorTMP que foi ligando na entrada A0 do arduino, o valorlido inicialmente seu valor e igual a zero.
e também usamos LiquidCrystal_I2C telaLcd (0x20,16,2) para iniciar a tela lcd.

!![sensordetemperatura png](https://github.com/user-attachments/assets/894db953-704a-443b-868a-96209a08e6f1)


