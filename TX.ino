#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
#include "Wire.h"
#include "MPU6050.h"

#define CE_PIN 9
#define CSN_PIN 10

RF24 radio(CE_PIN, CSN_PIN); // Create RF24 object

MPU6050 accelgyro; // Create MPU6050 object

const byte address[6] = "00001"; // Address through which the modules communicate

void setup()
{
  Serial.begin(9600);

  radio.begin();
  radio.openWritingPipe(address);
  radio.stopListening();

  Wire.begin();
  accelgyro.initialize();
}

void loop()
{
  int16_t gyroX, gyroY, gyroZ;
  accelgyro.getRotation(&gyroX, &gyroY, &gyroZ); // Read gyro sensor values

  // Send gyro sensor values to the receiver
  radio.write(&gyroX, sizeof(gyroX));
  radio.write(&gyroY, sizeof(gyroY));
  radio.write(&gyroZ, sizeof(gyroZ));
  Serial.print("Gyro X: ");
  Serial.print(gyroX);
  Serial.print("  Gyro Y: ");
  Serial.print(gyroY);
  Serial.print("  Gyro Z: ");
  Serial.println(gyroZ);

  delay(1000);
}
