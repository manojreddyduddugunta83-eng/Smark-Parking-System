# Smart Parking System (ESP32 + Wokwi)

A simulated smart parking system built on an ESP32. It tracks free parking slots, shows availability on an LCD, and opens an entry gate only when a car is detected and a space is free.

## Features
- 3 parking slots with green (free) and red (occupied) LED indicators
- Ultrasonic sensor detects a car at the entry gate
- Servo-controlled gate barrier
- Gate stays closed when the lot is full
- 16x2 I2C LCD shows the free slot count or "PARKING FULL!"
- Serial monitor logs for debugging

## Components
| Component | Quantity |
|---|---|
| ESP32 DevKit V1 | 1 |
| Slide switch (simulates a car in a slot) | 3 |
| Green LED | 3 |
| Red LED | 3 |
| HC-SR04 ultrasonic sensor | 1 |
| Servo motor | 1 |
| 16x2 LCD (I2C) | 1 |

## Pin Connections
| Component | ESP32 pin |
|---|---|
| Slot switches 1 / 2 / 3 | GPIO13 / 14 / 27 |
| Green LEDs 1 / 2 / 3 | GPIO25 / 26 / 32 |
| Red LEDs 1 / 2 / 3 | GPIO33 / 18 / 19 |
| HC-SR04 TRIG / ECHO | GPIO4 / GPIO5 |
| Servo signal | GPIO23 |
| LCD SDA / SCL | GPIO21 / GPIO22 |

## How It Works
1. Each slide switch simulates a slot: ON means occupied.
2. When the ultrasonic distance drops below 20 cm, a car is at the gate.
3. If at least one slot is free, the gate opens. If the lot is full, it stays closed.
4. The gate closes 2 seconds after the car moves away.

## How to Run
1. Open the project on [Wokwi](https://wokwi.com) (add your project link here).
2. Or create a new ESP32 project and paste in `sketch.ino`, `diagram.json` and `libraries.txt`.
3. Press the play button.
4. Drag the HC-SR04 distance slider below 20 cm to simulate a car arriving.
5. Flip the slot switches to mark slots occupied.

## Libraries
- LiquidCrystal I2C
- ESP32Servo

## Wokwi Simulation
[Open the simulation](https://wokwi.com/projects/YOUR_PROJECT_ID)

## Future Improvements
- Wi-Fi dashboard showing live slot availability
- Exit gate and car counter
- Buzzer alert when the lot is full

## Author
Manoj
