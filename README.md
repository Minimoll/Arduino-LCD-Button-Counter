# Arduino LCD Button Counter
This project demonstrates an Arduino-based LCD button counter using the **Arduino UNO R4 WiFi** and an **I²C LCD display**. The sketch counts button presses, debounces the input, toggles an LED, and displays the count on a 16x2 LCD.
---

## Features

- Counts button presses and shows the count on a 16x2 LCD.
- Implements reliable button debouncing.
- Toggles an LED state each time the button is pressed.
- Includes robust, native unit tests to verify debounce and counting logic.
- Built using [PlatformIO](https://platformio.org/) for professional embedded software development.
---

## Hardware Requirements

- Arduino UNO R4 WiFi
- 16x2 LCD Display with I²C backpack
- Pushbutton and LED
- Breadboard and connecting wires
## How to Build and Upload

### Install PlatformIO
```bash
pip install platformio
```
### Upload Firmware to Arduino
```bash
platformio run -e uno_r4_wifi --target upload
```
### Run Unit tests
```bash
platformio test -e native
```

## Dependencies
- [LiquidCrystal_I2C](https://platformio.org/lib/show/615/LiquidCrystal%20I2C) by Marco Schwartz  
