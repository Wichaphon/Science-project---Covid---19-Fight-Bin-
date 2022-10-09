//second run  (code2)
#include <Servo.h>


Servo myservo;

const int sensorIR = 10;
const int servoPin = 9 ;
int sensorIR_State = 0;
int cnt_1 = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Hello deekub Wichaphon"); //check
  myservo.attach(servoPin);
  pinMode(sensorIR, INPUT);
  pinMode(servoPin, OUTPUT);
}

void loop() {
  sensorIR_State = digitalRead(sensorIR);
  if (sensorIR_State == HIGH) {
    myservo.write(90);
    delay(2000);
    cnt_1 = 0;
  } 
  else if (sensorIR_State == LOW)
  {
    myservo.write(0);
    cnt_1 ++ ;
    Serial.print("Sensor Active : ");
    Serial.println(cnt_1);

  }
}