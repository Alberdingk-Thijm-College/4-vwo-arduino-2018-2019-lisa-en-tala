void setup() {
pinMode(1, OUTPUT);
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(12, OUTPUT);
pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(8, HIGH);
  delay(2000);
  digitalWrite(1, HIGH);
  digitalWrite(8, LOW);
  delay(1000); 
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH); 
  delay(2000); 
  digitalWrite(2, HIGH);
  digitalWrite(9, LOW);
  delay(1000); 
  digitalWrite(2, HIGH); 
  digitalWrite(3, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(1, HIGH);
  delay(2000); 
  digitalWrite(3, HIGH); 
  digitalWrite(10, LOW);
  delay(1000);
  digitalWrite(3, HIGH); 
  digitalWrite(2, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(1, HIGH);
  delay(2000);
  digitalWrite(4, HIGH);
  digitalWrite(11, LOW);
  delay(1000);
}

if(remember == 1)
{
  wait(500);
  digitalWrite(12, HIGH); 
  digitalWrite(5, LOW); 
  wait(1000);
  digitalWrite(12, LOW);
  digitalWrite(5, HIGH);
  remember = 0;
}
}

void wait(int seconds)
{
  while(seconds > 0)
  {
    if(digitalRead(13)==HIGH)
    {
      remember = 1;
      Serial.println("knopje aan");
    }
    delay(1);
    seconds--;
  }f
