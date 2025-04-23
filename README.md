# 📱 Home Automation via Phone (Bluetooth + Arduino)

This project enables **home automation** using an **Arduino** and **Bluetooth** module (HC-05/HC-06), allowing you to control lights, fans, and other electrical switches using your smartphone.

## 🏠 Features

- Control multiple appliances (lights, fans, etc.) wirelessly via your phone
- Bluetooth-based communication (compatible with HC-05/HC-06)
- Easily expandable with more switches and devices
- Lightweight Arduino sketch, beginner-friendly

## 🔌 Hardware Required

- Arduino Uno (or compatible board)
- HC-05/HC-06 Bluetooth module
- Relay module (2/4/8 channel, based on your need)
- Jumper wires
- Smartphone (with a Bluetooth terminal app)
- Power supply

## 📲 How It Works

1. Upload the `.ino` code to your Arduino.
2. Pair your phone with the HC-05/HC-06 module.
3. Use a Bluetooth terminal app to send predefined commands (e.g., `A`, `B`, `C`, etc.).
4. Arduino receives the commands and activates corresponding relays to control devices.

## 💡 Command Format

| Command | Action               |
|---------|----------------------|
| `A`     | Turn ON Light 1      |
| `a`     | Turn OFF Light 1     |
| `B`     | Turn ON Fan          |
| `b`     | Turn OFF Fan         |
| ...     | Extend as needed     |

## 🛠️ Installation

1. Clone this repository:
   ```bash
   git clone https://github.com/yourusername/home-automation-bluetooth.git
   ```
## Contribution 
Pull requests are welcome. For major changes, please open an issue first to discuss what you would
like to change.
