//With the help of LDR, we can control the led.
void setup() {
  pinMode(6,OUTPUT);
  Serial.begin(9600);
}

void loop() {
   int sign=analogRead(A0);
   Serial.println(sign);
   delay(50);
    if(sign>800){
      digitalWrite(6,LOW);
    }
    if(sign<600){
      digitalWrite(6,HIGH);
    }
    
}
