int xpin=A0;
int ypin=A1;
int spin=9;
int xval;
int yval;
int sval;
int dt(500);
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(xpin,INPUT);
pinMode(ypin,INPUT);
pinMode(spin,INPUT);
digitalWrite(spin,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
xval=analogRead(xpin);
yval=analogRead(ypin);
sval=digitalRead(spin);
Serial.print("xval:");
Serial.println(xval);
Serial.print("yval:");
Serial.println(yval);
Serial.print("sval:");
Serial.println(sval);
delay(dt);
}
