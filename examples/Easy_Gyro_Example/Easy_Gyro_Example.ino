#include "Easy_Gyro.h"
int offset[6] = {  -15,  -430,   859,    173,    -11,     8};
Easy_Gyro Gyro(offset);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Started Serial..");
  Gyro.Initialize();
}

void loop() {
  // put your main code here, to run repeatedly:
 
 Gyro.CalcDMP();
 Serial.print(Gyro.GetPitch());
 Serial.print("  ");
 Serial.print(Gyro.GetRoll());
 Serial.print("  ");
 Serial.println(Gyro.GetYaw());
}
