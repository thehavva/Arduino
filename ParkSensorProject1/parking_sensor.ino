#define trigPin 7
#define echoPin 6
#define buzzer 8
#define pot A0
#define red 5
#define yellow 4
#define blue 3

void setup() {
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(blue,OUTPUT);
  Serial.begin(9600);
}

void loop() {
 long Time,distance;
 int potValue=analogRead(pot);
 potValue=map(potValue,0,1023,0,255);
 digitalWrite(trigPin,LOW);
 delayMicroseconds(2);
 digitalWrite(trigPin,HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin,LOW);

 Time=pulseIn(echoPin,HIGH);
 distance=(Time/2)/29.1;

  Serial.print("Time: ");
  Serial.println(Time);
  Serial.print("Distance: ");
  Serial.println(distance);
  
 if(distance<=20){
  digitalWrite(buzzer,HIGH);
  digitalWrite(red,HIGH);
  digitalWrite(yellow,LOW);
  digitalWrite(blue,LOW);
  delay(50);
  digitalWrite(buzzer,LOW);
  analogWrite(red,potValue);
  delay(50);
 }
 else if(distance<=50 && distance>20){
  digitalWrite(buzzer,HIGH);
  digitalWrite(yellow,HIGH);
  digitalWrite(red,LOW);
  digitalWrite(blue,LOW);
  delay(60);
  digitalWrite(buzzer,LOW);
  analogWrite(yellow,potValue);
  delay(60);
 }
 else if(distance<=70 && distance >50){
  digitalWrite(buzzer,HIGH);
  digitalWrite(blue,HIGH);
  digitalWrite(yellow,LOW);
  digitalWrite(red,LOW);
  delay(100);
  digitalWrite(buzzer,LOW);
  analogWrite(blue,potValue);
  delay(100);
 }
 delay(20);
}
 
