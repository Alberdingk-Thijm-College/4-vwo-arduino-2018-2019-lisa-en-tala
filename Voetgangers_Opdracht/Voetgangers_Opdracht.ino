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
