// This sketch turns on an LED attached to pin 9 when in darkness based on a photodiode attached to A0 (make sure to use a current limiting resistor!)
// Nicholas Schwankl - 9/7/2020

#define ledPin      9
#define sensePin    A0

const int nightEdge = 400;    // This value sets how dark it must get for the LED to turn on
const int dayEdge   = 600;    // This value sets how bright it must get for the LED to turn off

bool isDay = true;            // This value tracks if the program is looking for it to get dark or get brighter
int analogVal;                // This value is used to store the value read from A0

void setup() {
  
  pinMode(ledPin, OUTPUT);
  
}

void loop() {

  analogVal = analogRead(sensePin);   // Store the analog value read from A0

  if(isDay){                          // If the light is off (day)
    
    if(analogVal < nightEdge){        // Check if it is dark enough to turn on the LED
      digitalWrite(ledPin, HIGH);     // If so turn on the LED
      isDay = false;                  // And set the state to night
    }
    
  }else{                              // Otherwise if the light is on (night)

    if(analogVal > dayEdge){          // Check if it is light enough to turn off the LED
      digitalWrite(ledPin, LOW);      // If so turn off the LED
      isDay = true;                   // And set the state to day
    }
    
  }
  
}
