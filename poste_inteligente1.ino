
//variaveis

int led = 3;
int sensorluminosidade = A0;
int valorsensor = 0;
// variavel de capiturar a luminosidade
int luz =0;

void setup()
{
  // led e de saida
  pinMode(led,OUTPUT);
  // sensor e de entrada
  pinMode(sensorluminosidade,INPUT);
 
}

void loop()
{
  // capturar o que o sensor leu no ambiente
  // analogRead é usado para leitura analogica
  
  luz = analogRead(sensorluminosidade);
  /* as portas analogicas analogicas capturam dados que variam
   de 0 até 1023 */
  
  // SE ESTIVER COM POUCA LUMINOSIDADE NO AMBIENTE
  if(luz<500){
    //digitalWrite(led,HIGH);// ligar led
    
   // passar ao led intensidade maxima
    analogWrite(led,1023); 
    
  }if(luz>500 & luz<900){
    
    //passar ao led intensidade média
    analogWrite(led,500); 
  }
  
  else{// SE TIVER MUITA LUMINOSIDADE
    //digitalWrite(led,LOW);// desligar led
    
    // passar ao led intensidade minima
    analogWrite(led,0);
  }

}