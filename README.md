# Hand Gesture Car with Obstacle Avoider

![Picture3](https://github.com/user-attachments/assets/8e50fba1-56d6-41b7-80d8-fd6928cd8b4c)
![Picture1](https://github.com/user-attachments/assets/66d203b9-f8c4-431d-aa05-b28a32c6c1d5)
![Picture2](https://github.com/user-attachments/assets/7e8e4cee-7546-478b-93b0-6676e3f59781)

## 🚗 Project Overview
The **Hand Gesture Car with Obstacle Avoider** is an innovative project that combines robotics, gesture-based control, and wireless communication. It uses an **Arduino Uno**, a **gyro sensor**, and the **nRF24L01 module** to enable real-time car movement based on hand gestures. The car also features **ultrasonic sensors** for obstacle detection and avoidance, making it both interactive and intelligent.

---

## 🎥 Demo Video

Check out the working demo of the project below:

[![Demo Video](path/to/your/video_thumbnail.jpg)](https://youtube.com/link_to_video)

---

## 🔌 Circuit Diagram
- **Transmitter Circuit:**

  ![Transmitter Diagram](path/to/transmitter_diagram.png)

- **Receiver Circuit:**

  ![Receiver Diagram](path/to/receiver_diagram.png)

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
