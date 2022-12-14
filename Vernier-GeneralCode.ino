#include "VernierLib.h" //Vernier Library is only being used for sensor reading 
VernierLib Vernier;

float temperatureValue; //create global variable to store sensor reading


void setup() {
  Serial.begin(9600);
  Vernier.autoID(); //identifying the sensor at port A1
}
void loop() {
  temperatureValue = Vernier.readSensor(); //read one data value
  Serial.print(temperatureValue); //print data value 
  Serial.print(" "); //print a space
  Serial.println(Vernier.sensorUnits()); //print units 
  Serial.println (Vernier.sensorName());
  Serial.println (Vernier.calEquationType());
  Serial.println (Vernier.slope());
  Serial.println (Vernier.intercept());
  delay(2000); //wait 2 secs
}
