#include <SoftwareSerial.h>
#include <Servo.h>
#include <Stepper.h>  // Reintegra a biblioteca Stepper
#include "chars.h"    // Reintegra a biblioteca chars.h

// Pinos para a conexão da mecânica controlada
#define SERVO_PIN 9
#define DOT_PIN 8
#define STEPPER_PIN_1 3
#define STEPPER_PIN_2 4
#define STEPPER_PIN_3 5
#define STEPPER_PIN_4 6

// Atrasos para o eletroímã, em milissegundos
#define DOT_UP_DELAY 65
#define DOT_DOWN_DELAY 25

// Posições extremas da área de desenho do servomotor
#define SERVO_MIN 80
#define SERVO_MAX 120

// Quantidade de pontos na altura. Quanto maior, menor serão as letras
#define SERVO_STEPS 25

#define SERVO_STEP (SERVO_MAX - SERVO_MIN) / SERVO_STEPS

// Tempo que o servomotor leva para se mover de ponto a ponto, em milissegundos
#define SERVO_DELAY SERVO_STEP * 20

// Tempo de atraso entre cada passo (em milissegundos)
int delayEntrePassos = 5;

// Margem inferior em pontos até a linha de texto
#define LINE_TAB 15

Servo servo;                        // Servomotor
Stepper stepper(4096, STEPPER_PIN_1, STEPPER_PIN_2, STEPPER_PIN_3, STEPPER_PIN_4);  // Motor de passo
SoftwareSerial Bluetooth(A3, A2);   // [RX, TX] Porta serial para o módulo Bluetooth

// Declarações das funções
void printString(char* str);
void printChar(char c);
void ping();
void girarMotorAntiHorario(int passos);
void desligarBobinas();
void passoAntiHorario();
void printLine(int b); // Adicionei a declaração da função printLine

void setup() {
  Bluetooth.begin(9600);
  
  servo.attach(SERVO_PIN);
  pinMode(DOT_PIN, OUTPUT);
  
  // Inicialmente, desliga todas as saídas do motor de passo
  desligarBobinas();
  
  printString("ERAWM");
}

// Função para desenhar um ponto no papel
void ping() {
  digitalWrite(DOT_PIN, 0);
  delay(DOT_UP_DELAY);
  digitalWrite(DOT_PIN, 1);
  delay(DOT_DOWN_DELAY);
}

// Função para girar o motor de passo no sentido anti-horário
void girarMotorAntiHorario(int passos) {
  for (int i = 0; i < passos; i++) {
    passoAntiHorario();
  }
}

// Função para desligar todas as bobinas do motor
void desligarBobinas() {
  digitalWrite(STEPPER_PIN_1, LOW);
  digitalWrite(STEPPER_PIN_2, LOW);
  digitalWrite(STEPPER_PIN_3, LOW);
  digitalWrite(STEPPER_PIN_4, LOW);
}



// Sequência de passos para o sentido anti-horário
void passoAntiHorario() {
  digitalWrite(STEPPER_PIN_4, HIGH);
  delay(delayEntrePassos);
  digitalWrite(STEPPER_PIN_4, LOW);
  
  digitalWrite(STEPPER_PIN_3, HIGH);
  delay(delayEntrePassos);
  digitalWrite(STEPPER_PIN_3, LOW);
  
  digitalWrite(STEPPER_PIN_2, HIGH);
  delay(delayEntrePassos);
  digitalWrite(STEPPER_PIN_2, LOW);
  
  digitalWrite(STEPPER_PIN_1, HIGH);
  delay(delayEntrePassos);
  digitalWrite(STEPPER_PIN_1, LOW);
}
// Função que imprime um caractere de acordo com a fonte definida,
// chamando sequencialmente as funções printLine()
void printChar(char c) {
  int n = 0;
  
  for (int i = 0; i < 8; i++) {
    if (chars[c][i] != 0) {
      printLine(chars[c][i]);
      n++;
    } else {
      // Em vez de chamar stepper.step(15), vamos usar girarMotorHorario para movimentar
      girarMotorAntiHorario(15);
    }
  }
}

// Função que imprime a string recebida como parâmetro,
// chamando sequencialmente as funções printChar()
void printString(char* str) {
  while (*str != '\0') {
    printChar(*str);
    str += 1;
  }
}

int n;

void loop() {
  // Caso algo chegue via Bluetooth, imprimimos tudo o que for possível
  if (Bluetooth.available() > 0) {
    while (Bluetooth.available() > 0) {
      n = Bluetooth.read();
      if (n >= 0) printChar((char)n);
    }
  }

  // Girar o motor de passo constantemente (ajuste a quantidade de passos como necessário)
  girarMotorAntiHorario(1); // Gira 1 passo a cada loop, ajuste conforme necessário
  
  // Assim que finalizamos, enviamos um '1' como resposta,
  // indicando que estamos prontos para receber mais dados
  Bluetooth.write(1);
  delay(1500);
}

// Função para desenhar uma coluna de 8 pontos a partir de um byte
void printLine(int b) {
  // Volta ao início da coluna
  servo.write(SERVO_MAX - (LINE_TAB) * SERVO_STEP);
  
  // Se a coluna não estiver vazia, desenhamos,
  // caso contrário, apenas movemos a fita
  if (b != 0) {
    servo.write(SERVO_MAX - (LINE_TAB - 1) * SERVO_STEP);
    delay(SERVO_DELAY * 12);

    // Imprime os pontos sequencialmente, lendo bit a bit
    for (int j = 0; b != 0; j++) {
      servo.write(SERVO_MAX - (LINE_TAB + j) * SERVO_STEP);
      delay(SERVO_DELAY);
  
      if (b & 1) ping();
      b >>= 1;
    }
  }
  
  // Movemos a fita, girando o motor após imprimir a linha
  girarMotorAntiHorario(50); // Ajuste conforme necessário
}