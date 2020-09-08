// This sketch (incorrectly) dims an LED attached to pin 9 based on a potentiometer on pin A0 (make sure to use a current limiting resistor!)
// The value of A0 is reported to the Serial Monitor for analysis
// Nicholas Schwankl - 9/7/2020

#define ledPin      9
#define dimPin      A0

int analogVal;                // This variable will be used to store the analog value read from A0

void setup() {
  
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);         // This begins a serial connection with the host computer over USB at 9600 baud (9600 bits per second)
  
}

void loop() {

  analogVal = analogRead(dimPin);     // Read the analog input from the potentiometer
  analogWrite(ledPin, analogVal);     // Write that value as a brightness to the LED
  
  Serial.println(analogVal);          // Write the analog value to the computer and begin a new line (PRINT LiNe)

  delay(50);                          // Wait 50ms to allow for the data to be sent before the next loop
  
}
