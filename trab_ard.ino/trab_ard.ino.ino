#include <Servo.h>

Servo eixo_x;
Servo eixo_y;

void setup() {
  Serial.begin(9600);
  eixo_x.attach(9);
  eixo_y.attach(10);

}

void loop() {
  if(Serial.available() > 0){  
    int num = Serial.parseInt();

    // if para fazer o servo girar o suficiente para fazer um quadrado
    if(num == 1){
      delay(2000);
      executarQuadrado();
    } else if(num == 2){
      // lógica de outra forma
    } else if(num == 3){
      // logica de outra forma
    } else {
        Serial.println("Numero não reconhcido"); // isso aqui tinha que ta aqui pra caso n tivesse um erro aleatório caisse no caso de num == 3  
    }
  }
}
  void executarQuadrado() {
    int posicoes[4][2] = {
      {0, 0},
      {180, 0},
      {180, 180},
      {0, 180}
    };

    for (int i = 0; i < 4; i++) {
      eixo_x.write(posicoes[i][0]);
      eixo_y.write(posicoes[i][1]);
      delay(2000);
    }

    // reset dos eixos
    eixo_x.write(0);
    eixo_y.write(0);
    delay(2000);
  }