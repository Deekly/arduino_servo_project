#include <Wire.h>
#include <iarduino_MultiServo.h>

//  http://iarduino.ru/file/255.html

#define SERVO_0 0
#define SERVO_1 1
#define SERVO_2 2

iarduino_MultiServo pwm;

void setup() 
  {
    pwm.servoSet(SERVO_0, 360, 0, 2200);
    pwm.servoSet(SERVO_1, 360, 0, 2200);
    pwm.servoSet(SERVO_2, 360, 0, 2200);
    pwm.begin();
  
  
  }

void loop() 
  {
    pwm.analogWrite(SERVO_0, 300);
    pwm.analogWrite(SERVO_1, 3000);
    pwm.analogWrite(SERVO_2, 3000);
    delay(1500);
    pwm.analogWrite(SERVO_ALL, 0);
    delay(1500);

    turn_servo_1(180);

    delay(3000);
  
    
  }


int turn_servo_1 (int degree)
  {
   /* if (degree >= 180 && degree <= 225):
      {
          degree += 10
      }*/
    
    int angle = degree / 5 * 21;
    pwm.analogWrite (SERVO_1, 3000);
    delay(angle);
    pwm.analogWrite(SERVO_1, 0);
  }












  
