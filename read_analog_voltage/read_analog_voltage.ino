int readPin=A3;//A3 pin to measure volts
float V2=0;
int delayTime=500;
int readVal;
void setup() {
  
  pinMode(readPin,INPUT);
  Serial.begin(9600);//how to set up print 
}

void loop() {
  
 readVal=analogRead(readPin);
 V2=(5./1023.)*readVal;//put a . after number to show its not an int
 Serial.println(V2);//how to print
 delay(delayTime);
}
