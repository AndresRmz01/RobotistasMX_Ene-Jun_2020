void setup() {

  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  
}

void loop() {
delay(60000);
digitalWrite(2,HIGH);
digitalWrite(7,HIGH);
delay(1000);
digitalWrite(7,LOW);
delay(60000);
digitalWrite(3,HIGH);
digitalWrite(7,HIGH);
delay(1000);
digitalWrite(7,LOW);
delay(60000);
digitalWrite(4,HIGH);
digitalWrite(7,HIGH);
delay(1000);
digitalWrite(7,LOW);
delay(60000);
digitalWrite(5,HIGH);
digitalWrite(7,HIGH);
delay(1000);
digitalWrite(7,LOW);
delay(60000);
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
delay(1000);
digitalWrite(7,LOW);
delay(60000);

  
}
