#include <NewPing.h>
#define TRIGGER_PIN1  3  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN1     2  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 200 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.
NewPing sonar1(TRIGGER_PIN1, ECHO_PIN1, MAX_DISTANCE); // NewPing setup of pins and maximum distance.
float val1=0;
void setup() {
 Serial.begin(9600); 
}
void loop() {
  unsigned int uS1 = sonar1.ping(); // Send ping, get ping time in microseconds (uS).
  Serial.print("Ping1: ");
  Serial.print(val1=uS1 / US_ROUNDTRIP_CM); // Convert ping time to distance in cm and print result (0 = outside set distance range)
  Serial.println("cm");
  if(val1!=0){
      if(val1>=5 && val1<=40)
           for(int i=0;i<100;i++)
          {
            digitalWrite(4,HIGH);
            delay(21); 
          }
       else if(val1>=41 && val1<=90)
          for(int i=0;i<100;i++)
          {
            digitalWrite(4,HIGH);
            delay(14);
            digitalWrite(4,LOW);
            delay(7);           
          }
       else if(val1>=91 && val1<=140)
          for(int i=0;i<100;i++)
          {
            digitalWrite(4,HIGH);
            delay(7);
            digitalWrite(4,LOW);
            delay(14);       
          }
    }
      digitalWrite(4,LOW);
      delay(3000);
       val1=0;    
}
