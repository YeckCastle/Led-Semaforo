int ledV=7;
int ledA=13;
int ledR=4;
void setup() {
  pinMode(ledA,OUTPUT);
  pinMode(ledV,OUTPUT);
  pinMode(ledR,OUTPUT);

}

void loop() {
  digitalWrite(ledV,HIGH);
  delay(2000);
  digitalWrite(ledV,LOW);
  digitalWrite(ledA,HIGH);
  delay(500);
  digitalWrite(ledA,LOW);
  delay(500);
  digitalWrite(ledA,HIGH);
  delay(500);
  digitalWrite(ledA,LOW);
  delay(500);
  digitalWrite(ledA,HIGH);
  delay(500);
  digitalWrite(ledA,LOW);
  digitalWrite(ledR,HIGH);
  delay(3000);
  digitalWrite(ledR,LOW);
  delay(1000);

}
