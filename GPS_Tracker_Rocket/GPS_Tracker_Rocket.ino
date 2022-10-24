#include "SoftwareSerial.h"
#include "TinyGPS++.h"
SoftwareSerial ss(10,11);
TinyGPSPlus gps;
int sensorPin1 = A0;
int sensorPin2 = A1;
int sensorValue1 = 0;
int sensorValue2 = 0;
char line;
void setup() {
  Serial.begin(9600);
  ss.begin(9600);
  Serial.println("GPS Start");
}

void loop() {
  sensorValue1 = analogRead(sensorPin1);
  Serial.println(sensorValue1);
  sensorValue2 = analogRead(sensorPin2);
  Serial.println(sensorValue2);
}
