#define MQ3pin A15
float sensorValue;

void setup() {
  Serial.begin(115200);
  Serial.println("MQ3 warming up!");
  delay(20000);
  // put your setup code here, to run once:

}

void loop() {
  sensorValue = digitalRead(MQ3pin); //analogRead when sensor is connected to A0 of the sensor

  Serial.print("Sensor Value:");
  Serial.println(sensorValue);

  delay(2000);
  // put your main code here, to run repeatedly:

}
