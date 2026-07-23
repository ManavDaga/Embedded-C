# ESP32 Modular Sensor Statistics

A modular ESP32 project developed using the Arduino IDE to demonstrate clean code organization, function modularization, and real-time sensor data processing.

The project reads data from an SCD41 CO₂ sensor and calculates live statistics such as minimum, maximum, and average values, displaying all information on the Serial Monitor.

---

## Features

- Modular project structure using multiple `.h` and `.cpp` files
- LED control using reusable functions
- SCD41 sensor interfacing over I²C
- Real-time temperature monitoring
- Real-time humidity monitoring
- Real-time CO₂ monitoring
- Live calculation of:
  - Maximum value
  - Minimum value
  - Average value
  - Total number of sensor readings
- Serial Monitor dashboard for current readings and statistics

---

## Project Structure

```text
ESP32-Modular-Sensor-Statistics/
│
├── sketch_jul23a.ino      // Main program
├── led.h                  // LED function declarations
├── led.cpp                // LED implementation
├── sensor.h               // Sensor function declarations
├── sensor.cpp             // SCD41 sensor implementation
├── statistic.h            // Statistics function declarations
└── statistic.cpp          // Statistics calculations
```

---

## Hardware Used

- ESP32 Development Board
- Sensirion SCD41 CO₂ Sensor
- LED connected to GPIO 2
- LED connected to GPIO 15

---

## Software Used

- Arduino IDE
- ESP32 Arduino Core
- Wire Library
- Sensirion I²C SCD4x Library

---

## Statistics Calculated

For every sensor reading, the program calculates:

- Current Temperature
- Current Humidity
- Current CO₂
- Maximum Temperature
- Minimum Temperature
- Average Temperature
- Maximum Humidity
- Minimum Humidity
- Average Humidity
- Maximum CO₂
- Minimum CO₂
- Average CO₂
- Total Number of Readings

---

## Serial Monitor Output

```text
Current Reading

Temperature : 25.4 °C
Humidity    : 54.2 %
CO₂         : 486 ppm

========== SENSOR STATISTICS ==========

Readings : 10

Temperature
Average : 25.68
Maximum : 26.41
Minimum : 24.97

Humidity
Average : 54.83
Maximum : 56.10
Minimum : 53.20

CO₂
Average : 497
Maximum : 521
Minimum : 478
=======================================
```

---

## Concepts Practiced

- Embedded C++
- Modular Programming
- Header Files (`.h`)
- Source Files (`.cpp`)
- Function Declarations and Definitions
- Function Parameters
- Global Variables
- Conditional Statements
- Loops
- Running Statistics
- Serial Communication
- I²C Sensor Communication
- Code Organization

---

## Future Improvements

- Replace `delay()` with `millis()`
- Add serial command menu
- Store historical sensor readings
- Display trend analysis
- Add MQTT support
- Add Modbus support

---

## Author

**Manav Daga**

Learning Embedded Systems and ESP32 development through hands-on projects.
