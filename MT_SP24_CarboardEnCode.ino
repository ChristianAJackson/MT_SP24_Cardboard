#include <Servo.h>

Servo myservo1;
Servo myservo2;
Servo myservo3;

const int buttonPin2 = 2;
const int buttonPin4 = 4;
const int buttonPin7 = 7;

void setup() {
  myservo1.attach(9);
  myservo2.attach(11);
  myservo3.attach(13);

  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin4, INPUT);
  pinMode(buttonPin7, INPUT);

}

void loop() {
  if (digitalRead(buttonPin2) == HIGH) {
    myservo1.write(180);
  } else {
  }

  if (digitalRead(buttonPin4) == HIGH) {
    myservo2.write(180);
  } else {
  }

  if (digitalRead(buttonPin7) == HIGH) {
    myservo3.write(180);
  } else {
  } 
}
