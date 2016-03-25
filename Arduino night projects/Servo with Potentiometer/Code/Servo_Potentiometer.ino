#include <Servo.h>

Servo myservo3;

Servo myservo5;



int potpin = 1;
int potpin2 = 2;



int val = 0;
int val2 = 0;



void setup()
{

myservo3.attach(9);
myservo5.attach(10);


}

void loop()
{

val = analogRead(potpin);
val = map(val, 3, 1023, 0, 176);

myservo3.write(val);

delay(25);

val2 = analogRead(potpin2);
val2 = map(val2, 3, 1023, 0, 176);

myservo5.write(val2);

delay(25);

}
