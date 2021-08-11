//without using button I did a kind of button by using two potentiometers which can work in opposition to each other.
#define led 8
#define pot1 A0
#define pot2 A1
void setup() {
 pinMode(led,OUTPUT);
 digitalWrite(led,HIGH);
}

void loop() {
  int value1=analogRead(pot1);
  int value2=analogRead(pot2);

  value1=map(value1,0,1023,0,255);
  value2=map(value2,0,1023,0,255);
  
  analogWrite(led,value1);
  analogWrite(led,value2);
}
