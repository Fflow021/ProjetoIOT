#include <Servo.h>

Servo servo1;
Servo servo2;

void setup() {
  Serial.begin(9600);
  // pinMode do servo
  pinMODE(2,OUTPUT);
}

void loop() {
  // if para fazer o servo girar o suficiente para fazer um quadrado
  if(Serial.read(1)){
    servo1.write(0)
  }

  // if para fazer o servo girar o suficiente para fazer uma estrela
  if(Serial.read(2)){
    servo1.write(0)
  }

  // if para fazer o servo girar o suficiente para fazer um circulo
  if(Serial.read(3)){
    servo1.write(0)
  }
}
