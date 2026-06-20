const int ledPin = 4;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH); // LED yan
  delay(1000);

  digitalWrite(ledPin, LOW);  // LED sön
  delay(1000);
}