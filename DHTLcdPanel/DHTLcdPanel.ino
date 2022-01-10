#include <DHT.h>
#define Type DHT11
#include <LiquidCrystal.h>
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
String msg="hello";
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
int spin=2; 
DHT HT(spin,Type);
float humidity;
float tempf;
float tempc;
int stime=500;
int dt=100;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
HT.begin();
lcd.begin(16,2);
delay(stime);

}

void loop() {
  // put your main code here, to run repeatedly:
humidity=HT.readHumidity();
tempc=HT.readTemperature();
tempf=HT.readTemperature(true);
Serial.print("Humidity: ");
Serial.print(humidity);
Serial.print(" Temperature ");
Serial.print(tempc);
Serial.print(" C ");
Serial.print(tempf);
Serial.println(" F ");
lcd.setCursor(0,0);
lcd.print("H:");
lcd.setCursor(2,0);
lcd.print(humidity);
lcd.setCursor(0,1);
lcd.print("F:");
lcd.setCursor(2,1);
lcd.print(tempf);
lcd.setCursor(8,1);
lcd.print("C:");
lcd.setCursor(10,1);
lcd.print(tempc);

}
