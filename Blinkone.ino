/*
  Below is our names

  - PJ Granieri
  - Josh Krymgold
  - Aragya Goyal
  
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(19, OUTPUT);
  pinMode(18, OUTPUT);
  pinMode(17, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(19, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(500);                      // wait for .5 second
  digitalWrite(19, LOW);   // turn the LED off by making the voltage LOW  

  digitalWrite(18, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(500);                      // wait for .5 second
  digitalWrite(18, LOW);   // turn the LED off by making the voltage LOW

  digitalWrite(17, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(500);                      // wait for .5 second
  digitalWrite(17, LOW);   // turn the LED off by making the voltage LOW 
}
