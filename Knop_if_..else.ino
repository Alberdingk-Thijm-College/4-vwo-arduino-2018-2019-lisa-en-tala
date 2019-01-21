int knopPin = 2;
int ledPin = 13;
int toestandKnop = 0;

void setup () {
  pinMode (ledPin, OUTPUT);
  pinMode (knopPin, INPUT);
}

void loop () {
  toestandKnop = digitalRead (knopPin);
  if (toestandKnop == HIGH) {
    digitalWrite (ledPin, LOW);
    
}
 else {
  digitalWrite (ledPin, HIGH);
  
 }
}
