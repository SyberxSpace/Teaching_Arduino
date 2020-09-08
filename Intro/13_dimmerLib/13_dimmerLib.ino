// This sketch dims an LED attached to pin 9 based on a potentiometer on pin A0 (make sure to use a current limiting resistor!)
// The Responsive Analog Read library is used to improve the behavior of the analog read
// Available in the library manager or here: https://github.com/dxinteractive/ResponsiveAnalogRead
// Nicholas Schwankl - 9/7/2020

#include <ResponsiveAnalogRead.h>             // Include the ResponsiveAnalogRead library

#define ledPin      9
#define dimPin      A0

ResponsiveAnalogRead analog(dimPin, false);   // Create a ResponsiveAnalogRead object and attach A0 with "sleep" disabled (false)

void setup() {
  
  pinMode(ledPin, OUTPUT);
  
}

void loop() {

  analog.update();                                                    // Update the RespAnalogRead object (acts like an analogRead)
  
  analogWrite(ledPin, map( analog.getValue() , 0, 1023, 0, 255) );    // Map the processed analog value from the (0-1023) range of analogRead to the (0-255) range of analogWrite

  delay(20);                                                          // Wait a moment
  
}
