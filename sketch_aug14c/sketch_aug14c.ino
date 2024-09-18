#include <Servo.h> 
Servo myServo;
int servodelay=1000;
int servomax=180;
int servomin=0;
int servoPos=0;
int timerSecond =60;

void setup() {
  myServo.attach(9);
  // put your setup code here, to run once:

}

void loop() {
  for(servoPos = servomin; servoPos <= servomax ; servoPos +=servomax/timerSecond){
    myServo.write(servoPos);
    delay(servodelay);
    
  }
  // put your main code here, to run repeatedly:

}
