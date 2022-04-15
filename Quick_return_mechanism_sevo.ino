//trying to simulate quick return mechnism with servo
#include <Servo.h>

int servoPin = 9;
int servoPos = 5;
Servo myServo;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myServo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
myServo.write(servoPos);
int top = -1;
while (top < 0)
{
  float lag = 2 ;//initial lag
  for (int i = 5 ; i < 180 ; i++){
      myServo.write(i);
      delay (lag);
      lag = lag + 0.1;//added lag
  }
}
top ++ ;
//quick return
myServo.write(servoPos);
}
