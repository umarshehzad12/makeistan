// connect motor controller pins to Arduino digital pins
// motor one
int enA = 10;
int in1 = 9;
int in2 = 8;
// motor two
int enB = 5;
int in3 = 7;
int in4 = 6;

const int trig = 12;

const int echo = 11;

//const int motorPin1 = 2;//left motor of the robot

//const int motorPin1 = 3;//right motor of the robot

long duration, inches, cm;
void setup()
{
  // set all the motor control pins to outputs
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}
void up()
{
  // this function will run the motors in both directions at a fixed speed
  // turn on motor A
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  // set speed to 200 out of possible range 0~255
  analogWrite(enA, 150);
  // turn on motor B
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  // set speed to 200 out of possible range 0~255
  analogWrite(enB, 150);
  //delay(2000);
  // now change motor directions
  
}
void down()
{
 digitalWrite(in2, HIGH);
  digitalWrite(in1, LOW);
  // set speed to 200 out of possible range 0~255
  analogWrite(enA, 150);
  // turn on motor B
  digitalWrite(in4, HIGH);
  digitalWrite(in3, LOW);
  // set speed to 200 out of possible range 0~255
  analogWrite(enB, 150);
  //delay(2000);
  // now change motor directions
}
void left()
{
 
  digitalWrite(in1, HIGH);
 
digitalWrite(in2, LOW);  // set speed to 200 out of possible range 0~255
  analogWrite(enA, 150);
  
  analogWrite(enB, 0);
  //delay(2000);
  // now change motor directions
}
void right()
{
digitalWrite(in2, HIGH);
 
digitalWrite(in1, LOW);  // set speed to 200 out of possible range 0~255
  analogWrite(enB, 150);
  
  analogWrite(enA, 0);
}
void loop()
{
  digitalWrite(trig, LOW);

delayMicroseconds(2);

digitalWrite(trig, HIGH);

delayMicroseconds(10);

digitalWrite(trig, LOW);

duration = pulseIn(echo, HIGH);

//this returns the time duration taken

//for the ultrasonics to hit an obstacle and return

inches = duration / 74 / 2;//converts the time duration into inches

cm = duration / 29 / 2;//converts the time duration to cm

if(cm>15){//checks for the distance is greater than 4cm

//the bot forward if the condition is true
up();
//digitalWrite(motorPin1,HIGH);//Both the motors are in ON state

//digitalWrite(motorPin2,HIGH);

Serial.print("No obstacle detected");
}
else
{
//the robot turns right when an obstacle is detected
right();
//digitalWrite(motorPin1,HIGH);//the left motor is in ON state

//digitalWrite(motorPin2,LOW);//the right motor is in OFF state

Serial.print("Obstacle detected");

delay(100);//this delays the process by 100millisec

Serial.print(inches);

//Serial.print(“in, “);

Serial.print(cm);

//Serial.print(“cm”);

Serial.println();

delay(100);//this delays the code by 0.1 second and repeats the loop again


}}

