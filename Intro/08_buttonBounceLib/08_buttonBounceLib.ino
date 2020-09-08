// This sketch toggles an LED attached to pin 9 when a button attached to pin 8 is pressed (make sure to use a current limiting resistor!)
// Debouncing is added to prevent accidental quick re-presses of the button
// This sketch uses the Bounce2 debouncing library by Thomas O Fredericks (and others), which can be found in the library manager or below
// https://github.com/thomasfredericks/Bounce2
// Nicholas Schwankl - 9/7/2020

#include <Bounce2.h>

#define ledPin      9
#define buttonPin   8

bool ledState = LOW;

Bounce debounce = Bounce();                     // Create an instance of the Bounce object from the Bounce2 library

void setup() {
  
  pinMode(ledPin, OUTPUT);

  debounce.attach(buttonPin, INPUT_PULLUP);     // Attach the button pin to the Bounce object with internal pullup resistor enabled
  debounce.interval(100);                       // Set the debouncing interval to 100ms (any imput shorter than this will be ignored
  
}

void loop() {

  debounce.update();                            // Update the state of the Bounce object (this acts like a digitalRead)

  if( debounce.fell() ){                        // If the state of the Bounce object has fallen from 5V to GND (button has been pressed)
    ledState = !ledState;                       // Invert the state of the LED
    digitalWrite(ledPin, ledState);             // And write that value to the LED
  }

}
