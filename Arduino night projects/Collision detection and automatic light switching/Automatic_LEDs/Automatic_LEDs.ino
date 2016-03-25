int trigPin = 4;
int echoPin = 3;
int red1 = 13;
int red2 = 12;
int red3 = 11;
int yel1 = 10;
int yel2 = 9;
int yel3 = 8;
int gre1 = 7;
int gre2 = 6;
int gre3 = 5;
void setup() {
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(red1, OUTPUT);
pinMode(red2, OUTPUT);
pinMode(red3, OUTPUT);
pinMode(yel1, OUTPUT);
pinMode(yel2, OUTPUT);
pinMode(yel3, OUTPUT);
pinMode(gre1, OUTPUT);
pinMode(gre2, OUTPUT);
pinMode(gre3, OUTPUT);
}
void loop() {
long duration, distance;
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance = (duration/2) / 29.1;
if (distance < 10) {
digitalWrite(red1,HIGH);
digitalWrite(red2,HIGH);
digitalWrite(red3,HIGH);
digitalWrite(gre1,LOW);
digitalWrite(gre2,LOW);
digitalWrite(gre3,LOW);
digitalWrite(yel1,LOW);
digitalWrite(yel2,LOW);
digitalWrite(yel3,LOW);
}
else if (distance > 10 and distance < 30) {
digitalWrite(yel1,HIGH);
digitalWrite(yel2,HIGH);
digitalWrite(yel3,HIGH);
digitalWrite(gre1,LOW);
digitalWrite(gre2,LOW);
digitalWrite(gre3,LOW);
digitalWrite(red1,LOW);
digitalWrite(red2,LOW);
digitalWrite(red3,LOW);
}
else {
digitalWrite(red1,LOW);
digitalWrite(red2,LOW);
digitalWrite(red3,LOW);
digitalWrite(gre1,HIGH);
digitalWrite(gre2,HIGH);
digitalWrite(gre3,HIGH);
digitalWrite(yel1,LOW);
digitalWrite(yel2,LOW);
digitalWrite(yel3,LOW);
}
delay(500);}
