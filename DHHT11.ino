#include <DHT.h>
#define PIN 4
#define DHTTYPE DHT11

DHT dht(PIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
  // put your setup code here, to run once:

}

void loop() {
  delay(200000);
  float h= dht.readHumidity();
  float t=dht.readTemperature();
  float t2=dht.readTemperature(true);

  if(isnan(h)  || isnan(t) || isnan(t2) ){
    Serial.println(F("Failed to read DHT Data."));
    return;
  }
  Serial.print(F("Humidity"));
  Serial.println(h);
  Serial.print(F("Temperature in C:"));
  Serial.println(t);
  Serial.print(F("Temperature in F:"));
  Serial.println(t2);
  // put your main code here, to run repeatedly:

}
