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
    analogWrite(9,85);
    analogWrite(10,85);
    analogWrite(11,85);
    }
    
  if(digitalRead(7)==1){
    analogWrite(9,170);
    analogWrite(10,170);
    analogWrite(11,170);
    }
    
  if(digitalRead(8)==1){
    analogWrite(9,255);
    analogWrite(10,255);
    analogWrite(11,255);
    }
    
  else{
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    }
    
 }
