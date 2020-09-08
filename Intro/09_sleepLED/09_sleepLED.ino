// This sketch dims an LED attached to pin 9 up and down (make sure to use a current limiting resistor!)
// Nicholas Schwankl - 9/7/2020

#define ledPin      9
#define stepDelay   10            // This delay keeps the loop from running too fast

int brightness = 0;               // This is used to track the brightness of the LED from 0 to 255

void setup() {
  
  pinMode(ledPin, OUTPUT);
  
}

void loop() {

  for(brightness; brightness<255; brightness++){    // Loop and add 1 to brightness until 255 is reached
    analogWrite(ledPin, brightness);                // Write the brightness value as a PWM value to the LED
    delay(stepDelay);                               // Wait a short amount of time so the change is visible
  }
  
  for(brightness; brightness>0; brightness--){      // Repeat the same as above but this time going down to 0
    analogWrite(ledPin, brightness);
    delay(stepDelay);
  }
  
}
