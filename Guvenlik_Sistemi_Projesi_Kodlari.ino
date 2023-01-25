int buzzer=8;
int ldr=A0;
int led=2;
 
void setup() {
  Serial.begin(9600);
  pinMode(buzzer,OUTPUT);
  pinMode(led,OUTPUT);
}
 
void loop() {
int ldrdeger=analogRead(ldr);
Serial.println(ldrdeger);
if(ldrdeger<800)
  
  {
    digitalWrite(led,LOW);
    noTone(buzzer);
  }
  else
  {
    digitalWrite(led,HIGH);
    tone(buzzer,1000);
  }
}
 