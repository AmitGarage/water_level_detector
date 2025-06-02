// Define the analog pin the sensor is connected to
const int sensorPin = A0;

void setup() {
  // Initialize serial communication for printing values
  Serial.begin(9600);
}

void loop() {
  // Read the analog value from the sensor
  int sensorValue = analogRead(sensorPin);

  // Print the analog value to the serial monitor
  Serial.print("Sensor Value: ");
  Serial.println(sensorValue);
  
  delay(100); // Wait for 100 milliseconds before reading again
}
