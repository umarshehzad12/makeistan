const int redPin=3;
const int greenPin=5;
const int bluePin=6;
const int tempPin=A0;
int redLED=0;
int greenLED=0;
int blueLED=0;
int temperature=0;
int tempchange=0;
void setup() {
  // put your setup code here, to run once:
pinMode(redPin, OUTPUT);
pinMode(greenPin, OUTPUT);
pinMode(bluePin, OUTPUT);
pinMode(tempPin, INPUT);
Serial.begin(9600);
}


void loop() {
  temperature= analogRead(tempPin);
  tempchange= map(temperature, 55,85, 0, 20);
  Serial.println(tempchange);
  if(tempchange>0 && tempchange<6)
  {
    digitalWrite(bluePin,HIGH);
    digitalWrite(greenPin,LOW);
    digitalWrite(redPin,LOW);
    delay(500);
    }
      if(tempchange>=6 && tempchange<14)
  {
    digitalWrite(greenPin,HIGH);
    digitalWrite(bluePin,LOW);
    digitalWrite(redPin,LOW);
    delay(500);
    }
     if(tempchange>=14)
  {
    digitalWrite(redPin,HIGH);
    digitalWrite(bluePin,LOW);
    digitalWrite(greenPin,LOW);
    delay(500);
    }
}
