int ledpin = D4;
int ldr = A0;
int valorldr=0;
float luminosidade;

void setup() {
  Serial.begin(115200);
  pinMode(ledpin,OUTPUT);
 
}

void loop() {

valorldr =  analogRead(ldr);

luminosidade = map(valorldr, 0, 1023, 0, 255); 
Serial.print("Valor lido do LDR : "); 
Serial.println(luminosidade);

if (luminosidade > 100)
{digitalWrite(ledpin,LOW);
delay(2000);
digitalWrite(ledpin,HIGH);
delay(2000);

}
 if (luminosidade < 100,luminosidade > 50){
  digitalWrite(ledpin,LOW);
  delay(1000);
  digitalWrite(ledpin,HIGH);
  delay(1000);
 }

if(luminosidade < 50, luminosidade > 30) {
  digitalWrite(ledpin,LOW);
  
  
}
 
 }
 


 
