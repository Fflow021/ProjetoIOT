#include <Servo.h>

//Servo servo1;
//Servo servo2;

void setup() {
  Serial.begin(9600);
  // pinMode do servo
  //pinMODE(4,OUTPUT);
  //pinMODE(5,OUTPUT);
  //pinMODE(2,OUTPUT);

}

void loop() {
  if(Serial.available() > 0){  
    char varParaLer = Serial.read();

    // if para fazer o servo girar o suficiente para fazer um quadrado
    if(varParaLer == '2'){
      //servo1.write(0)
      Serial.println("leu 1");
    }

    // if para fazer o servo girar o suficiente para fazer uma estrela
    if(varParaLer == '3'){
      //servo1.write(0)
      Serial.println("leu 2");
    }

    // if para fazer o servo girar o suficiente para fazer um circulo
    if(varParaLer == '3'){
      //servo1.write(0)
      Serial.println("leu 3");
    }
  }
}