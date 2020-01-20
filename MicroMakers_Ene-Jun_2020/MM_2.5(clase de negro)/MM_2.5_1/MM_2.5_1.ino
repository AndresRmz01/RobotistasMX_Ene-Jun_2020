void setup() {
  pinMode(6,INPUT);
  pinMode(7,INPUT);
  pinMode(8,INPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  
}

void loop() {
  if(digitalRead(6)==1){
    digitalWrite(9,HIGH);
    }
    
  if(digitalRead(7)==1){
    digitalWrite(10,HIGH);
    }
    
  if(digitalRead(8)==1){
    digitalWrite(11,HIGH);
    }
    
  else{
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    }
 }
