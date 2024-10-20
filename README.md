# MSP432 Basketball Game

This project showcases an interactive basketball game developed as part of a course project, implemented on the **TI MSP432 microcontroller** and **TI MSP432 Booster Pack**. The game uses embedded systems concepts, low-level programming, and sensor integration to deliver an engaging, responsive user experience. Additionally, the project utilizes **FreeRTOS** to manage real-time tasks efficiently, improving performance and responsiveness.

## Key Skills and Technologies
- **Embedded Systems Design**: Designed and implemented an interactive system using the TI MSP432 microcontroller, focusing on peripherals like accelerometers and light sensors.
- **C Programming**: Developed custom low-level C drivers to control the LCD display, accelerometer, and light sensor, demonstrating proficiency in embedded software development.
- **FreeRTOS**: Utilized FreeRTOS to manage concurrent tasks, ensuring smooth multitasking and optimal resource utilization.
- **SPI and I2C Protocols**: Leveraged the Serial Peripheral Interface (SPI) and Inter-Integrated Circuit (I2C) protocols to communicate with various components, showcasing knowledge of common communication standards in embedded systems.
- **Sensor Integration**: Utilized an accelerometer to detect tilt and implemented dynamic in-game responsiveness. Integrated a lux sensor to enhance the user experience with light/dark mode adaptation.
- **Data Sheet Analysis**: Interpreted and applied hardware datasheets for peripherals (LCD, lux sensor, accelerometer) to write effective and efficient drivers.
- **Real-time Systems**: Managed real-time input/output interactions, including responsive visual rendering on the LCD screen and continuous sensor data acquisition.

## Project Overview
The game allows users to control a basketball displayed on the **TI MSP432 Booster Pack's** LCD screen. Players tilt the device to guide the basketball into the hoop, with smooth, dynamic animation adjusting based on the accelerometer data. Additionally, the game adapts to different lighting conditions using an I2C-based light sensor, providing an optimal display through light and dark mode transitions.

**FreeRTOS** was used to manage tasks such as reading sensor data, updating the display, and handling gameplay mechanics concurrently. This resulted in improved task scheduling and system responsiveness.

## Features
- **Real-time Control**: Detects tilt through the accelerometer and translates it into real-time adjustments of the basketball’s position.
- **Low-level Driver Development**: Custom C drivers for the LCD, light sensor, and accelerometer demonstrate expertise in hardware-level programming.
- **Ambient Light Detection**: Light sensor data is read using the I2C protocol to automatically switch between light and dark display modes, improving usability in varying environments.
- **FreeRTOS Integration**: Managed multiple real-time tasks, such as sensor readings and display updates, using FreeRTOS for efficient multitasking.
- **Embedded Software Efficiency**: The project emphasizes resource-efficient code, necessary in constrained embedded environments.

## Hardware Requirements
- **TI MSP432 LaunchPad** 
- **TI MSP432 Booster Pack** (LCD Display)
- **Onboard Accelerometer**
- **Onboard Lux Sensor** (Ambient Light Detection)

## Project Breakdown
### LCD Display
- Developed custom C drivers to interface with the booster pack's LCD screen, managing graphical rendering and smooth animations.

### Accelerometer Integration
- Used the accelerometer to detect device tilt in real-time, feeding this data into the game to adjust the basketball’s trajectory based on user input.

### Light Sensor (Lux Sensor)
- Implemented an I2C-based driver for the lux sensor, dynamically switching between light and dark modes to accommodate changing ambient light levels.

### FreeRTOS
- Integrated **FreeRTOS** to manage multiple concurrent tasks:
  - Periodic reading of accelerometer and light sensor data.
  - Real-time updating of the LCD display.
  - Gameplay logic processing and event handling.
- Leveraged FreeRTOS to handle task prioritization and inter-task communication, improving overall performance and responsiveness.

## Technical Skills Demonstrated
- **Embedded C Programming**: Developed efficient, low-level drivers for multiple peripherals.
- **SPI/I2C Communication**: Mastered peripheral communication protocols to interface with the LCD display and light sensor.
- **FreeRTOS Task Management**: Managed multiple real-time tasks efficiently using FreeRTOS.
- **Sensor Data Processing**: Real-time data handling and processing from the accelerometer to ensure responsive gameplay.
- **Hardware Abstraction**: Worked directly with hardware registers and low-level APIs to interact with peripherals.
- **Debugging Embedded Systems**: Gained experience in debugging hardware-software interactions in an embedded environment.

## Installation
1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/MSP432-Basketball-Game.git
