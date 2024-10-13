#include<SoftwareSerial.h>
SoftwareSerial Bluetooth(2,3);
int ld1=9;
int brightness = 0;  
int fadeAmount = 5;

void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
pinMode(ld1,OUTPUT);
}


void loop() {
//  put your main code here, to run repeatedly:



digitalWrite(ld1,LOW);
    char BlueTooth = (char)Serial.read();
    Serial.println(BlueTooth);

    switch(BlueTooth)
    
    {
    case 'F':
   analogWrite(ld1, 10);
   delay(1000);

    break;
  
    case 'B':
    analogWrite(ld1, 100);
     delay(1000);
    break;
  
    case 'R':
    analogWrite(ld1, 255);
     delay(1000);

    break;

    }}






 





