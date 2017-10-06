#include <Servo.h>  // Include the Servo library

Servo servoVarName;  // Declare a variable as a Servo object
int servoPin = 2;  // Declare and initialize a variable to hold the servo's pin

// The setup() function runs once at the startup
void setup() {
  // Attach the pin to the servo variable in the setup
  servoVarName.attach(servoPin);
}

// The loop() function runs after the startup and runs indefinitely
void loop() {
  // Moves servo from one extreme to another
  for (int pos = 0; pos < 180; pos+=10) {
    servoVarName.write(pos);
    delay(5);  // Add a delay to control the speed that the servo changes
  }
}


/*
 * Import the Servo library
 *    #include <Servo.h>
 * 
 * Declare a variable as a Servo object
 *    Servo variableName;
 *    
 * Declare a variable to hold the pin number
 * that the servo is attached to
 *    int servoPin;
 * Initialize the servoPin
 *    servoPin = 2;
 * Or declare and initialize in one step
 *    int servoPin = 2;
 *    -or-
 *    int servoPin(2);
 *    
 * Attach the variable to a pin to control
 *    variableName.attach(pinNum);
 *    
 * Move the servo using the servo variable
 *    variableName.write(numberBetween0And180);
 */
