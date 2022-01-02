int latchpin=11;
int clockpin=9;
int datapin=12;
int dt=250;

byte leds=0x16;
byte led2=0x49;
void setup() {
  // put your setup code here, to run once:
pinMode(latchpin,OUTPUT);
pinMode(clockpin,OUTPUT);
pinMode(datapin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(latchpin,LOW);
shiftOut(datapin,clockpin,LSBFIRST,leds);
digitalWrite(latchpin,HIGH);
delay(dt);
digitalWrite(latchpin,LOW);
shiftOut(datapin,clockpin,LSBFIRST,led2);
digitalWrite(latchpin,HIGH);
delay(dt);
digitalWrite(latchpin,LOW);
shiftOut(datapin,clockpin,LSBFIRST,leds);
digitalWrite(latchpin,HIGH);
}
