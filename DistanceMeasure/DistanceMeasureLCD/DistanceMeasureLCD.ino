#include <LiquidCrystal.h>
int tpin=4;
int epin=3;
int ptt;
float distance;
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(tpin,OUTPUT);
pinMode(epin,INPUT);
lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(tpin,LOW);
delayMicroseconds(10);
digitalWrite(tpin,HIGH);
delayMicroseconds(10);
digitalWrite(tpin,LOW);
ptt=pulseIn(epin,HIGH);
distance=(.00643*ptt);
lcd.setCursor(0,0);
lcd.print("Object Distance:");
lcd.setCursor(0,1);
lcd.print(distance);
lcd.setCursor(4,1);
lcd.print("in");
delay(1000);
}
