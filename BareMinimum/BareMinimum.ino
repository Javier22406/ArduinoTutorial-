//LED light up(bread board)
void setup() {
pinMode(8,OUTPUT); //what pin your working with:
}

void loop() {
digitalWrite(8,HIGH); //(8=pin, (HIGH=Volate usage(ON))
delay(50);
digitalWrite(8,LOW);
delay(50);
}
