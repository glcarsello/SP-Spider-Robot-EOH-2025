#include <Servo.h>
Servo motor2; // name servo motor

int pos2 = 0 // initial servo position 

void setup() {
  // put your setup code here, to run once:
  motor2.attach(2) // attaches servo on pin in board
}

void loop() {
  // put your main code here, to run repeatedly:
  for (pos = 0; pos <= 30; pos += 1) { // goes from 0 degrees to 30 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 30; pos >= 0; pos -= 1) { // goes from 30 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}
