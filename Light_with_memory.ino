#include <EEPROM.h>

bool ledState = false;

void setup() {
  pinMode(0, INPUT_PULLUP);
  pinMode(3, OUTPUT);
  // Read the stored LED state from EEPROM
  ledState = EEPROM.read(0);
  digitalWrite(3, ledState);
}

void loop() {
  if (digitalRead(0) == LOW) {
    ledState = !ledState;
    EEPROM.write(0, ledState);
    digitalWrite(3, ledState);
    delay(1000);
    // Save the current LED state to EEPROM
  }
}
