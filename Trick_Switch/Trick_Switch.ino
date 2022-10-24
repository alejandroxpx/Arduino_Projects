//Push button skwtch

/*
 * 
 * Reads the capacitor voltage at digital pin 2 and turns on 
 * and off a light emitting diode (LED) connected to digital pin 12
 * 
 * Constants won't change; they're used here to
 * set pin numbers:
 */
 const int buttonPin = 2;
 const int ledPin = 12;

 int buttonStatus = 0;
 
void setup() {
 // initialize the LED pins as outputs:
 pinMode(ledPin, OUTPUT);
 // initialize the pushbutton pin as an input:
 pinMode(buttonPin, INPUT);
}

void loop() {
  buttonStatus = digitalRead(buttonPin);
  
  if (buttonStatus == HIGH){
    digitalWrite(ledPin, HIGH);
  }
  else{
    digitalWrite(ledPin, LOW);
  }
}
