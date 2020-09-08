// This sketch (incorrectly) dims an LED attached to pin 9 based on a potentiometer on pin A0 (make sure to use a current limiting resistor!)
// Nicholas Schwankl - 9/7/2020

#define ledPin      9
#define dimPin      A0          // Analog input pins are prefixed with an A and do not require a pinMode to be set

void setup() {
  
  pinMode(ledPin, OUTPUT);
  
}

void loop() {

  analogWrite(ledPin, analogRead(dimPin));    // Read the analog value from the input pin and write that value as a brightness to the LED
  
}
