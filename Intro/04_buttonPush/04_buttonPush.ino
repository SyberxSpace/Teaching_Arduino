// This sketch turns on an LED attached to pin 9 when a button attached to pin 8 is pressed (make sure to use a current limiting resistor!)
// Nicholas Schwankl - 9/7/2020

#define ledPin      9
#define buttonPin   8

void setup() {
  
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);                // Set the button pin as an input
  
}

void loop() {

  if( digitalRead(buttonPin) == HIGH ){     // Test if the state of the button pin is pulled high to 5V
    digitalWrite(ledPin, HIGH);             // If so turn on the LED
  }else{                                    // Otherwise
    digitalWrite(ledPin, LOW);              // Turn off the LED
  }
  
}
