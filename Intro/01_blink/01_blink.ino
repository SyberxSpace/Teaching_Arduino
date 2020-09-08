// This sketch blinks the built-in LED on the Arduino
// Nicholas Schwankl - 9/7/2020

void setup() {                          // This code will only run once
  
  pinMode(LED_BUILTIN, OUTPUT);         // Set the built-in LED as an output
  
}

void loop() {                           // This code will run forever
  
  digitalWrite(LED_BUILTIN, HIGH);      // Turn on the built-in LED
  delay(1000);                          // Wait 1s (1000ms)
  
  digitalWrite(LED_BUILTIN, LOW);       // Turn off the built-in LED
  delay(1000);                          // Wait 1s (1000ms)
  
}
