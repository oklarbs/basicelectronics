// Diode signal detector on ESP32

const int signalPin = 25; // pin connected after the diode

void setup() {
  Serial.begin(115200);              // Corrected: 'Serial' should be capitalized
  pinMode(signalPin, INPUT);
}

void loop() {
  int signalState = digitalRead(signalPin);

  if (signalState == HIGH) {
    Serial.println("High voltage detected!");
  } else {
    Serial.println("No high voltage detected (safe)");
  }

  delay(500);
}
