#include <Arduino.h>
#include <ESP32AnalogRead.h>

ESP32AnalogRead adc;
void setup()
{
  adc.attach(4);
  Serial.begin(115200);
}
void loop()
{
  // int a = adc.readRaw();
  Serial.println("Vout = " + String(adc.readVoltage()));
  // Serial.println("Vadc = " + String(a));
  delay(1000);
}