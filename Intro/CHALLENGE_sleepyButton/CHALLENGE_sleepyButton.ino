// This sketch dims an LED on and off based when a button attached to pin 8 is pressed (make sure to use a current limiting resistor!)
// Debouncing is added to prevent accidental repeat presses
// Nicholas Schwankl - 9/7/2020

#define ledPin      9
#define buttonPin   8
#define stepDelay   2             // This adds a small amount of delay so fade is visible

bool thisState = LOW;             // These three booleans track the button being pressed and the LED "state" (intended)
bool lastState = LOW;
bool ledState  = LOW;

int  brightness = 0;              // This value is used to track the true state of the LED

long lastTime  = 0;               // This tracks the last time the button was pressed and ignores repeat presses
const long debounce  = 200;

void setup() {
  
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  
}

void loop() {

  thisState = !digitalRead(buttonPin);        // Read and store the inverted state of the button (reverse INPUT_PULLUP)

  if( (thisState==HIGH) && (lastState==LOW) && (millis() - lastTime > debounce) ){    // Normal debounce toggle code
    ledState = !ledState;
    lastTime = millis();
  }

  if(ledState){                               // If the LED is supposed to be on
    if(brightness < 255){brightness++;}       // Raise the brightnes by 1 if it isn't already at 255 (full brightness)
  }else{                                      // Otherwise if the LED should be off
    if(brightness > 0){brightness--;}         // Lower the brightness by 1 if it isn't already at 0 (fully off)
  }

  lastState = thisState;                      // Update states for next loop
  analogWrite(ledPin, brightness);            // Write the brightness to the LED
  delay(stepDelay);                           // Wait a moment so the change is seen
  
}
