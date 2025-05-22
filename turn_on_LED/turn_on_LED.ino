// Define LED for pin 9
const int LED = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);   // set LED pin as output

}

void loop() {
  // put your main code here, to run repeatedly:
  int i = 100;
  for (i ; i <= 1000; i = i + 100) {
    digitalWrite(LED, HIGH); // set LED pin HIGH (5V)
    delay(i);
    digitalWrite(LED, LOW);
    delay(i);
  }
}
