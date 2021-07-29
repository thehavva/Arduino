//In this project, we will make a curcuit with two buton, and then if two buton is on at the same time, led will light.
#define button1 2
#define button2 3
#define led 13
void setup() {
  pinMode(button1,INPUT);
  pinMode(button2,INPUT);
  pinMode(led,OUTPUT);
}

void loop() {
  int value1=digitalRead(button1);
  int value2=digitalRead(button2);
  if(value1==HIGH && value2==HIGH){
    digitalWrite(led,HIGH); //if two button is open, led is lighting
  }
  else
  digitalWrite(led,LOW); //else led is off
}
