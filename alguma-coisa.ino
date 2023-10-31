#include <Ultrasonic.h>

/*
 * Pass as a parameter the trigger and echo pin, respectively,
 * or only the signal pin (for sensors 3 pins), like:
 * Ultrasonic ultrasonic(13);
 */
 
Ultrasonic ultrasonic(8, 10);
int distance;
int led = 12;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  // Pass INC as a parameter to get the distance in inches
  int distance = ultrasonic.read();

  Serial.print("Distance in CM: ");
  Serial.println(distance);
  delay(125);

  if (distance < 15) {
    digitalWrite(led, HIGH);
    Serial.println("Ligado");
    delay(1000);
  } else {
    Serial.println("N ligou");
    digitalWrite(led, LOW);
    delay(1000);
  }
}
