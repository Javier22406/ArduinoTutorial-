  int pinRead=A2;
  int delayTime=200;
  int Pmeter;
  float V2;
 
 void setup() {
 
  pinMode(pinRead,INPUT);
  Serial.begin(9600);
}

void loop() {

  Pmeter=analogRead(pinRead);
  V2=(5./1023.)*Pmeter;
  Serial.println(V2);
  delay(delayTime);
}
