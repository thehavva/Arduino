#define trigPin 7
#define echoPin 6
#define buzzer 8
#define red 5
#define yellow 4
#define blue 3

int maxRange=90;
int minRange=0;

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
  int measure=range(maxRange,minRange);
  Serial.print("Distance: ");
  Serial.println(measure);
  melody(measure*10);
  
  if(measure<=20){
  digitalWrite(red,HIGH);
  digitalWrite(yellow,LOW);
  digitalWrite(blue,LOW);
  delay(100);
  }
  else if(measure>20 && measure <=50){
  digitalWrite(red,LOW);
  digitalWrite(yellow,HIGH);
  digitalWrite(blue,LOW);
  delay(100);
  }
  else if(measure>50 && measure<=90){
  digitalWrite(red,LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(blue,HIGH);
  delay(100);
  }
  digitalWrite(red,LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(blue,LOW);
  delay(20);
}

int range(int max_r,int min_r){
  long duration,distance;
   
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);

  duration=pulseIn(echoPin, HIGH);
  distance=duration/58.2;

  if(distance>=max_r || distance<=min_r){
    return 0;
  }
  else
     return distance;
}

int melody(int x){
  tone(buzzer, 440);
  delay(x);
  noTone(buzzer);
  delay(x);
 
}
