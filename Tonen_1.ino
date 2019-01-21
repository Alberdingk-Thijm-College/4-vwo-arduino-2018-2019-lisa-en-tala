int speakerPin = 12;

void setup (){ 
 
}
 void loop (){
  tone(speakerPin, 93);
  delay(1000);
 noTone(speakerPin);
  delay(1000);
 }
 
