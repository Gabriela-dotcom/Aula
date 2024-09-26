// variáveis
int ledvermelho = 3;
int ledamarelo = 2;
int ledverde = 1;
int ledvermelho2 = 4;
int ledamarelo2 = 5;
int ledverde2 = 6;
int ledVermelho3 = 10;
int ledVerde3 = 11;
int ledVermelho4 = 12;
int ledVerde4 = 13;

// método para capturar a distância
long distancia(int trigger, int echo) { 
  pinMode(trigger, OUTPUT);
  digitalWrite(trigger, LOW);
  delay(5);
  
  digitalWrite(trigger, HIGH);
  delay(10);
  digitalWrite(trigger, LOW);
  
  pinMode(echo, INPUT);
  return pulseIn(echo, HIGH) * 0.034 / 2; 
  // convertendo para cm
}

void setup() {
  // DEFINIR LEDS COMO SAÍDA
  pinMode(ledvermelho, OUTPUT);
  pinMode(ledamarelo, OUTPUT);
  pinMode(ledverde, OUTPUT);
  pinMode(ledvermelho2, OUTPUT);
  pinMode(ledamarelo2, OUTPUT);
  pinMode(ledverde2, OUTPUT);
  pinMode(ledVermelho3, OUTPUT);
  pinMode(ledVerde3, OUTPUT);
  pinMode(ledVermelho4, OUTPUT);
  pinMode(ledVerde4, OUTPUT);
}

void loop() {
  
  int cm = distancia(8, 9);
  
  if (cm < 50) {
    digitalWrite(ledVerde3, HIGH);
    digitalWrite(ledVermelho3, LOW);
    delay(15000);
    
    digitalWrite(ledVerde4, HIGH);
    digitalWrite(ledVermelho4, LOW);
    delay(15000);
    
    digitalWrite(ledVerde3, LOW);
    digitalWrite(ledVerde4, LOW);
  } else {
    digitalWrite(ledVermelho3, HIGH);
    digitalWrite(ledVermelho4, HIGH);
  }   
  
  // Ciclo do semáforo
  // Semáforo 1
  digitalWrite(ledverde, HIGH);
  digitalWrite(ledvermelho, LOW);
  digitalWrite(ledamarelo, LOW);
  delay(5000); 
  
  digitalWrite(ledverde, LOW);
  digitalWrite(ledamarelo, HIGH);
  delay(5000); 
  
  digitalWrite(ledamarelo, LOW);
  digitalWrite(ledvermelho, HIGH);
  
  // Semáforo 2
  digitalWrite(ledverde2, HIGH);
  digitalWrite(ledvermelho2, LOW);
  digitalWrite(ledamarelo2, LOW);
  delay(5000); 
  
  digitalWrite(ledverde2, LOW);
  digitalWrite(ledamarelo2, HIGH);
  delay(5000); 
  
  digitalWrite(ledamarelo2, LOW);
  digitalWrite(ledvermelho2, HIGH);
}


  