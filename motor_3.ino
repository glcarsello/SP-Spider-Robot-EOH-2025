#include <Servo.h>

Servo motor_3;


int pos3 = 0;

void setup(){
  motor_3.attach(9);
  }

void loop() {
  for (pos3 = 0; pos3 <= 15; pos3 += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    motor_3.write(pos3);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos3 = 15; pos3 >= 0; pos3 -= 1) { // goes from 180 degrees to 0 degrees
    motor_3.write(pos3);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}
