#include <Servo.h>
int xpin=A0;
int ypin=A1;
int swpin=9;
int xval;
int yval;
int swval;
int dt=0;

int bpin=11;
int spin=10;
int spos;
Servo myservo;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(xpin,INPUT);
pinMode(ypin,INPUT);
pinMode(swpin,INPUT);
digitalWrite(swpin,HIGH);
pinMode(bpin,OUTPUT);
pinMode(spin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
xval=analogRead(xpin);
yval=analogRead(ypin);
swval=digitalRead(swpin);
if (swval==0){
  digitalWrite(bpin,HIGH);
 
} else{
    digitalWrite(bpin,LOW);
    }
spos=(180./1023.)*xval;
Serial.println(spos);
myservo.attach(spin);
myservo.write(spos);
}
