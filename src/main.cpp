#include <Arduino.h>

// 7-segment display pin definitions
const int SEGMENT_A = 2;
const int SEGMENT_B = 3;
const int SEGMENT_C = 4;
const int SEGMENT_D = 5;
const int SEGMENT_E = 6;
const int SEGMENT_F = 8;
const int SEGMENT_G = 9;

void setup() {
  // Initialize all segment pins as outputs
  pinMode(SEGMENT_A, OUTPUT);
  pinMode(SEGMENT_B, OUTPUT);
  pinMode(SEGMENT_C, OUTPUT);
  pinMode(SEGMENT_D, OUTPUT);
  pinMode(SEGMENT_E, OUTPUT);
  pinMode(SEGMENT_F, OUTPUT);
  pinMode(SEGMENT_G, OUTPUT);
}

void DisplayLetter(int letter){
  // A
  if(letter != 1 && letter != 2 && letter != 4 && letter != 7 && letter != 9)
  digitalWrite(SEGMENT_A, LOW);
  
  // B
  if(letter != 2 && letter != 5 && letter != 9)
  digitalWrite(SEGMENT_B, LOW);
  
  // C
  if(letter != 2)
  digitalWrite(SEGMENT_C, LOW);
  
  // D
  if(letter != 1 && letter != 2 && letter != 5 && letter != 7 && letter != 8)
  digitalWrite(SEGMENT_D, LOW);
  
  if(letter == 0 || letter == 2 || letter == 3 || letter == 4 || letter == 5 || letter == 6 || letter == 7 || letter == 9)
  digitalWrite(SEGMENT_E, LOW);
  
  if(letter != 1 && letter != 2 && letter != 7 && letter != 8)
  digitalWrite(SEGMENT_F, LOW);
  
  if(letter != 0 && letter != 8 && letter != 9)
  digitalWrite(SEGMENT_G, LOW);
}

void TurnOff(){
  digitalWrite(SEGMENT_A, HIGH);
  digitalWrite(SEGMENT_B, HIGH);
  digitalWrite(SEGMENT_C, HIGH);
  digitalWrite(SEGMENT_D, HIGH);
  digitalWrite(SEGMENT_E, HIGH);
  digitalWrite(SEGMENT_F, HIGH);
  digitalWrite(SEGMENT_G, HIGH);
}

void loop()
{
  for(int i=0; i<10; i++){
    DisplayLetter(i);
    delay(1000);
    TurnOff();
  }
}
