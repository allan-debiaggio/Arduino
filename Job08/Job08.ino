void setup() {
  pinMode(3, OUTPUT); // Must be a PWM-capable pin
}

void loop() {
  // Fade in
  for (int brightness = 0; brightness <= 255; brightness++) {
    analogWrite(3, brightness); // PWM value: 0 (off) to 255 (full brightness)
    delay(10); // Small delay to make the fade visible
  }

  // Fade out
  for (int brightness = 255; brightness >= 0; brightness--) {
    analogWrite(3, brightness);
    delay(10);
  }
}
