//we loten drie ledjes knippen
int linkerPin = 11;
int middenPin = 10;
int rechterPin = 9;
 
void setup() {
pinMode(linkerPin, OUTPUT);
pinMode(middenPin, OUTPUT);
pinMode(rechterPin, OUTPUT);

}

void loop() {
digitalWrite(linkerPin, HIGH);
delay(2000);
digitalWrite(linkerPin, LOW);
delay(1000);

digitalWrite(middenPin, HIGH);
delay(1000);
digitalWrite(middenPin, LOW);
delay(1000);

digitalWrite(rechterPin, HIGH);
delay(2000);
digitalWrite(rechterPin, LOW);
delay(1000);


}
