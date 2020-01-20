int c=0;

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
      c++;
      delay(50);
    }
        
  if(c==1){
    digitalWrite(9,HIGH);
    }
    
  if(c==2){
    digitalWrite(10,HIGH);
    }
    
  if(c==3){
    digitalWrite(11,HIGH);
    }
    
  if(c>3){
    c=0;
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    }   
 }
