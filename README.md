# AlertFire

This repository contains the code and documentation for a project titled **AlertFire** which is a smoke detector with SMS capabilities that mainly utilizes an Arduino UNO R3, MQ-135 gas/smoke sensor and GSM 800L. The main goal of this project is to enhance safety by alerting the user of this project when smoke is detected. By integrating a smoke detection system with an SMS notification feature, This allows immediate alerts to be sent to individuals using this p when smoke is detected.

## Project Purpose
This project is specifically created to fulfill the requirements of **Practical Research 2 and Practical Research 3** by Group 3 of St. Barbara on SY. 2024-2025 in Immaculate Conception Polytechnic - Sta. Maria .

## Features
- **Smoke Detection**: Utilizes a smoke sensor to detect harmful smoke levels.
- **LED Indicator**: Indicates when harmful smoke level is detected.
- **SMS Notification**: Sends instant SMS alerts to predefined phone numbers when smoke is detected.
- **Audio Signaling** : Alerts nearby users using a buzzer. 
- **Scalable Design**: Can be integrated with other IoT systems for broader safety measures.

## Components
### Hardware
- 1x Smoke sensor (MQ-135)
- 1x Arduino UNO R3 (Microcontroller)
- 1x GSM module (GSM 800L)
- 1x GSM external antenna
- 1x Red LED
- 1x Green LED
- 1x Buzzer 
- 1x Jumper Wires
- 1x DC-DC Buck Converter LM2596S
- 1x  12V 1A Power supply


## How It Works
1. This works by utilizing electrical signals that can be interpreted by the microcontroller using the code ([Smoke Detector](https://github.com/cornheep/Arduino-UNOR3-Smoke-Detector-With-SMS/blob/main/SMOKE_DETECTOR_V3.ino)).
2. The smoke sensor monitors the environment for smoke or harmful gases.
3. When the smoke level exceeds the set threshold, the microcontroller triggers an buzzer alert and lits up LED warning indicator.
3. The GSM module sends an SMS notification to the designated phone numbers.

## Getting Started

### Setup
1. Connect all of the components as per the code. [Smoke Detector](https://github.com/cornheep/Arduino-UNOR3-Smoke-Detector-With-SMS/blob/main/SMOKE_DETECTOR_V3.ino) will redirect you directly to the code.
2. Upload the provided code ([Smoke Detector](https://github.com/cornheep/Arduino-UNOR3-Smoke-Detector-With-SMS/blob/main/SMOKE_DETECTOR_V3.ino)) using the Arduino IDE.
3. Test the system by simulating smoke.


## Usage
- Install the system in areas prone to smoke or fire hazards.
- Ensure the SMS feature is functional by testing periodically.

## Repository Contents
- `Code`: Source code for the smoke detection and SMS notification system. [Smoke Detector](https://github.com/cornheep/Arduino-UNOR3-Smoke-Detector-With-SMS/blob/main/SMOKE_DETECTOR_V3.ino) will redirect you directly to the code.

## License
This project is licensed under the `MIT License`. See the [LICENSE](https://github.com/cornheep/Arduino-UNOR3-Smoke-Detector-With-SMS/blob/main/LICENSE) for details.

---
