#include <Servo.h> 

Servo myservo;
int angle;

void setup() 
{ 
  myservo.attach(3);
  myservo.writeMicroseconds(1500);  // set servo to mid-point
  angle = myservo.read();
//  Serial.write(angle);
} 

void loop() {} 
