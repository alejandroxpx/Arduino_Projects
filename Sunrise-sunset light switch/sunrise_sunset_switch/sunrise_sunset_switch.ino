/*
 * Sunrise-Sunset Light Switch
 * 
 * Turns on and off a light-emitting diode (LED) connected to digital
 * pins 12 and 13 after 10 to 20 seconds, by waving a hand over a photocell
 * attached to pin 2.
 */

 const int lightsensorPin = 2;
 const int redledPin = 10;
 const int greenledPin = 12;
 int sensorState = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(redledPin, OUTPUT);
  pinMode(greenledPin, OUTPUT);
  pinMode(lightsensorPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorState = digitalRead(lightsensorPin);

  if (sensorState == HIGH){
    digitalWrite(redledPin, HIGH);
    digitalWrite(greenledPin, LOW);
  }
  else{
    digitalWrite(redledPin, LOW);
    digitalWrite(greenledPin, HIGH);
  }
}
