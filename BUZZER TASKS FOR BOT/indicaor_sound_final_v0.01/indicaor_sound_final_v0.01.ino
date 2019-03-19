void indi()
{
 
    const int buzzerPin = 2;
    tone(buzzerPin,900);
    delayMicroseconds(20000);
    noTone(buzzerPin); 

    delay(500);  
}
void setup() {
  // put your setup code here, to run once:
  

}
                  //increase delay for indicator
void loop() {                                                       //program for turning indicators

 indi();
    
}
