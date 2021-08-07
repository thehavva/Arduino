//By Using Ultrasonic Sensor (HC-SR04) with Arduino - Parking Sensor Making

#define echoPin 6
#define trigPin 7
#define buzzerPin 8

int maxRange=50;
int minRange=0;

void setup() {
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(buzzerPin,OUTPUT);

}

void loop() {
  int measure=range(maxRange,minRange);
  melodi(measure*10);
}

int range(int max,int min){
  long duration,distance;
  
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);

  duration=pulseIn(echoPin, HIGH);
  distance=duration/58.2;

  if(distance>=max || distance<=min){
    return 0;
  }
  else
     return distance;

}
int melodi(int x){
  tone(buzzerPin, 440);
  delay(x);
  noTone(buzzerPin);
  delay(x);
}
