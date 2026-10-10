/*
  Smart Parking System (ESP32 + Wokwi)
  Author: Manoj

  Description:
    Tracks 3 parking slots, shows free spaces on a 16x2 I2C LCD,
    and opens a servo gate only when a car is detected at the
    entrance and at least one slot is free.

  Hardware:
    ESP32 DevKit V1, 3x slide switch (slot occupied),
    3x green LED, 3x red LED, HC-SR04, servo, 16x2 I2C LCD

  Pins:
    Slot switches : GPIO13, GPIO14, GPIO27
    Green LEDs    : GPIO25, GPIO26, GPIO32
    Red LEDs      : GPIO33, GPIO18, GPIO19
    HC-SR04       : TRIG GPIO4, ECHO GPIO5
    Servo         : GPIO23
    LCD I2C       : SDA GPIO21, SCL GPIO22

  Libraries:
    LiquidCrystal I2C, ESP32Servo
*/
