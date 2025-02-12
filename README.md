# Arduino-UNOR3-Smoke-Detector-With-SMS

This repository contains the code and documentation for a project titled **Smoke Detector with SMS Notification**. The main purpose of this project is to enhance safety and alert the user by integrating a smoke detection system with an SMS notification feature. This allows immediate alerts to be sent to concerned individuals when smoke is detected.

## Project Purpose
This project is specifically created to fulfill the requirements of **Practical Research 2 and Practical Research 3** by Group 3 of St. Barbara on SY. 2024-2025 in Immaculate Conception Polytechnic - Sta. Maria.

## Features
- **Smoke Detection**: Utilizes a smoke sensor to detect harmful smoke levels.
- **LED Indicator**: Indicates when harmful smoke level is detected
- **SMS Notification**: Sends instant SMS alerts to predefined phone numbers when smoke is detected.
- **Scalable Design**: Can be integrated with other IoT systems for broader safety measures.

## Components
### Hardware
- Smoke sensor (MQ-135)
- LED Lights
- Arduino UNO R3
- GSM module (SIM800L V2)
- Buzzer
- 12V 1A Power supply


## How It Works
1. The smoke sensor monitors the environment for smoke or harmful gases.
2. When the smoke level exceeds a set threshold, the microcontroller triggers an buzzer alert and lits up LED warning indicator .
3. The GSM module sends an SMS notification to the designated phone numbers.

## Getting Started

### Setup
1. Connect the MQ-135 to the microcontroller as per the circuit diagram.
2. Configure the GSM module for SMS functionality.
3. Upload the provided code to the Arduino UNO R3 using the Arduino IDE.
4. Test the system by simulating smoke.


## Usage
- Install the system in areas prone to smoke or fire hazards.
- Ensure the SMS feature is functional by testing periodically.

## Repository Contents
- `Code`: Source code for the smoke detection and SMS notification system. [Smoke Detector](https://github.com/cornheep/Arduino-UNOR3-Smoke-Detector-With-SMS/blob/main/SMOKE_DETECTOR_V3.ino) will redirect you directly to the code.
- `Docs`: Documentation and diagrams [to follow]

## Acknowledgments
This project is part of the **Practical Research 2 and Practical Research 3** and is developed to demonstrate the integration of MQ-135 air quality sensor, and for practical applications.

## License
This project is licensed under the `MIT License`. See the [LICENSE](https://github.com/cornheep/Arduino-UNOR3-Smoke-Detector-With-SMS/blob/main/LICENSE) for details.

---

For any inquiries or suggestions, please feel free to open an issue or contact the project contributors.
