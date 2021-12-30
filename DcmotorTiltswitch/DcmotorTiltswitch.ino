int spin=3;
int dir=4;
int dir2=5;
int mspeed=255;
int tpin=10;
int tval;
void setup() {
  // put your setup code here, to run once:
pinMode(spin,OUTPUT);
pinMode(dir,OUTPUT);
pinMode(dir2,OUTPUT);
Serial.begin(9600);
pinMode(tpin,INPUT);
digitalWrite(tpin,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
tval=digitalRead(tpin);
Serial.println(tval);
digitalWrite(dir,HIGH);
digitalWrite(dir2,LOW);
analogWrite(spin,mspeed);
if (tval==1) {
 digitalWrite(dir,LOW);
 digitalWrite(dir2,LOW);

}
}
