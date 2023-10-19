#include <Arduino.h>

const int pinLED = 13; // Define o pino GPIO para o LED

const int pinLED2 = 27; 

const int pinLED3 = 25; 

void setup() {
  pinMode(pinLED, OUTPUT); // Define o pino do LED como saída
  pinMode(pinLED2, OUTPUT);
  pinMode(pinLED3, OUTPUT);
}

void loop() {
  digitalWrite(pinLED, HIGH); // Liga o LED
  delay(1000); // Aguarda 1 segundo
  digitalWrite(pinLED, LOW); 
  digitalWrite(pinLED2, HIGH);
  delay(1000); // Aguarda 1 segundo
  digitalWrite(pinLED2, LOW); 
  digitalWrite(pinLED3, HIGH);
  delay(1000);
  digitalWrite(pinLED3, LOW); 
}
