// 2 = LED
// 4 = boton
// A3 = fotoresistencia
// 5 = buzzer


void setup() {
  pinMode(2,OUTPUT);
  pinMode(4,INPUT);
}

void loop() {
  int n= analogRead(A3); 
  int b=digitalRead(4)
  if(n>500){
    if(b==1){
      digitalWrite(5,HIGH);
    }
    else{
      digitalWrite(5,LOW);        
    }
  }
}
