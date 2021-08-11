byte random_number;
#define led1 7
#define led2 6
#define led3 5

void setup() {
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  
}

void loop() {
  random_number=random(0,15);
  Serial.println(random_number);
  if(random_number<=5){
    digitalWrite(led1,HIGH);
    delay(2000);
    digitalWrite(led1,LOW);
  }
  else if(random_number>5 && random_number<=10){
    digitalWrite(led2,HIGH);
    delay(2000);
    digitalWrite(led2,LOW);
  }
  else if(random_number<=15 && random_number>10){
    digitalWrite(led3,HIGH);
    delay(2000);
    digitalWrite(led3,LOW);
  }
  delay(1000);
}
