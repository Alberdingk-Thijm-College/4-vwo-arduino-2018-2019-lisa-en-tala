/*
   Blink
   turns on an led on for a second, then off for one second, repeatedly.

   this example code is in the public domain
 */

void setup () {
  //intialize the digital pin as an output.
  //pin 13 has a led connected on most arduino board:
  pinMode (13, OUTPUT);
  
}

void loop () {
  digitalWrite (13, HIGH);
  delay(100);
  digitalWrite (13, LOW);
  delay(100);
}
