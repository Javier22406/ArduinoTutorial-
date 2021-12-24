int lpin=A2;
int lightval;
int dv=250;

int rpin=2;
int gpin=3; 
int dt=200;
void setup() {
  // put your setup code here, to run once:
  pinMode(lpin,INPUT);
  Serial.begin(9600);
  pinMode(rpin,OUTPUT);
  pinMode(gpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
lightval=analogRead(lpin);
Serial.println(lightval);
delay(dv);

while (lightval<10){
  digitalWrite(gpin,HIGH);
  lightval=analogRead(lpin);
  digitalWrite(rpin,LOW);
}
digitalWrite(gpin,LOW);
digitalWrite(rpin,HIGH);
}
