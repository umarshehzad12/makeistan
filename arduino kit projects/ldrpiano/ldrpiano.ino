int frequencies []= {262, 294, 330, 349, 392, 415, 440, 466, 740, 784, 831, 988, 1109, 1175, 2093};
const int buzzerPin= 9;
const int ldrPin=A0;
int ldrValue=0;
byte bits=B0000;

void setup() {
  // put your setup code here, to run once:
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(ldrPin,INPUT);
for (int i=0; i<15; i++)
{
  tone(buzzerPin,frequencies [i], 500);
  bits=B0000;
  bits=bits+i+1;
  Serial.begin(9600);
  
   digitalWrite(10, HIGH && (bits & B1000));
   digitalWrite(11, HIGH && (bits & B0100));
   digitalWrite(12, HIGH && (bits & B0010));
   digitalWrite(13, HIGH && (bits & B0001));
   delay(500);
   
  }
}

void loop() {
   digitalWrite(10, LOW);
   digitalWrite(11, LOW);
   digitalWrite(12, LOW);
   digitalWrite(13, LOW);
   ldrValue=analogRead(ldrPin);
   Serial.println(ldrValue);
   ldrValue=map(ldrValue,50,800,0,14);
   //Serial.println(ldrValue);
   bits=ldrValue;
   digitalWrite(10, HIGH && (bits & B1000));
   digitalWrite(11, HIGH && (bits & B0100));
   digitalWrite(12, HIGH && (bits & B0010));
   digitalWrite(13, HIGH && (bits & B0001));
   tone(buzzerPin,frequencies [ldrValue], 500);
   delay(500);
  // put your main code here, to run repeatedly:

}
