#include <Servo.h> //Servo Library

Servo servoVarName; // servo object
int servoPin(2); 

void setup() {
  servoVarName.attach(servoPin);
}

void loop() {
  for (int pos =0; pos < 180; pos++) {
    servoVarName.write(pos);
    delay(20);
  }
  for (int pos = 180; pos > 0; pos-= 180 / 8) {
    servoVarName.write(pos);
    delay(500); // This is in milliseconds
  }
}

