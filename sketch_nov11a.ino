#include <ESP32Servo.h>
#include <iostream>
#include <random>
Servo servo;
int servoPin = 13;  // Your signal pin

void setup() {
  Serial.begin(115200);
  servo.attach(servoPin);
  Serial.println("SG90 servo oscillation test...");
}
//TO DO:
//Make a random generator and if it lands on a number ,etc it will turn off the light.
// The  'spin' will happen ever 10 second. 
void loop() {
  int randomNum = random(1,3)
  if (randomNum == 2){
    servo.write(0);
  }
  else{
    servo.write(180);
  }
  delay(1000);
  
  // Serial.println("Moving to 0°");
  // servo.write(0);
  // delay(1000);

  // Serial.println("Moving to 180°");
  // servo.write(180);
  // delay(1000);
}
