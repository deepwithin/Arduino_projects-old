//motor connections
int enA = 6;
int in1 = 3;
int in2 = 5;
int enB = 11;
int in3 = 10;
int in4 = 9;
int i = 255;
void setup() {
  // put your setup code here, to run once:
pinMode(enA,INPUT);
pinMode(in1,INPUT);
pinMode(in2,INPUT);
pinMode(enB,INPUT);
pinMode(in3,INPUT);
pinMode(in4,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
analogWrite(enA,i);

analogWrite(enB,i);
digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
digitalWrite(in3,HIGH);
digitalWrite(in4,LOW);




}
