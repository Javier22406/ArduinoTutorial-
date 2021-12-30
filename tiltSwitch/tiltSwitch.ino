int tpin=8;
int tval;
int gpin=2;
int rpin=3;
void setup() {
  // put your setup code here, to run once:
pinMode(tpin,INPUT);
digitalWrite(tpin,HIGH);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
tval=digitalRead(tpin);
Serial.println(tval);
if (tval==0){
  digitalWrite(gpin,HIGH);
  digitalWrite(rpin,LOW);
}
if (tval==1){
  digitalWrite(gpin,LOW);
  digitalWrite(rpin,HIGH);
}

}
