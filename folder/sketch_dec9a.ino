const int waterSensorPin = A0;  // Analog pin for water sensor

void setup() {
  Serial.begin(9600);  
  Serial.println("Time (Seconds), Water Level");  //  CSV header
}

void loop() {
  // Read water level
  int waterLevel = analogRead(waterSensorPin);

  // Get time in seconds
  unsigned long currentTime = millis() / 1000;

  // Print data to Monitor
  Serial.print(currentTime);
  Serial.print(", ");
  Serial.println(waterLevel);

  delay(60000);  // Log data every 60 seconds
}
