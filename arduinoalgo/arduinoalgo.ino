void setup() {
  Serial.begin(9600);  // Initialize serial communication
}

void loop() {
  int potValue = analogRead(A0);  // Read the potentiometer on pin A0
  Serial.println(potValue);  // Send the value over serial
  delay(100);  // Delay to avoid flooding the serial
}
