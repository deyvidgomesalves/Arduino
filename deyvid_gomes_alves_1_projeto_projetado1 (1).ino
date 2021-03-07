#include <Servo.h> 

#define pinServ1 13
#define pinServ2 12
#define pinServ3 11
#define pinServ4 10


#define pot1 A0
#define pot2 A1
#define pot3 A2
#define pot4 A3

Servo serv1,serv2,serv3,serv4;

int motor1,motor2,motor3,motor4;


void setup() {

  serv1.attach(pinServ1);
  serv2.attach(pinServ2);
  serv3.attach(pinServ3);
  serv4.attach(pinServ4);
  
}

void loop(){
  
  motor1 = map(analogRead(pot1), 0, 1023, 0, 180);
  motor2 = map(analogRead(pot2), 0, 1023, 0, 90);
  motor3 = map(analogRead(pot3), 0, 1023, 0, 90);
  motor4 = map(analogRead(pot4), 0, 1023, 0, 60);
  
  serv1.write(motor1); 
  serv2.write(motor2); 
  serv3.write(motor3); 
  serv4.write(motor4); 

  delay(100);

}