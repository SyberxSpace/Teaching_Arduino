// This sketch turns on an LED attached to pin 9 when a button attached to pin 8 is pressed (make sure to use a current limiting resistor!)
// Nicholas Schwankl - 9/7/2020

#define ledPin      9
#define buttonPin   8

void setup() {
  
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);           // Set the button as an input with built-in pull-up resistor
  
}

void loop() {

  if( digitalRead(buttonPin) != HIGH ){       // Since the button is pulled up it must be inverted before comparing
    digitalWrite(ledPin, HIGH);
  }else{
    digitalWrite(ledPin, LOW);
  }
  
}
