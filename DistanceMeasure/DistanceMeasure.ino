int tpin=12;
int epin=11;
int ptt;
float distance;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(tpin,OUTPUT);
pinMode(epin,INPUT);
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
Serial.print(distance);
Serial.println(" inches");
}
