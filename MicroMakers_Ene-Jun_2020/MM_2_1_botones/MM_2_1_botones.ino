void setup() 
  pinMode(3,INPUT);
  pinMode(5,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(digitalRead(3));
  if(digitalRead(3)==1){
    digitalWrite(5,HIGH);
  }
  else{
    digitalWrite(5,LOW);  
  }  
 
}
