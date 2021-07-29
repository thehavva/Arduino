//Lighting LEDs with Potentiometer Using Arduino PWM
#define led 3
#define pot A0
void setup() {

}

void loop() {
  int value=analogRead(pot);
  value=value/4;
  analogWrite(led,value);
}
