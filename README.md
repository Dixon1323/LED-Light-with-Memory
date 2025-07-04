# LED-Light-with-Memory

[![Language](https://img.shields.io/badge/Language-C%2B%2B-yellow.svg?style=for-the-badge)](https://en.wikipedia.org/wiki/Programming_language)

A project implementing an LED light control system with a memory function, allowing the light's state to persist across power cycles.

## 📑 Table of Contents

- [Features](#features)
- [Technologies Used](#technologies-used)
- [Installation](#installation)
- [Usage](#usage)
- [Schematic](#schematic)
- [Contributing](#contributing)
- [License](#license)

## 🚀 Features

- Control of an LED light  
- Memory function to save the last state of the LED (e.g., brightness, on/off state)  
- State persists even after power loss  
- Designed for microcontroller platforms  

## 🧰 Technologies Used

- **C++**
- **Arduino Platform** (inferred from `.ino` file)
- **EEPROM Library** for non-volatile memory

## 🔧 Installation

> This project is designed for Arduino-compatible microcontrollers (e.g., Uno, Nano).

1. **Clone the repository:**
   ```bash
   git clone https://github.com/your-username/led-light-with-memory.git
   cd led-light-with-memory
   ```

2. **Open the sketch:**  
   Launch `Light_with_memory.ino` in the Arduino IDE.

3. **Install dependencies:**  
   Make sure the Arduino IDE has the required libraries (e.g., built-in `EEPROM`).

4. **Configure your board and port:**
   - Select your Arduino board under **Tools > Board**
   - Select the appropriate serial port under **Tools > Port**

5. **Upload the code:**
   - Click the **Upload** button in the Arduino IDE

## ▶️ Usage

1. **Assemble the hardware** according to the schematic file `Schematic_predeep_2024-05-18.png`.  
   The circuit includes:
   - An LED
   - Control components (e.g., push button, potentiometer)
   - Power source

2. **Power on the board:**  
   The LED will reflect its **last saved state** from memory.

3. **Interact with the controls:**  
   - Change the LED state (turn on/off or change brightness)
   - Power off and power on again — the state will be restored from EEPROM

## 📘 Schematic

The hardware wiring is illustrated in the schematic image:

- `Schematic_predeep_2024-05-18.png`

Refer to it for proper component connection.

## 🤝 Contributing

Contributions are welcome!

1. Fork the repository  
2. Create your feature branch:  
   ```bash
   git checkout -b feature/YourFeature
   ```
3. Commit your changes:  
   ```bash
   git commit -m "Add YourFeature"
   ```
4. Push to your branch:  
   ```bash
   git push origin feature/YourFeature
   ```
5. Open a pull request


