//Testa o Micro Servo
#include <Servo.h>
 
Servo myServo;  // Cria um objeto servo para controlar o servo motor
int pos = 0;	// Variável para armazenar a posição do servo
 
void setup() {
  myServo.attach(9);  // Conecta o servo no pino 9 do Arduino
}
 
void loop() {
  // Gira o servo de 0 a 180 graus
  for (pos = 0; pos <= 180; pos += 1) {
	myServo.write(pos);  // Define a posição do servo
	delay(15);       	// Atraso para permitir que o servo alcance a posição
  }
 
  // Gira o servo de 180 a 0 graus
  for (pos = 180; pos >= 0; pos -= 1) {
	myServo.write(pos);  // Define a posição do servo
	delay(15);       	// Atraso para permitir que o servo alcance a posição
  }
}
