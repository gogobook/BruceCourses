#include <Servo.h> 

#define Servo1Pin 11
#define Servo2Pin 12

Servo myservo1;
Servo myservo2;

void InitServo(Servo myservo, int Pins)
{
    myservo.attach(Pins) ;
}

void ServotoZero(Servo myservo)
{
    myservo.write(90) ;
}

void ServoMove(Servo myservo, int angle)
{
    myservo.write(angle) ;
}


void setup()  
{
//    init Serial echo  
     Serial.begin(9600);   // 與電腦序列埠連線
  Serial.println("Program  is ready!");
  
//----------Servo
    myservo1.attach(Servo1Pin) ;
    myservo2.attach(Servo2Pin) ;    ServotoZero(myservo1) ;
    ServotoZero(myservo2) ;
}

void loop()
  {

}


