#define soilpin A15

float sensorValue;

void setup(){
  Serial.begin(115200);
}
void loop(){
  sensorValue= analogRead(soilpin);

  Serial.print("Sensor Value: ");
  Serial.println(sensorValue);
  delay(2000);
}