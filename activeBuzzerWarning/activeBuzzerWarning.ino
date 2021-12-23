int pinread=A2;
int Pmeter;
int dt=200;

int bpin=9;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinread,INPUT);
  pinMode(bpin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Pmeter=analogRead(pinread);
  Serial.println(Pmeter);
  delay(dt);

  while (Pmeter>=1000) {
    digitalWrite(bpin,HIGH);
    Pmeter=analogRead(pinread);
  }
 digitalWrite(bpin,LOW);
 
}
