/*
Caleb's first Arduino program
*/

// Define constants
int ledPin = 13;

void setup() {
  // put your setup code here, to run once:
  //Initialize pin as output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(ledPin, HIGH);
  delay(2000);
  digitalWrite(ledPin, LOW);
  delay(1000);

}
