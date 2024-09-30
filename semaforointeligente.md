# Semáforo Inteligente

  # Introdução

Este projeto visa a ajudar uma cidade tem tinha um seguinte problema, para instalar os semáforos em uma rodovia com pista dupla, e ambas tem uma faixa de pedestre que atravessa ela
o desafio era o seguinte:

- Criar 2 semáforos para carros usando leds (verde, amarelo, vermelho), considerando que cada pista tem um sentido diferente.
- criar 2 semáforos para pedestres usando leds (vermelho e verde), um para cada pista.
- Os semáforos de carros ficaram sempre no verde , até que um pedestre chegue próximo da faixa de pedestre.
- ao chegar próximo a faixa de pedestre, um sensor de distancia é acionado (50cm), e logo em seguida todos os sinais de carro ficarão vermelhos.
- durante 15 segundos os 2 semáforos de pedestres ficarão verde.
- quando o sensor não detectar mais nenhum pedestre , os sinais de pedestre ficarão vermelho e os semáforos dos carros abrirá.

  # Materiais 

- um arduino uno
- 10 leds (4 veremlhos, 4 verdes e 2 amarelos)
- um sensor de distância
- e uma placa de ensaio

  # Código

  o void setup e usado para executar as configurações inicias do arduino
  o void loop e usado para executar instalações em loop (essas que vão ser repetidas várias vezes)
  as variaveis que são (ledvermelho 1, 2, 3 e 4), (ledverde 1, 2, 3 e 4) e (ledamarelo 1 e 2)

  ![imagem](semaforointeligente.png)
