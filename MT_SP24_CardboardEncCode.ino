#include <Servo.h>

Servo myservo;
const int buttonPin2 = 2;
const int buttonPin4 = 4;
const int buttonPin7 = 7;

void setup() {
  myservo.attach(9);
  myservo.attach(11);
  myservo.attach(13);

  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin4, INPUT);
  pinMode(buttonPin7, INPUT);
}

void loop() {
  if (digitalRead(buttonPin2) == HIGH) {
    myservo.write(180);
  } else {
  }

  if (digitalRead(buttonPin4) == HIGH) {
    myservo.write(180);
  } else {
  }

  if (digitalRead(buttonPin7) == HIGH) {
    myservo.write(180);
  } else {
  } 

}