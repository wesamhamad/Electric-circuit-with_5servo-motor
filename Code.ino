// C++ code
//
#include <Servo.h>

int sensorValue = 0;

int outputValue = 0;

int unnamed = 0;

int i = 0;

Servo servo_3;

Servo servo_5;

Servo servo_6;

Servo servo_9;

Servo servo_10;

void setup()
{
  pinMode(A0, INPUT);
  servo_3.attach(3, 500, 2500);

  pinMode(A1, INPUT);
  servo_5.attach(5, 500, 2500);

  pinMode(A2, INPUT);
  servo_6.attach(6, 500, 2500);

  pinMode(A3, INPUT);
  servo_9.attach(9, 500, 2500);

  pinMode(A4, INPUT);
  servo_10.attach(10, 500, 2500);

}

void loop()
{
  sensorValue = analogRead(A0);
  outputValue = map(sensorValue, 0, 1023, 0, 90);
  servo_3.write(outputValue);
  sensorValue = analogRead(A1);
  outputValue = map(sensorValue, 0, 1023, 0, 90);
  servo_5.write(outputValue);
  sensorValue = analogRead(A2);
  outputValue = map(sensorValue, 0, 1023, 0, 90);
  servo_6.write(outputValue);
  sensorValue = analogRead(A3);
  outputValue = map(sensorValue, 0, 1023, 0, 90);
  servo_9.write(outputValue);
  sensorValue = analogRead(A4);
  outputValue = map(sensorValue, 0, 1023, 0, 90);
  servo_10.write(outputValue);
  delay(10); // Delay a little bit to improve simulation performance
}