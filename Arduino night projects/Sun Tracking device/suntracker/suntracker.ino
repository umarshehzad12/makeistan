#include <Servo.h>
Servo myservo;  // create servo object to control a servo
Servo myservo1;// twelve servo objects can be created on most boards

int pos;
int pos11;
int lightPin0 = A0;  //define a pin for Photo resistor
int lightPin1 = A1;  //define a pin for Photo resistor
int lightPin2 = A2;  //define a pin for Photo resistor
int lightPin3 = A3;  //define a pin for Photo resistor
int lightPin4 = A4;  //define a pin for Photo resistor

int threshold0 = 200;
int threshold1 = 200;
int threshold2 = 200;
int threshold3 = 200;
int threshold4 = 200;

void setup()
{

  Serial.begin(9600);  //Begin serial communcation

  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  myservo1.attach(10);  // attaches the servo on pin 10 to the servo object
  pinMode(lightPin0, INPUT);
  pinMode(lightPin1, INPUT);
  pinMode(lightPin2, INPUT);
  pinMode(lightPin3, INPUT);
  pinMode(lightPin4, INPUT);
}
long int sum = 0;
float value0 = 500;
float value1 = 1000;
float value2 = 250;
float value3 = 500;
float value4 = 1000;
int value00;
int value11;
int value22;
int value33;
int value44;

void loop()
{ value00 = analogRead (lightPin0);
  value11 = analogRead (lightPin1);
  value22 = analogRead (lightPin2);
  value33 = analogRead (lightPin3);
  value44 = analogRead (lightPin4); 
  Serial.println(value00);
  Serial.println(value11);
  Serial.println(value22);
  Serial.println(value33);
  Serial.println(value44);
  
  if(value00 > threshold0)
 {
    pos = map(value0, 0, 1023, 0, 180);
    Serial.println(pos);
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    digitalWrite(8, HIGH);
   }


else{
  if(value11 > threshold1)
 {
    pos = map(value1, 0, 1023, 0, 180);
    Serial.println(pos);
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    
   }


else{
      pos = map(value1, 0, 1023, 0, 180);
  }


}

if(value22  > threshold2)
  {
    pos = map(value2, 0, 1023, 0, 180);
    Serial.println(pos);
    myservo1.write(pos);              // tell servo to go to position in variable 'pos'
  }
else
{
if(value33 > threshold3)
{  {
    pos = map(value3, 0, 1023, 0, 180);
    Serial.println(pos);
    myservo1.write(pos);              // tell servo to go to position in variable 'pos'
  }
}
else{
if(value44 > threshold4)
 { {
    pos = map(value4, 0, 1023, 0, 180);
    Serial.println(pos);
    myservo1.write(pos);              // tell servo to go to position in variable 'pos'
  }
    
 }else
  {
    pos = map(0, 0, 1023, 0, 180);
  }
}
}
  delay(2000);


}
