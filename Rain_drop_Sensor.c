//Code For Arduino UNO
//raindrop sensor
// Pin Definitions
const int rainSensorPin = 2;  // Rain sensor digital output
const int buzzerPin = 8;      // Buzzer connected to digital pin 8
const int redLedPin = 7;      // Red LED connected to digital pin 7
const int greenLedPin = 6;    // Green LED connected to digital pin 6

void setup() {
  // Initialize pins
  pinMode(rainSensorPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(redLedPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);

  // Start serial communication for debugging
  Serial.begin(9600);
}

void loop() {
  // Read the rain sensor value
  int sensorValue = digitalRead(rainSensorPin);
  Serial.print("Rain Sensor State: ");
  Serial.println(sensorValue);

  // Check if rain is detected (LOW indicates rain in some modules; adjust if reversed)
  if (sensorValue == LOW) { // Rain detected
    digitalWrite(buzzerPin, HIGH);  // Turn on the buzzer
    digitalWrite(redLedPin, HIGH);  // Turn on the red LED
    digitalWrite(greenLedPin, LOW); // Turn off the green LED
  } else { // No rain detected
    digitalWrite(buzzerPin, LOW);   // Turn off the buzzer
    digitalWrite(redLedPin, LOW);   // Turn off the red LED
    digitalWrite(greenLedPin, HIGH);// Turn on the green LED
  }

  delay(500); // Delay for stability
}
