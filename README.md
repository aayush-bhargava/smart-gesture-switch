# 👋 Gesture-Controlled Home Automation System

Control appliances wirelessly using just your hand gestures.  
This project uses an **ESP32**, an **MPU6050 gyroscope/accelerometer**, and a **relay module** to simulate smart home automation without buttons, apps, or voice.

---

## 🔧 Components Used

| Component        | Quantity | Purpose                             |
|------------------|----------|-------------------------------------|
| ESP32 Dev Board  | 1        | Main controller (Wi-Fi capable)     |
| MPU6050 Sensor   | 1        | Detects tilt gestures               |
| 1-Channel Relay  | 1        | Controls AC appliance (simulated)   |
| LED + 220Ω Resistor | 1     | Simulates an appliance like a bulb  |
| Jumper Wires     | 10+      | Connections                         |
| Breadboard       | 1        | For prototyping                     |
| USB Cable        | 1        | Power and programming               |

---

## 🔌 Circuit Connections

### 🧠 MPU6050 → ESP32 (I2C)

| MPU6050 Pin | ESP32 Pin |
|-------------|------------|
| VCC         | 3.3V       |
| GND         | GND        |
| SDA         | GPIO 21    |
| SCL         | GPIO 22    |

### ⚡ Relay → ESP32

| Relay Pin | ESP32 Pin |
|-----------|-----------|
| IN        | GPIO 18   |
| VCC       | VIN (5V)  |
| GND       | GND       |

### 💡 LED via Relay

- COM (Relay) → 5V
- NO (Relay) → LED +ve → 220Ω resistor → GND

---

## 🧠 How It Works

| Gesture           | Action             |
|-------------------|--------------------|
| Tilt Forward      | Turns ON light     |
| Tilt Backward     | Turns OFF light    |

The MPU6050 detects tilt using accelerometer values.  
ESP32 reads those values and activates/deactivates a relay accordingly.  
An LED simulates the appliance (like a bulb).

---

## 🧪 Demo Screenshot / Image

> _Upload clean wiring image here once ready._  
Example:
![Circuit Diagram](circuit-diagram.png)

---

## 📂 Folder Structure
gesture-home-automation/
├── gesture_home.ino # Arduino sketch (main code)

├── README.md # This file

├── wiring_diagram.png # Upload your diagram here

└── images/ # (Optional) Demo photos or GIFs


---

## 🚀 Getting Started

1. Open the code in Arduino IDE or PlatformIO
2. Install `MPU6050` library (`jrowberg` or `i2cdevlib`)
3. Connect the circuit as per diagram
4. Upload the code to ESP32
5. Open serial monitor to verify gesture detection
6. Tilt your hand/device to turn light ON/OFF

---

## ✅ Future Improvements

- Add OLED display for gesture feedback  
- Control multiple appliances with more gestures  
- Extend with WiFi + mobile dashboard  
- Add safety cutoff using current sensors (ACS712)

---

## 🧑‍💻 Author

**Aayush Bhargava**  
[GitHub](https://github.com/aayush-bhargava) | [LinkedIn](https://www.linkedin.com/in/aayush-bhargava-27b9ab369/)  
📧 aayushbhargava71@gmail.com

---

## 📜 License

This project is licensed under the MIT License.  
Feel free to fork, modify, and use it in your own smart home setups.

---

> "No buttons. No apps. Just gestures. Welcome to the future of interaction." 🚀

