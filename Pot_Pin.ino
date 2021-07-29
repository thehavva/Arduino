//Lighting LEDs with Potentiometer Using Arduino PWM
#define pin A0
int deger=0;

void setup() {
   Serial.begin(9600);
   Serial.println("Pot Deger Okuma");
}

void loop() {
  deger=analogRead(pin);
  Serial.println(deger);
  delay(300);
}
