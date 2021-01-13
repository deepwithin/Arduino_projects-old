//motor connections
int enA = 6;
int in1 = 3;
int in2 = 5;
int enB = 11;
int in3 = 10;
int in4 = 9;
int i;

void setup() {
pinMode(enA,INPUT);
pinMode(in1,INPUT);
pinMode(in2,INPUT);
pinMode(enB,INPUT);
pinMode(in3,INPUT);
pinMode(in4,INPUT);
}

void loop() {

digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
digitalWrite(in3,HIGH);
digitalWrite(in4,LOW);


for(i=0;i<=255;i++)
{
  analogWrite(enA,i);
  delay(20);
}
for(i=0;i<=255;i++)
{
  analogWrite(enB,i);
  delay(20);
}


digitalWrite(in1,LOW);
digitalWrite(in2,HIGH);
delay(10);
digitalWrite(in3,LOW);
digitalWrite(in4,HIGH);
delay(10);

for(i=0;i<=255;i++)
{
  analogWrite(enA,i);
  delay(20);
}
for(i=0;i<=255;i++)
{
  analogWrite(enB,i);
  delay(20);
}
}
