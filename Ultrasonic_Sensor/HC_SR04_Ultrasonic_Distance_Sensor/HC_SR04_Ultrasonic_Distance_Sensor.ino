int trigPin=9;
int echoPin=10;
long Pintime;
long PinDistance;
void setup() {
 pinMode(trigPin,OUTPUT);
 pinMode(echoPin,INPUT);
 Serial.begin(9600);
}

void loop() {
 digitalWrite(trigPin,LOW);
 delayMicroseconds(2);
 digitalWrite(trigPin,HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin,LOW);
 delayMicroseconds(2);
 Pintime=pulseIn(echoPin,HIGH);
 PinDistance=(Pintime/2)/29.154;

 Serial.print("signal: ");
 Serial.println(Pintime);

 Serial.print("PinDistance: ");
 Serial.println(PinDistance);

 delay(500);
}
