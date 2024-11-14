#include <Servo.h>

Servo eixo_x;
Servo eixo_y;

void setup() {
  Serial.begin(9600);
  //eixo_z.attach(8)
  eixo_x.attach(9);
  eixo_y.attach(10);

}

void loop() {
  if(Serial.available() > 0){  
    int num = Serial.parseInt();

    if(num == 1){
      delay(2000);
      executarQuadrado();
    } else if(num == 2){
      executarTriangulo();
    } else if(num == 3){
      executarCirculo();
    } else {
        Serial.println("Numero não reconhcido");
    }
  }
}
  void executarQuadrado() {
    int posicoes[4][2] = {
      {0, 0},
      {180, 0},
      {180, 180},
      {0, 0}
    };

    for (int i = 0; i < 4; i++) {
      eixo_x.write(posicoes[i][0]);
      eixo_y.write(posicoes[i][1]);
      delay(2000);
    }

    eixo_x.write(0);
    eixo_y.write(0);
    delay(2000);
  }

// dessa parte pra baixo infelizmente nao pude testar
  void executarTriangulo() {
    int posicoes[3][2] = {
      {0, 0},
      {180, 0}, 
      {90, 180}, 
    };

    for (int i = 0; i < 3; i++) {
      eixo_x.write(posicoes[i][0]);
      eixo_y.write(posicoes[i][1]);
      delay(2000);
    }

    eixo_x.write(0);
    eixo_y.write(0);
    delay(2000); 
}

void executarCirculo() {
    int posicoes[8][2] = {
        {90, 0},
        {128, 45},
        {180, 90},
        {128, 135},
        {90, 180},
        {52, 135},
        {0, 90},
        {52, 45}
    };

    for (int i = 0; i < 8; i++) {
        eixo_x.write(posicoes[i][0]);
        eixo_y.write(posicoes[i][1]);
        delay(2000);
    }

    eixo_x.write(0);
    eixo_y.write(0);
    delay(2000);
}