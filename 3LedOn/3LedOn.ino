void setup(){
  pinMode(2,OUTPUT);//2 = pin on digital  
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT) ;
  
}

//
void loop() {
 digitalWrite(2,HIGH);// 2 = pin, HIGH = ON
 delay(500);// milliseconds 
 digitalWrite(2,LOW);
 delay(500);
 
 digitalWrite(3,HIGH);
 delay(1000);
 digitalWrite(3,LOW);
 delay(1000);

 digitalWrite(4,HIGH);
 delay(1500);
 digitalWrite(4,LOW);
 delay(1500);
}

/*
Code with functions that have paramaters

void loop() {
  int delayTime = 500;
  turnOnLED(2,delayTime);
  turnOnLED(3,delayTime);
  turnOnLED(4,delayTime);

}

void turnOnLED( int pin, int delayTime) {
 digitalWrite(pin,HIGH);
 delay(delayTime);
 digitalWrite(pin,LOW);
 delay(delayTime);*/
