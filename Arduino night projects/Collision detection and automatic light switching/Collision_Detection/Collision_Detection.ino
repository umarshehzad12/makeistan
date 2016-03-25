#define trigPin 12
#define echoPin 13
int Buzzer = 8;

void setup() {
Serial.begin (9600);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(Buzzer, OUTPUT);
}

void loop() {
int duration, distance;
digitalWrite(trigPin, HIGH);
delayMicroseconds(1000);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance = (duration/2) / 29.1;
if (distance >= 80 || distance <= 0){
Serial.println("no object detected");
digitalWrite(Buzzer, LOW);

}
else {
Serial.println("object detected");
tone(Buzzer, 400); // play 400 Hz tone for 500 ms
delay(500);
tone(Buzzer, 800); // play 800Hz tone for 500ms
delay(500);
tone(Buzzer, 400); // play 400 Hz tone for 500 ms
delay(500);
tone(Buzzer, 800); // play 800Hz tone for 500ms
delay(500);
tone(Buzzer, 400); // play 400 Hz tone for 500 ms
delay(500);
tone(Buzzer, 800); // play 800Hz tone for 500ms
delay(500);
noTone(Buzzer);
}
delay(300);
}

