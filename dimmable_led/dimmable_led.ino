int readPin=A2;
int readVal;
float V2;
int dr=0;
int ledVal;
int greenLed=9;

void setup() {
  // put your setup code here, to run once:
  pinMode(readPin,INPUT);
  Serial.begin(9600);
  pinMode(greenLed,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal=analogRead(readPin);
  V2=(5./1023.)*readVal;
  Serial.println(V2);
  delay(dr);
  
  ledVal=(255./1023.)*readVal;
  analogWrite(greenLed,ledVal);
}
