//With RGB led and potentiometers, we can control the which color sign from the led by increasing and decreasing severty.
#define red 11
#define green 10
#define blue 9

#define potred A0
#define potgreen A1
#define potblue A2
void setup() {
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);

  digitalWrite(red,LOW);
  digitalWrite(red,HIGH);
  digitalWrite(red,HIGH);
}

void loop() {
  int red_value=analogRead(potred);
  int green_value=analogRead(potgreen);
  int blue_value=analogRead(potblue);
  
  red_value=map(red_value,0,1023,0,255);
  green_value=map(green_value,0,1023,0,255);
  blue_value=map(blue_value,0,1023,0,255);

  analogWrite(red,red_value);
  analogWrite(green,green_value);
  analogWrite(blue,blue_value);
}
