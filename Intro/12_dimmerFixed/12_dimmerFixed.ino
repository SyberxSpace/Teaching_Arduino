// This sketch dims an LED attached to pin 9 based on a potentiometer on pin A0 (make sure to use a current limiting resistor!)
// Nicholas Schwankl - 9/7/2020

#define ledPin      9
#define dimPin      A0

int analogVal;

void setup() {
  
  pinMode(ledPin, OUTPUT);
  
}

void loop() {

  analogVal = analogRead(dimPin);
  analogWrite(ledPin, map(analogVal, 0, 1023, 0, 255) );    // Map the analog value from the (0-1023) range of analogRead to the (0-255) range of analogWrite
  
}
