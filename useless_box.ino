#include <Servo.h> 
#define pin_switch 2
Servo servo_dedo, servo_tapa;

void setup() {
  pinMode(pin_switch, INPUT);
  servo_dedo.attach(9);
  servo_tapa.attach(10);
  
  servo_dedo.write(120);
  delay(600);
  servo_tapa.write(60);
  delay(600);
}

void loop() {
  if(digitalRead(pin_switch)){
    servo_tapa.write(160);
    delay(300);
    
    servo_dedo.write(13);
    delay(300);
    servo_dedo.write(120);
    delay(300);
    
    servo_tapa.write(60);
    delay(2000);
  }
 
}
