#include <Arduino.h>
#define SW1 27
#define SW2 26
#define SW3 25
#define SW4 33
void setup()
{
  Serial.begin(115200);
  pinMode(SW1, INPUT);
  pinMode(SW2, INPUT);
  pinMode(SW3, INPUT);
  pinMode(SW4, INPUT);
}
void loop()
{
  if (digitalRead(SW1) == LOW) // Đảo logic vì sử dụng INPUT
  {
    Serial.println("SW1 vua duoc an");
    while (digitalRead(SW1) == LOW)
    {
      delay(10);
    }
  }
  if (digitalRead(SW2) == LOW)
  {
    Serial.println("SW2 vua duoc an");
    while (digitalRead(SW2) == LOW)
    {
      delay(10);
    }
  }
  if (digitalRead(SW3) == LOW)
  {
    Serial.println("SW3 vua duoc an");
    while (digitalRead(SW3) == LOW)
    {
      delay(10);
    }
  }
  if (digitalRead(SW4) == LOW)
  {
    Serial.println("SW4 vua duoc an");
    while (digitalRead(SW4) == LOW)
    {
      delay(10);
    }
  }
  else
  {
    Serial.println("Khong co nut an nao duoc an!");
    delay(500);
  }
}
