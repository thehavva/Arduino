//light to leds.
void setup() {
  pinMode(7,OUTPUT);
  pinMode(5,OUTPUT);
}

void loop() {
  digitalWrite(7,HIGH);
  digitalWrite(5,HIGH);
  delay(500);
  digitalWrite(7,LOW);
  delay(500); 
  digitalWrite(5,LOW);
  delay(500);
}
