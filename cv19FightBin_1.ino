//first run (code1)
#include <Servo.h> 


Servo myservo;
int State = 0;
void setup() {
    Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(9, OUTPUT);
  myservo.attach(9);
  myservo.write(160); // Setup Servo 
  delay(10000); 
  myservo.write(0); 
}
void loop() {
  int Sr = digitalRead(2); // รับค่า Sensor 
  Serial.println(State);
  if (State == 0) {
    if (Sr == 1) { 
      myservo.write(0); 
      delay(100); 
    }
    else if (Sr == 0) { 
      myservo.write(160); 
      State = 1; 
    }
  }
  if (State == 1) { 
    delay(3000); 
    State = 0; 
  }
} 