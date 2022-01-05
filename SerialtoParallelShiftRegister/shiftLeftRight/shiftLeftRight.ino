int latchpin=11;
int clockpin=9;
int datapin=12;
int dt=500;

byte mybyte=0x0F;

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
shiftOut(datapin,clockpin,LSBFIRST,mybyte);
digitalWrite(latchpin,HIGH);
delay(dt);
mybyte=255-mybyte;
}
