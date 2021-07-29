//In this project, we can control the led with a button.
#define Buton 8
#define Led 10

int buton_durumu=0; //Firstly,button is off.

void setup() {
  pinMode(Buton,INPUT);
  pinMode(Led,OUTPUT);
}

void loop() {
  buton_durumu=digitalRead(Buton); //Read to value of button.
  if(buton_durumu==1){ //if button is on
    digitalWrite(Led,HIGH);
  }
  else{
    digitalWrite(Led,LOW);
  }
}
