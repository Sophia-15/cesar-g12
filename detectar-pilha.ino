#include <Ultrasonic.h>
 
Ultrasonic ultrasonic(8, 10);
int distance;
int led = 12;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  distance = ultrasonic.read();
  
  delay(125);

  if (distance < 15) {
    digitalWrite(led, HIGH);
    Serial.println("abre");
    delay(1000);
  } else {
    digitalWrite(led, LOW);
  }
}
