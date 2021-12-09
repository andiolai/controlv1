
/*
 * 8 BUTTONS SIMPLE KEYBOARD CONTROLLER
 DESIGNED for arduino pro micro/leonardo board using simple push button
 running processing patch/vst/online piano
  
  2021 december
 
 * BASED ON THE ARDUINO KEYBOARD EXAMPLE AS BELOW:
 * 
  Controls the mouse from five pushbuttons on an Arduino Leonardo, Micro or Due.

  Hardware:
  - five pushbuttons attached to D2, D3, D4, D5, D6

  The mouse movement is always relative. This sketch reads four pushbuttons, and
  uses them to set the movement of the mouse.

  WARNING: When you use the Mouse.move() command, the Arduino takes over your
  mouse! Make sure you have control before you use the mouse commands.

  created 15 Mar 2012
  modified 27 Mar 2012
  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/KeyboardAndMouseControl
*/

//keyboard library
#include <Keyboard.h>

// set pin numbers for the eight buttons
const int qButton  = 2;
const int aButton = 3;
const int wButton = 4;
const int sButton = 5;
const int eButton = 6;
const int dButton = 7;
const int rButton = 8;
const int fButton = 9;

void setup() { // initialize the buttons' inputs:
  pinMode(qButton, INPUT);
  pinMode(aButton, INPUT);
  pinMode(sButton, INPUT);
  pinMode(wButton, INPUT);
  pinMode(sButton, INPUT);
  pinMode(eButton, INPUT);
  pinMode(dButton, INPUT);
  pinMode(rButton, INPUT);
  pinMode(fButton, INPUT);


  Serial.begin(9600);
  Keyboard.begin();
}

void loop() {
  // use serial input to control the mouse:

  if (Serial.available() > 0) {
    char inChar = Serial.read();
  }

  // use the pushbuttons to control the keyboard:
  
  if (digitalRead(qButton) == HIGH) {
    Keyboard.press('q');
    delay(50);
    Keyboard.releaseAll();// remember to use this to avoid stuck in some keys

  }
  
 if (digitalRead(aButton) == HIGH) {
    Keyboard.write('a');
    delay(50);
    Keyboard.releaseAll();

   }

  if(digitalRead(wButton) == HIGH) {
    Keyboard.press('w');
    delay(50);
    Keyboard.releaseAll();

   }
  
   if (digitalRead(sButton) == HIGH) {
     Keyboard.press('s');
     delay(50);
     Keyboard.releaseAll();

  }
   
  if (digitalRead(eButton) == HIGH) {
     Keyboard.press('e');
     delay(50);
     Keyboard.releaseAll();

   }
   
   if (digitalRead(dButton) == HIGH) {
     Keyboard.press('d');
     delay(50);
     Keyboard.releaseAll();

   }

   if (digitalRead(rButton) == HIGH) {
     Keyboard.press('r');
     delay(50);
     Keyboard.releaseAll();

   }

   if (digitalRead(fButton) == HIGH) {
     Keyboard.press('f');
     delay(50);
     Keyboard.releaseAll();

   }

delay(50);
  }
