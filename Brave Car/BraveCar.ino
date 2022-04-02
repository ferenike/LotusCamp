#include<SoftwareSerial.h>
int IN1 = 7;
int IN2 = 6;
int IN3 = 5;
int IN4 = 4;
int dato;
SoftwareSerial bluetooth(3, 2);
void setup() {
pinMode(IN1, OUTPUT); //declaramos el pin 7, IN1 como salida
pinMode(IN2, OUTPUT);
pinMode(IN3, OUTPUT);
pinMode(IN4, OUTPUT);
bluetooth.begin(9600);// trabajar la velocidad de 9600
}
void loop() {
if (bluetooth.available()) {
dato = bluetooth.read();
if (dato == '4') { //adelante
digitalWrite(IN1, HIGH);
digitalWrite(IN2, LOW);
digitalWrite(IN3, LOW);
digitalWrite(IN4, HIGH);
}
if (dato == '2') { //atras
digitalWrite(IN1, LOW);
digitalWrite(IN2, HIGH);
digitalWrite(IN3, HIGH);
digitalWrite(IN4, LOW);
}
if (dato == '3') { //derecha
digitalWrite(IN1, HIGH);
digitalWrite(IN2, LOW);
digitalWrite(IN3, LOW);
digitalWrite(IN4, LOW);
}
if (dato == '1') { //izquierda
digitalWrite(IN1, LOW);
digitalWrite(IN2, LOW);
digitalWrite(IN3, LOW);
digitalWrite(IN4, HIGH);
}
if (dato == 'E') {
digitalWrite(IN1, LOW);
digitalWrite(IN2, LOW);
digitalWrite(IN3, LOW);
digitalWrite(IN4, LOW);
}
}
