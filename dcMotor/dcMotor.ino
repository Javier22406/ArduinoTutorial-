int spin=3;
int dir=4;
int dir2=5;
int mspeed=175;
void setup() {
  // put your setup code here, to run once:
pinMode(spin,OUTPUT);
pinMode(dir,OUTPUT);
pinMode(dir2,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(dir2,HIGH);
digitalWrite(dir ,LOW);
analogWrite(spin,mspeed);  
}
