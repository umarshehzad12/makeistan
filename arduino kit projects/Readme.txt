This folder contains the arduino sketches for arduino kits projects. 

All of these projects can be made using components and equipment provided within the Arduino kits by Makeistan.

Following are the short descriptions for each project:
-------------------------------------------------------------------------------------------------------------------------------------
Light converted to music (ldrpiano):
Ever wondered if light could play music? You can make a circuit that does that, using a device called LDR (Light dependant resistor), which is a sensor that detects the intensity of light. It is a circuit that converts the intensity of light into different musical notes. The program has 15 different preprogrammed notes but it can be modified for playing even more. You can also make it more interesting by increasing the number of light sensors.

Temperature controlled LED (tempRGB):
This circuit has a color changing LED light and a dial to indicate temperature changes. It indicates temperature level using 3 different colored LED lights and the motor for rotating the dial. It has 3 levels, cold (blue), normal (green) and hot (red). When the temperature is lower than the low threshold it turns on the blue LED and the dial indicates cold; if it is above the high threshold it turns on the red LED and turns the dial to hot; and if it is in between the two threshold values, it turns on the green LED and the rotates the dial to the middle. The code needs to be calibrated depending upon the temperature of the surroundings of the circuit.

Push button MIDI music (swbuttonmusic):
Arduino is a computer and can interact with other computers to generate some interesting results. You can make a circuit with arduino and multiple push buttons which are able to send MIDI signals to your computer. These MIDI signals are converted to music using a synthesizer such as Garageband or Helm.
MIDI is a protocol which was developed for different music instruments to communicate with each other. You can learn more about MIDI on this instructable: http://www.instructables.com/id/What-is-MIDI/

Simon Says (simonsays):
It is a game that has 4 sets of lights and buttons. The circuit plays a tune and lights up some LEDs in a random sequence. You have to push the corresponding push buttons in the same sequence. The length of the sequence is increased every time you guess it right but resets the circuit if you make a mistake. It’s a fun to play game and even has different settings that you can change within the code. You can find more information from the original source here on Sparkfun’s website: https://learn.sparkfun.com/tutorials/sik-experiment-guide-for-arduino---v32/experiment-16-simon-says