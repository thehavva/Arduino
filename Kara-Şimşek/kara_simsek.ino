//With for loop and arrays we can make a project by using leds,whose name is kara şimşek.

int leds[]={2,3,4,5,6,7}; //definition of array.

void setup() {
  for(int i=0; i<6; i++){
    pinMode(leds[i],OUTPUT);
  }

}

void loop() {
  
  for(int i=0; i<6; i++){
    digitalWrite(leds[i],HIGH);
    delay(100);
    digitalWrite(leds[i],LOW);
  }

  for(int j=5; j>-1; j--){ //vice versa loop
     digitalWrite(leds[j],HIGH);
     delay(100);
     digitalWrite(leds[j],LOW);
  }
}
