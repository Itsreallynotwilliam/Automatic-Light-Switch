#include <ESP32Servo.h>
Servo servo;

int servoPin = 13;
int servoPin1 = 25;

int topoff = 0;
int topon = 35;

int bottomon = 35;
int bottomoff = 0;

int currentPosTop = topoff;
int currentPosBottom = bottomon;

void setup() {
  Serial.begin(115200);
  servo.attach(servoPin);
  servo.attach(servoPin1);
  randomSeed(analogRead(0));
  servo.write(currentPosTop);
}

void loop() {
  int randomNum = random(1, 11);
  Serial.print("Random number: ");
  Serial.println(randomNum);
  currentPosTop = topon;
  currentPosBottom = bottomoff;
  
  if (randomNum == 5) {
    currentPosTop = topoff;
    currentPosBottom = bottomon;
  } else {
    currentPosTop = topon;
    currentPosBottom = bottomoff;
  }

  servo.write(currentPosTop);
  servo.write(currentPosBottom);
  delay(2000);  // wait 2 seconds
  // currentPosTop = topoff;
  // currentPosBottom = bottomon;
  // servo.write(currentPosTop);
  // servo.write(currentPosBottom);
  // delay(2000);
}
