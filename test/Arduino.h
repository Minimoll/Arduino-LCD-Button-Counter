#ifndef ARDUINO_H
#define ARDUINO_H

// Define basic Arduino constants
#define HIGH 0x1
#define LOW  0x0
#define INPUT 0x0
#define OUTPUT 0x1
#define INPUT_PULLUP 0x2

// Function prototypes (mocks/stubs)
unsigned long millis();
int digitalRead(int pin);
void digitalWrite(int pin, int value);
void pinMode(int pin, int mode);

// Add any other Arduino functions you reference in tests here.

#endif