int leds=[3,5,6,9,10];

void setup() {
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);

}

void loop() {
  for(int i=0; i<=4; i++){
    digitalWrite(leds[i],HIGH);
    delay(500);
    }
  for(int i=4; i>=0; i--){
    digitalWrite(leds[i],LOW);
    delay(500);
    }
}
