#define blue 4
#define red 5
#define yellow 6
#define button 2
int number=0;
void setup() {
  Serial.begin(9600);
  pinMode(button,INPUT);
  pinMode(blue,OUTPUT);
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  randomSeed(analogRead(A0));
}

void loop() {
  if(digitalRead(button)==HIGH){
    number=random(4,7);
    switch(number){
      case 4:
        Serial.print("led : ");
        Serial.println(number);
        digitalWrite(blue,HIGH);
        digitalWrite(red,LOW);
        digitalWrite(yellow,LOW);
        delay(2000);
        digitalWrite(blue,LOW);
        break;

      case 5:
        Serial.print("led : ");
        Serial.println(number);
        digitalWrite(blue,LOW);
        digitalWrite(red,HIGH);
        digitalWrite(yellow,LOW);
        delay(2000);
        digitalWrite(red,LOW);
        break;

       case 6:
        Serial.print("led : ");
        Serial.println(number);
        digitalWrite(blue,LOW);
        digitalWrite(red,LOW);
        digitalWrite(yellow,HIGH);
        delay(2000);
        digitalWrite(yellow,LOW);
        break;
    }
    
  }

}
