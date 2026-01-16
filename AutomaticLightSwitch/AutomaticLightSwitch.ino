#include <ESP32Servo.h>
Servo servo;

int servoPin = 13;
int off = 0;
int on = 180;
int currentPos = off;

void setup() {
  Serial.begin(115200);
  servo.attach(servoPin);
  randomSeed(analogRead(0));
  Serial.println("SG90 servo oscillation test...");
  servo.write(currentPos);
}

void loop() {
  int randomNum = random(1, 11);
  Serial.print("Random number: ");
  Serial.println(randomNum);

  if (randomNum == 5) {
    currentPos = off;
  } else {
    currentPos = on;
  }

  servo.write(currentPos);
  delay(10000);  // wait 10 seconds
}
