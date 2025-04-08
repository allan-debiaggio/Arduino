void setup() {
  pinMode(2, OUTPUT); // LED 1
  pinMode(3, OUTPUT); // LED 2
  pinMode(4, OUTPUT); // LED 3
  pinMode(5, OUTPUT); // LED 4
  pinMode(6, OUTPUT); // LED 5
  pinMode(7, OUTPUT); // LED 6
  pinMode(8, OUTPUT); // LED 7
  pinMode(9, OUTPUT); // LED 8
}

void loop() {
  digitalWrite(2, HIGH); // LED 1 ON
  delay(500);

  digitalWrite(2, LOW);  // LED 1 OFF
  digitalWrite(3, HIGH); // LED 2 ON
  delay(500);
  
  digitalWrite(3, LOW); // LED 2 OFF
  digitalWrite(4, HIGH); // LED 3 ON
  delay(500);
  
  digitalWrite(4, LOW); // LED 3 OFF
  digitalWrite(5, HIGH); // LED 4 ON
  delay(500);
  
  digitalWrite(5, LOW); // LED 4 OFF
  digitalWrite(6, HIGH); // LED 5 ON
  delay(500);
  
  digitalWrite(6, LOW); // LED 5 OFF
  digitalWrite(7, HIGH); // LED 6 ON
  delay(500);
  
  digitalWrite(7, LOW); // LED 6 OFF
  digitalWrite(8, HIGH); // LED 7 ON
  delay(500);
  
  digitalWrite(8, LOW); // LED 7 OFF
  digitalWrite(9, HIGH); // LED 8 ON
  delay(500);
  
  digitalWrite(9, LOW); // LED 8 OFF
}
