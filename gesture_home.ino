#include <Wire.h>
#include <MPU6050.h>

// Initialize MPU6050 object
MPU6050 mpu;

// Relay pin (connected to IN of 1-channel relay)
const int relayPin = 18;

void setup() {
  Serial.begin(115200);
  Wire.begin();
  mpu.initialize();

  // Relay pin setup
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, HIGH);  // Relay OFF initially (Active LOW)

  Serial.println("Gesture-Controlled Home Automation Ready");
}

void loop() {
  int16_t ax, ay, az;
  mpu.getAcceleration(&ax, &ay, &az);

  // Tilt forward → Turn ON light
  if (ay < -15000) {
    Serial.println("Gesture: Forward → Relay ON");
    digitalWrite(relayPin, LOW); // Relay ON
    delay(1000); // Debounce delay
  }

  // Tilt backward → Turn OFF light
  else if (ay > 15000) {
    Serial.println("Gesture: Backward → Relay OFF");
    digitalWrite(relayPin, HIGH); // Relay OFF
    delay(1000);
  }

  delay(200); // Small read delay
}
