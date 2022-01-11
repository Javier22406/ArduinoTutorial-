#include <IRremote.h>
int irpin=11;
IRrecv IR(irpin);
decode_results cmd;
String mycom;
int spin=3;
int dir=4;
int dir2=5;
int mspeed=150;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
IR.enableIRIn();
pinMode(spin,OUTPUT);
pinMode(dir,OUTPUT);
pinMode(dir2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
while (IR.decode(&cmd)==0){
}
delay(1000);
IR.resume();

if (cmd.value==0xFFA25D){
  mycom="pwr";
  Serial.println(mycom);
  digitalWrite(dir,HIGH);
digitalWrite(dir2,LOW);
analogWrite(spin,mspeed);
}
if (cmd.value==0xFFE01F){
  mycom="down";
  Serial.println(mycom);
  digitalWrite(dir,LOW);
  digitalWrite(dir2,HIGH);
  analogWrite(spin,mspeed);
}
if (cmd.value==0xFF906F){
  mycom="up";
  Serial.println(mycom);
   digitalWrite(dir,HIGH);
digitalWrite(dir2,LOW);
analogWrite(spin,mspeed);
}
if (cmd.value==0xFFE21D){
  mycom="stop";
  Serial.println(mycom);
  digitalWrite(dir,HIGH);
digitalWrite(dir2,LOW);
analogWrite(spin,0);
}

}
