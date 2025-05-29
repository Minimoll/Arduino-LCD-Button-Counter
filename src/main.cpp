#include <Arduino.h>
#include <LiquidCrystal_I2C.h>
#include "logic.h"


#define LED_PIN 13      //PIN 13 toggles my led
#define BUTTON_PIN 12   // PIN 12 is my input button pin

LiquidCrystal_I2C lcd(0x27, 16, 2); //LCD setup, (address, # of chars, # of lines)

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  lcd.init();
  lcd.clear();
  lcd.backlight();
  lcd.print("Count: ");
  lcd.print(count);
}

void loop() {
  bool buttonState = digitalRead(BUTTON_PIN) == LOW;
  if (debouncedPress(millis(), buttonState)) {
    pressHandler();
    lcd.setCursor(7,0);
    lcd.print(count);
    digitalWrite(LED_PIN, !digitalRead(LED_PIN));
  }
}