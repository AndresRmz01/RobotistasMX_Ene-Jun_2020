#define a 8 
#define b 9 
#define c 12 
#define d 11 
#define e 10 
#define f 4 
#define g 2 

long nr;

void setup() {
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  randomSeed(analogRead(0));
  Serial.begin(9600);
}

void loop() {
  nr = random(1, 10);
  Serial.println(nr);
  switch(nr){
    case 1:
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(a,LOW);
      digitalWrite(d,LOW);
      digitalWrite(e,LOW);
      digitalWrite(f,LOW);
      digitalWrite(g,LOW);
      delay(2000);
      break;
      
    case 2:    
      digitalWrite(b,HIGH);
      digitalWrite(c,LOW);
      digitalWrite(a,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,LOW);
      digitalWrite(g,HIGH);
      delay(2000);
      break;
      
    case 3:    
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(a,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,LOW);
      digitalWrite(f,LOW);
      digitalWrite(g,HIGH);
      delay(2000);
      break;

    case 4:    
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(a,LOW);
      digitalWrite(d,LOW);
      digitalWrite(e,LOW);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      delay(2000);
      break;
    case 5:    
      digitalWrite(b,LOW);
      digitalWrite(c,HIGH);
      digitalWrite(a,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,LOW);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      delay(2000);
      break;
    case 6:    
      digitalWrite(b,LOW);
      digitalWrite(c,HIGH);
      digitalWrite(a,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      delay(2000);
      break;
    case 7:    
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(a,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,LOW);
      digitalWrite(f,LOW);
      digitalWrite(g,HIGH);
      delay(2000);
      break;
    case 8:    
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(a,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      delay(2000);
      break;
    case 9:    
      digitalWrite(b,LOW);
      digitalWrite(c,HIGH);
      digitalWrite(a,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,LOW);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      delay(2000);
      break;
  }
  
}
