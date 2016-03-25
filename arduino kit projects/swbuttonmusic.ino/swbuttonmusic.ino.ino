 const int buttonPin1 = 8;
 const int buttonPin2 = 13;
 int trimPot = A0;
 int velocity = 100;//velocity of MIDI notes, must be between 0 and 127
 //higher velocity usually makes MIDI instruments louder
 
 int noteON = 144;//144 = 10010000 in binary, note on command
 int noteOFF = 128;//128 = 10000000 in binary, note off command
 int buttonState1=0;
 int buttonState2=0;
 int dimmer=0;
 int note=100;
void setup() {
  //  Set MIDI baud rate:
  Serial.begin(9600);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(trimPot, INPUT);
}

void loop() {
  dimmer=analogRead(trimPot);
  velocity=map(dimmer,0,1023,0,127);
  
  buttonState1=digitalRead(buttonPin1);
  buttonState2=digitalRead(buttonPin2);
  readBUTTON(buttonState1,70,velocity); //read button 1
  readBUTTON(buttonState2,110,velocity); //read button 2
}

//send MIDI message
void MIDImessage(int command, int MIDInote, int MIDIvelocity) {
  Serial.write(command);//send note on or note off command 
  Serial.write(MIDInote);//send pitch data
  Serial.write(MIDIvelocity);//send velocity data
}
void readBUTTON(int buttonState, int note, int velocity)
{
  if(buttonState == HIGH)
{  
  
  MIDImessage(noteON, note, velocity);//turn note on
    delay(200);//hold note for 200ms
    MIDImessage(noteOFF, note, velocity);//turn note off
    delay(5);//wait 5ms until triggering next note
    
  }
if(buttonState==LOW)
  {
    
    MIDImessage(noteOFF, 0, velocity);//turn note off
    delay(5);//wait 5ms until triggering next note
    
    }

  }

