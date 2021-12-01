int ypin=6;
int rpin=9;
int dy=500;
int dr=500;
int yblink=3;
int rblink=5;
int j;
void setup() {
  // put your setup code here, to run once:
  pinMode(ypin,OUTPUT);
  pinMode(rpin,OUTPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:
    for(j=1;j<=yblink;j=j+1){
  digitalWrite(ypin,HIGH);
  delay(dy);
  digitalWrite(ypin,LOW);
  delay(dy);
    }
    for(j=1;j<=rblink;j=j+1){
  digitalWrite(rpin,HIGH);
  delay(dr);
  digitalWrite(rpin,LOW);
  delay(dr);
    }
}
