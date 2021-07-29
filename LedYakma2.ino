//Led lighting operation with 3 leds.
#define red 8
#define yellow 7
#define blue 6
void setup() {
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(blue,OUTPUT);
}

void loop() {
 digitalWrite(red,HIGH); 
 delay(1000);
 digitalWrite(yellow,HIGH); 
 delay(1000);
 digitalWrite(blue,HIGH); 
 delay(1000);
 digitalWrite(red,LOW);
 delay(500);
 digitalWrite(yellow,LOW);
 delay(500);
 digitalWrite(blue,LOW);
 delay(500);
}
