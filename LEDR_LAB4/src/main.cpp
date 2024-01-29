#include <Arduino.h>
#define COMMON_ANODE
int LEDR = 27;
int LEDG = 14;
int LEDB = 12;

void setmau(int red, int green, int blue)
{
#ifdef COMMON_ANODE
red = 255 - red;
green = 255 - green;
blue = 255 - blue;
#endif
analogWrite(LEDR, red);
analogWrite(LEDG, green);
analogWrite(LEDB, blue);
}
void setup()
{
pinMode(LEDR, OUTPUT);
pinMode(LEDG, OUTPUT);
pinMode(LEDB, OUTPUT);

}
void loop()
{
setmau(255, 0, 0);
setmau(0, 255, 0);
setmau(0, 0, 255);
setmau(255, 255, 0);
setmau(80, 0, 80); 
setmau(0, 255, 255);
}
