#include "USB.h"
#include "USBHIDKeyboard.h"

USBHIDKeyboard Keyboard;

void setup() {
  USB.begin();
  Keyboard.begin();

  delay(3000); // bilgisayar cihazı tanısın diye bekle

  Keyboard.println("Hello from ESP32-S3");
}

void loop() {
}