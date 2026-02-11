Red (VCC) --> Arduino 5V
Brown (GND) --> Arduino GND
Yellow (Signal) --> Arduino D9


#include <Servo.h>
Servo s;
void setup() {
  s.attach(9);     // signal on D9
}
void loop() {
  for (int a = 0; a <= 180; a += 2) 
  {
    s.write(a);
    delay(150);
  }
  for (int a = 180; a >= 0; a -= 2)
   {
    s.write(a);
    delay(150);
  }
}