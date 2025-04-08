// Synchronous LED flicker
void setup() {
  pinMode(2, OUTPUT); // LED 1
  pinMode(3, OUTPUT); // LED 2
}

void loop() {
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  delay(500); // on for 500 ms

  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  delay(500); // off for 500 ms
}
