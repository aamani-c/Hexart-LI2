
Red (VCC) --> Arduino 5V
Brown (GND) --> Arduino GND
Yellow (Signal) --> Arduino D9

LPin --> 5v
RPin --> GND
midlle --> A0


#include <Servo.h>
Servo s;
void setup() {
  s.attach(9);   // signal on D9
}
void loop() {
  int v = analogRead(A0);             
  int angle = map(v, 0, 1023, 0, 180); // Map to 0–180 degrees
  s.write(angle);                    
  delay(10);                         
}

//map(value, fromLow, fromHigh, toLow, toHigh)
//Take v which is between 0 and 1023,and convert it to a new value between 0 and 180.
