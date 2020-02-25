#define led1 10
#define led2 8

void prender(int t){
  digitalWrite(led1,HIGH);  
  digitalWrite(led2,HIGH);  
  delay(t);
}
  
void apagar(int t){
  digitalWrite(led1,LOW);  
  digitalWrite(led2,LOW);  
  delay(t);
}

void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
}

void loop() {
  prender(500);
  apagar(500);
}
