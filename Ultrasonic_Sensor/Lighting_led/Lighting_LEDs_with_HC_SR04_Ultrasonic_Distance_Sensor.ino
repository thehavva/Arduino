#define red 5
#define yellow 6
#define blue 7

int trigPin=9;
int echoPin=10;
long Pintime;
long PinDistance;

void setup() {
 pinMode(trigPin,OUTPUT);
 pinMode(echoPin,INPUT);
 pinMode(red,OUTPUT);
 pinMode(yellow,OUTPUT);
 pinMode(blue,OUTPUT);
 Serial.begin(9600);
}

void loop() {
 digitalWrite(trigPin,LOW);
 delayMicroseconds(2);
 digitalWrite(trigPin,HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin,LOW);
 //delayMicroseconds(2);
 Pintime=pulseIn(echoPin,HIGH);
 PinDistance=(Pintime/2)/29.1;
 Serial.print("signal: ");
 Serial.println(Pintime);
 Serial.print("PinDistance: ");
 Serial.println(PinDistance);
 
 if(PinDistance<=30){
  digitalWrite(red,HIGH);
  digitalWrite(yellow,LOW);
  digitalWrite(blue,LOW);
 }
 else if(PinDistance>30 && PinDistance<=70){
  digitalWrite(red,LOW);
  digitalWrite(yellow,HIGH);
  digitalWrite(blue,LOW);
 }
 else if(PinDistance>70){
  digitalWrite(red,LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(blue,HIGH);
 }
 delay(100);
}
