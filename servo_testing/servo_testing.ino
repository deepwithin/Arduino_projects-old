#include <Servo.h>

Servo Lf_srv;
Servo Lb_srv;
Servo Rf_srv;
Servo Rb_srv;

int pos = 90;

void setup()
{
  Lf_srv.attach(5);
  Lb_srv.attach(3);
  Rf_srv.attach(6);
  Rb_srv.attach(11);

//  Lf_srv.write(pos);
//  Lb_srv.write(pos);
//  Rf_srv.write(pos);
//  Lf_srv.write(pos);
}

void loop() {
//  Lf_srv.write(pos);
//  Lb_srv.write(pos);
//  Rf_srv.write(pos);
  Lf_srv.write(pos);
/*  delay(1000);
  Lb_srv.write(10);
  delay(1000);
  Lb_srv.write(170);
  
  
  delay(1000);
*/  
}
