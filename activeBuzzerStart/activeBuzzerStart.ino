int mynum;
int bpin=9;
String msg="Please input your number";
int bt=2000;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(bpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while(Serial.available()==0){
  }
  mynum=Serial.parseInt();
  if (mynum>10){
    digitalWrite(bpin,HIGH);
    delay(bt);
    digitalWrite(bpin,LOW);
  }
}
