int liga = D3;
int desliga = D5;
int led = D4;
int button1 =0;
int button2 =0;

void setup() {
pinMode(led,OUTPUT);
pinMode(liga,INPUT_PULLUP);
pinMode(desliga,INPUT_PULLUP);
digitalWrite(led,HIGH);

}

void loop() {
  button1 = digitalRead(liga);
  button2 = digitalRead(desliga);

  if(button1 == LOW) {
    digitalWrite(led,LOW);
    
  }
      
  if (button2 == LOW){
    digitalWrite(led,HIGH);
   }
  }
  

  
