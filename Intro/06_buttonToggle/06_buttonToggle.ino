// This sketch toggles an LED attached to pin 9 when a button attached to pin 8 is pressed (make sure to use a current limiting resistor!)
// Nicholas Schwankl - 9/7/2020

#define ledPin      9
#define buttonPin   8

bool thisState = LOW;                     // This boolean (on/off) is used to track if the button is pressed
bool lastState = LOW;                     // This boolean is used to track if the button was pressed last loop
bool ledState  = LOW;                     // This boolean is used to track what state the LED is in

void setup() {
  
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  
}

void loop() {

  thisState = !digitalRead(buttonPin);                // Read in the state of the button

  if( (thisState==HIGH) && (lastState==LOW) ){        // If the state is pressed and it wasn't pressed before
    ledState = !ledState;                             // Set the state of the LED to the opposite of what it is now
    digitalWrite(ledPin, ledState);                   // And write that state to the LED
  }

  lastState = thisState;                              // Set the value of "lastState" for the next loop
  
}
