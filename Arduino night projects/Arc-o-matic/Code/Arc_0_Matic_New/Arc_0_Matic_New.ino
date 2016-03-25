#include <Servo.h> 
void oneE(); //declaring function names that will be explained below
void Thir();
 
 //declaring the servos on arduino pins
 int servoPin2 = 10;
 int servoPin1 = 9;
 Servo servo1, servo2; 

 void setup() 
 { 
   servo2.attach(servoPin2);
   servo1.attach(servoPin1);
   Serial.begin(9600);
 } 
void loop(){
/*the program will run 25 times. 
It means that the servos will rotate 25 times according to the
program written*/
for(int i=0;i<=25;i++){

Thir(i,900);
delay(200);
oneE(500);  

}
 delay(5000); 
}
 void oneE(int dela) 
 {     // The small will draw arc of described angle
   int reading1 = 120;  
              // 0 to 180-ish
   int angle1 = reading1 ;
   
   servo1.write(angle1);
delay(dela);
servo1.write(10);
//the servo will start from 10 degree just to protect servo gear from shocks
delay(dela);

 }
void Thir(int an,int dela){
   
   int reading1 = an;  
              // 0 to 180-ish
   int angle1 = (reading1*3) ;
   //Large servo will rotate 3 degree each time
   //Just change the degrees and shape formed will be different
   servo2.write(angle1);
delay(dela);

}


