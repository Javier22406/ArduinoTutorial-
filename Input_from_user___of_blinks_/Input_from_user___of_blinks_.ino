 int blinks;
 String msg="How many blinks do you want";
 int redpin=10;
 int bt=500;
 int j;
 void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println(msg);
  while (Serial.available()==0){//while loop is just to give time for input)
  }
  blinks=Serial.parseInt();//Serial.parseInt is reading input of serial
  for (j=1 ;j<=blinks;j=j+1){
    digitalWrite(redpin,HIGH);
    delay(bt);
    digitalWrite(redpin,LOW);
    delay(bt);
  }
}
