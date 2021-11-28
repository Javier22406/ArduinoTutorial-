int myPin=A2;
int redLed=9;
int readVal;
float V2;
int dt= 250;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(myPin,INPUT);
  pinMode(redLed,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal=analogRead(myPin);
  V2=(5./1023.)*readVal;
  Serial.print("Poteniometer Voltage is ");
  Serial.println(V2);
  if (V2>4.0){
    digitalWrite(redLed,HIGH);
  }
  if (V2<4.0){
    digitalWrite(redLed,LOW);
  }
  delay(dt);
}
