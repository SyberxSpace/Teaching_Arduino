// This sketch toggles an LED attached to pin 9 when a button attached to pin 8 is pressed (make sure to use a current limiting resistor!)
// Debouncing is added to prevent accidental quick re-presses of the button
// Nicholas Schwankl - 9/7/2020

#define ledPin      9
#define buttonPin   8

bool thisState = LOW;
bool lastState = LOW;
bool ledState  = LOW;

long lastTime  = 0;                       // This long (very large number) is used to track when the button was last pressed
const long debounce  = 200;               // This is how long (in ms) to ignore new presses

void setup() {
  
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  
}

void loop() {

  thisState = !digitalRead(buttonPin);

  if( (thisState==HIGH) && (lastState==LOW) && (millis() - lastTime > debounce) ){        // If the button was just pressed AND it has been more than "debounce" milliseconds since the last press
    ledState = !ledState;                                                                 // Set the state of the LED to the opposite of what it is now
    digitalWrite(ledPin, ledState);                                                       // And write that state to the LED
    lastTime = millis();                                                                  // Set "lastTime" as the current time using millis() so it can be compared against in the future
  }

  lastState = thisState;
  
}
