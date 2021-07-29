//In this project, with the help of two button and led,we get values by reading buttons and then light the related led.
void setup() {
  pinMode(3,INPUT);
  pinMode(7,INPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);

}

void loop() {
  int value1=digitalRead(3); //pul-up configuration if button is on,led is low.
  int value2=digitalRead(7); //pull-down configuration if button is on, led is high.
  
  digitalWrite(8,value1);
  digitalWrite(9,value2);
}
