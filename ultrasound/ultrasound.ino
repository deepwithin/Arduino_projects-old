const int trig = 2;
const int echo = 4;

double time;
double dist;

void setup() {

Serial.begin(9600); // Starting Serial Terminal
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
}

void loop() {

digitalWrite(trig,LOW);
delayMicroseconds(10);
digitalWrite(trig,HIGH);
delayMicroseconds(30);
digitalWrite(trig,LOW);

time = pulseIn(echo,HIGH);
dist=time*0.034/2;

Serial.print("Distance : ");
Serial.println(dist);
}
