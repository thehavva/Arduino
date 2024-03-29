#include <MPU6050.h>
#include <Wire.h>

MPU6050 sensor;

int ivmeX , ivmeY , ivmeZ , GyroX , GyroY , GyroZ;


void setup() {

  Serial.begin(9600);
  Wire.begin();
  sensor.initialize();

}

void loop() {

  sensor.getAcceleration(&ivmeX, &ivmeY, &ivmeZ);
  sensor.getRotation(&GyroX, &GyroY, &GyroZ);
  
  //sensor.getMotion6(&ivmeX, &ivmeY, &ivmeZ, &GyroX, &GyroY, &GyroZ);

  Serial.print("ivme X = ");
  Serial.println(ivmeX);

  Serial.print("ivme Y = ");
  Serial.println(ivmeY);

  Serial.print("ivme Z = ");
  Serial.println(ivmeZ);
  Serial.print("\n");
  Serial.print("Gyro X = ");
  Serial.println(GyroX);

  Serial.print("Gyro Y = ");
  Serial.println(GyroY);

  Serial.print("Gyro Z = ");
  Serial.println(GyroZ);

  delay(1000);

}
