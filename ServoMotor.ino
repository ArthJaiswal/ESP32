#include <ESP32Servo.h>

Servo myservo;

int pos = 0;
int servoPin = A15;

void setup() {
  // put your setup code here, to run once:
myservo.attach(servoPin);

}

void loop() {
  // put your main code here, to run repeatedly:
 for(pos = 0; pos <= 180; pos +=20)
 {
   myservo.write(pos);
   delay(100);
 }
 for (pos = 180; pos >= 0; pos -= 20)
 {
   myservo.write(pos);
   delay(100);
 }
}
