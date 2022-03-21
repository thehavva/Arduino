#define led1 3
#define led2 5
#define led3 6

int lightingOfLed1=255;
int lightingOfLed3=0;
int lightingOfLed2;
void setup() {
  randomSeed(analogRead(A0));
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
}

void loop() {
  Serial.begin(9600);
  lightingOfLed2=random(0,256);
  analogWrite(led1,lightingOfLed1);
  lightingOfLed1=lightingOfLed1-1;
  if(lightingOfLed1<0)
  lightingOfLed1=255;

  analogWrite(led2,lightingOfLed2);

  analogWrite(led3,lightingOfLed3);
  if(lightingOfLed3>255)
  lightingOfLed3=lightingOfLed3+1;
  delay(100);
}
