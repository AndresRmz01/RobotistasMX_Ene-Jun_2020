void setup() {
 pinMode(2,INPUT);
 pinMode(4,INPUT);
 pinMode(7,INPUT);
 pinMode(8,OUTPUT);
 pinMode(12,OUTPUT);
 pinMode(13,OUTPUT);
}

void loop()

{
  if(digitalRead(2)==1){
    digitalWrite(8,HIGH);
     digitalWrite(12,LOW);
  }
  else if(digitalRead(4)==1){
     digitalWrite(8,LOW);
     digitalWrite(12,HIGH);
  }
}                                                                
