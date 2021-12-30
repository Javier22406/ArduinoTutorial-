#include <Stepper.h>
int spr= 2048;
Stepper mystepper(spr, 8,9,10,11);
int motspeed=10;
int dt=500;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
mystepper.setSpeed(motspeed);
}

void loop() {
  // put your main code here, to run repeatedly:
mystepper.step(spr);
delay(dt);

}
