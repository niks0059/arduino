#include <SoftwareServo.h> 
 
SoftwareServo myservo;  

const int trigPin   =   3;
const int echoPin   =   4;

void setup() {

   myservo.attach(1); 
}

void loop(){

  long duration, inches, cm;
  
  pinMode(trigPin, OUTPUT);
  digitalWrite(trigPin, LOW);
  
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
  
  inches = microsecondsToInches(duration);
  cm = microsecondsToCentimeters(duration);
  
  if(cm < 8)
  {
    
    myservo.write(90);              
    SoftwareServo::refresh(); 
  }
  else if(cm > 10)
  {
    myservo.write(0);              
    SoftwareServo::refresh(); 
  }
  else
  {
    
  }
  
}

long microsecondsToInches(long microseconds){
  return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds){
  return microseconds / 29 / 2;
}
