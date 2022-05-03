#include <Servo.h>

Servo myservo;  

int pos = 0;    

void setup() {
  myservo.attach(9);  
}

void loop() {
  for (pos = 45; pos <= 160; pos += 2) 
    myservo.write(pos);              
    delay(15);                       
  }
  for (pos = 180; pos >= 0; pos -= 1) { 
    myservo.write(pos);              
    delay(15);                       
  }
}
