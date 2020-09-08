// This sketch blinks an LED attached to pin 9 (make sure to use a current limiting resistor!)
// Nicholas Schwankl - 9/7/2020

#define ledPin  9                 // This is a pre-processor command that replaces all instances of "ledPin" with "9"

void setup() {                    // This code will only run once
  
  pinMode(ledPin, OUTPUT);        // Set "ledPin" (pin 9) as an output
  
}

void loop() {                     // This code will run forever
  
  digitalWrite(ledPin, HIGH);     // Turn on "ledPin"
  delay(1000);                    // Wait 1s (1000ms)
  
  digitalWrite(ledPin, LOW);      // Turn off "ledPin"
  delay(1000);                    // Wait 1s (1000ms)
  
}
