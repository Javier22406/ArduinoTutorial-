int xpin=A1;
int ypin=A0;
int swpin=10;
int xval;
int yval;
int swval;

int spin=3;
int dir=4;
int dir2=5;
int mspeed;


void setup() {
  // put your setup code here, to run once:
pinMode(xpin,INPUT);
pinMode(ypin,INPUT);
pinMode(swpin,INPUT);
digitalWrite(swpin,HIGH);
Serial.begin(9600);

pinMode(spin,OUTPUT);
pinMode(dir,OUTPUT);
pinMode(dir2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
xval=analogRead(xpin);
yval=analogRead(ypin);
swval=digitalRead(swpin);
Serial.println(swval);
mspeed=(255./1023.)*yval;


digitalWrite(dir,HIGH);
digitalWrite(dir2,LOW);
analogWrite(spin,mspeed);


if (xval>700) {
  digitalWrite(dir,HIGH);
  digitalWrite(dir2,LOW);
   
}
if (xval<400){
  digitalWrite(dir,LOW);
  digitalWrite(dir2,HIGH);
}
}
