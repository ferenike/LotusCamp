// C++ code
//
#include <Servo.h>

int Sensor1 = 0;

int Sensor2 = 0;

int Sensor4 = 0;

int Sensor3 = 0;

Servo servo_3;

Servo servo_5;

Servo servo_6;

Servo servo_10;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  servo_3.attach(3, 500, 2500);

  servo_5.attach(5, 500, 2500);

  servo_6.attach(6, 500, 2500);

  servo_10.attach(10, 500, 2500);

}

void loop()
{
  Sensor1 = map(analogRead(A0), 0, 1023, 0, 180);
  Sensor2 = map(analogRead(A1), 0, 1023, 0, 180);
  Sensor3 = map(analogRead(A2), 0, 1023, 0, 180);
  Sensor4 = map(analogRead(A3), 0, 1023, 0, 180);
  servo_3.write(Sensor1);
  servo_5.write(Sensor2);
  servo_6.write(Sensor3);
  servo_10.write(Sensor4);
  delay(10); // Delay a little bit to improve simulation performance
}