//we can high two leds by delaying 500ms.
#define red 8
void setup() {
  pinMode(red,OUTPUT);
}

void loop() {
  digitalWrite(red,HIGH);
  delay(500);
  digitalWrite(red,LOW);
  delay(500);
}
