// Código para testar Motor de passos
// Define os pinos conectados ao ULN2003
// Porta do Arduino - Porta do controlador do step motor
//         	D3   -   int1
//         	D4   -   int2
//         	D5   -   int3
//         	D6   -   int4
const int in1 = 3;
const int in2 = 4;
const int in3 = 5;
const int in4 = 6;
 
 // Tempo de atraso entre cada passo (em milissegundos)
int delayEntrePassos = 5;
 
void setup() {
  // Define os pinos como saídas
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
 
  // Inicialmente, desliga todas as saídas
  desligarBobinas();
}
 
void loop() {
  // Girar o motor no sentido horário por 2048 passos (1 revolução)
  girarMotor(2048, true);  // Passos, sentido horário (true)
 
  delay(1000);  // Pausa de 1 segundo
 
  // Girar o motor no sentido anti-horário por 2048 passos (1 revolução)
  girarMotor(2048, false);  // Passos, sentido anti-horário (false)
 
  delay(1000);  // Pausa de 1 segundo
}
 
// Função que faz o motor girar
void girarMotor(int passos, bool horario) {
  for (int i = 0; i < passos; i++) {
	if (horario) {
  	passoHorario();  // Gira no sentido horário
	} else {
  	passoAntiHorario();  // Gira no sentido anti-horário
    }
  }
}
 
// Função para desligar todas as bobinas do motor
void desligarBobinas() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}
 
 
// Sequência de passos para o sentido horário
void passoHorario() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay(delayEntrePassos);
 
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay(delayEntrePassos);
 
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  delay(delayEntrePassos);
 
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  delay(delayEntrePassos);
}
 
// Sequência de passos para o sentido anti-horário
void passoAntiHorario() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  delay(delayEntrePassos);
 
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  delay(delayEntrePassos);
 
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay(delayEntrePassos);
 
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay(delayEntrePassos);
}
