int led1=7;
int led2=8;
int random_number;
void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(A0)); //randomSeed function change order of random number each running time.
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
}

void loop() {
  random_number=random(1,900);
  Serial.println(random_number);
  if(random_number<=500 && random_number>0){
    digitalWrite(led1,HIGH);
    delay(2000);
    digitalWrite(led1,LOW);
  }
  else{
    digitalWrite(led2,HIGH);
    delay(2000);
    digitalWrite(led2,LOW);
  }
  delay(1000);
}
