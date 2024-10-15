# Hand Gesture Car with Obstacle Avoider
![Picture7](https://github.com/user-attachments/assets/a4e64031-67dd-47a2-9d87-b05066ee70d7)
![Picture6](https://github.com/user-attachments/assets/e52cbac3-0989-4bf8-8f20-cb7b22a9568f)

![Picture3](https://github.com/user-attachments/assets/762ac5fc-3d5f-4660-9dbc-502bc70f9148)
![Picture8](https://github.com/user-attachments/assets/daf2fc77-4c67-48b9-86fe-6298a43a5c4c)

## 🚗 Project Overview
The **Hand Gesture Car with Obstacle Avoider** is an innovative project that combines robotics, gesture-based control, and wireless communication. It uses an **Arduino Uno**, a **gyro sensor**, and the **nRF24L01 module** to enable real-time car movement based on hand gestures. The car also features **ultrasonic sensors** for obstacle detection and avoidance, making it both interactive and intelligent.

---

## 🎥 Demo Video

Check out the working demo of the project below:

[![Demo Video](path/to/your/video_thumbnail.jpg)](https://www.youtube.com/watch?v=YuDOzW4uSL0)

---

## 🔌 Circuit Diagram
- **Transmitter Circuit:**

![Picture4](https://github.com/user-attachments/assets/48f6fc6e-ea79-432b-8f57-e3e164eccd21)

- **Receiver Circuit:**

![Picture5](https://github.com/user-attachments/assets/490555fc-0467-4b98-9929-12b6719c82f2)

---

## 🎯 Objectives
- **Hand Gesture Control:** Move the car wirelessly using hand gestures.
- **Obstacle Avoidance:** Detect and avoid obstacles using ultrasonic sensors.
- **Wireless Communication:** Use the nRF24L01 module for seamless data transmission.
- **Real-Time Control:** Ensure the system responds instantly to user commands.
- **Component Integration:** Coordinate multiple modules like motors, sensors, and controllers.

---

## 💡 Introduction
The hand gesture-controlled car offers users the ability to wirelessly control its movement by tilting or moving their hand. It can move **forward, backward, left, and right** based on the detected gesture. An ultrasonic sensor ensures **obstacle detection and avoidance**, stopping the car when it encounters an object in its path.

By leveraging wireless communication via the **nRF24L01 module**, the car can operate without physical connections, allowing for **flexibility and ease of use**.

---

## 🛠️ Hardware Configuration
| **Component**             | **Details**                                      | **Quantity** |
|---------------------------|--------------------------------------------------|--------------|
| Arduino Uno               | Microcontroller with ATmega328                   | 2            |
| MPU6050 Gyro Sensor       | Detects hand gestures (accelerometer/gyroscope)  | 1            |
| nRF24L01 Module           | Wireless communication module (2.4 GHz)          | 2            |
| L298 Motor Driver         | Controls two DC motors                           | 1            |
| DC Gear Motor             | Voltage: 3V, Torque: 0.8kg.cm                    | 4            |
| Ultrasonic Sensor         | Detects obstacles (Range: 40-300 cm)             | 1            |
| Robot Car Chassis         | Car frame                                        | 1            |
| Battery Cell              | 3.7V Li-ion cells                                | 5            |
| Jumper Wires              | Male-to-Male & Male-to-Female                    | As needed    |

---

## 🧩 Software Requirements
- **Arduino IDE:** Used for writing, compiling, and uploading code to the Arduino boards.
- **Programming Language:** Arduino’s simplified C++.
- **Required Libraries:** 
  - `MPU6050.h`
  - `RF24.h`

---

## 📋 How It Works
1. **Transmitter:**
   - The **MPU6050 sensor** detects hand gestures and transmits the data via the **nRF24L01 module**.
   - Movements along the X and Y axes are interpreted as commands (e.g., forward, backward, left, right).
  
2. **Receiver:**
   - The car receives commands via the **nRF24L01 module**.
   - If the ultrasonic sensor detects an obstacle, the car **stops moving**.
   - Motor control is handled by the **L298 Motor Driver**.

---

## ⚙️ Flow Chart
Insert your flow chart here.

![Flow Chart](path/to/flow_chart.png)

---


## 🚀 Upload the Code

1. **Open the Arduino IDE.**  
2. Upload the **transmitter** and **receiver** code to the respective Arduino boards.

## 🔌 Connect the Hardware

- Assemble the **car chassis** with motors and sensors.  
- Make the necessary connections as per the **circuit diagram**.

## 🏃‍♂️ Run the Project

- Power on the **transmitter** and **receiver**.  
- Use **hand gestures** to control the car!

---

## 📊 Applications

1. **Industrial Automation:** Hands-free control of robotic systems.  
2. **Security Systems:** Autonomous patrolling with obstacle detection.  
3. **Healthcare:** Gesture-based interaction for rehabilitation.  
4. **Gaming & VR:** Immersive gesture control in virtual environments.

---

## 🔍 References

- [nRF24L01 Wireless Communication](https://lastminuteengineers.com/nrf24l01-arduino-wireless-communication/)  
- [Ultrasonic Sensors](https://sensorpartners.com/en/knowledge-base/everything-about-the-operation-principles-of-ultrasonic-sensors/)  
- [Gesture Control Tutorial](https://www.youtube.com/watch?v=-0HCNMU6KrM)

---

## 🏆 Conclusion

This project showcases the potential of **gesture-based control** and **autonomous robotics**. It provides a foundation for further innovations in **robotics, automation, and human-machine interaction**.

---

## 📬 Contact

For any queries, feel free to reach out at:
 
- **Hasibul Hasan Hasib:** hasibhasan305@gmail.com
