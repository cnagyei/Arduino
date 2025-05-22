// Define LED for pin 9
const int LED = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);   // set LED pin as output

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 256; i++) {
    analogWrite(LED, i); // set LED pin to analogue voltage
    delay(10);
  }
  for (int i = 255; i >= 0; i--) {
    analogWrite(LED, i); // set LED pin to analogue voltage
    delay(10);
  }
}
