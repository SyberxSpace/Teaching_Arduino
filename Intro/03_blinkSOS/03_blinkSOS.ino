// This sketch blinks an LED attached to pin 9 in the "SOS" pattern (make sure to use a current limiting resistor!)
// Nicholas Schwankl - 9/7/2020

#define ledPin    9                 // Set pin 9 as the LED pin
#define dotLen    200               // Set the length of a "dot" to 200ms
#define dashLen   dotLen*3          // Calculate the length of a "dash" to be 3 times that of a dot
#define gapLen    dotLen*2          // Calculate the length of a gap to be the same as a "dash" (minus the dot gap that comes before)

void setup() {
  
  pinMode(ledPin, OUTPUT);          // Set the LED pin as an output
  
}

void loop() {

  // S
  for(int i=0; i<3; i++){           // Create a number "i" and repeat the following until "i" is not less than 3, adding 1 to "i" each repetition
    digitalWrite(ledPin, HIGH);     // Turn on the LED
    delay(dotLen);                  // Wait a dot's worth of time
    digitalWrite(ledPin, LOW);      // Turn off the LED
    delay(dotLen);                  // Wait a dot's worth of time
  }
  delay(gapLen);                    // Wait 2 more dot's worth of time so the gap appears as long as a dash

  // O
  for(int i=0; i<3; i++){           // Repeat the same as above but with dashes instead of dot length on periods
    digitalWrite(ledPin, HIGH);
    delay(dashLen);
    digitalWrite(ledPin, LOW);
    delay(dotLen);
  }
  delay(gapLen);

  // S
  for(int i=0; i<3; i++){           // Do the same thing as the first S, but this time wait 2 seconds at the end to make it clear the word is done
    digitalWrite(ledPin, HIGH);
    delay(dotLen);
    digitalWrite(ledPin, LOW);
    delay(dotLen);
  }
  delay(2000);
  
}
