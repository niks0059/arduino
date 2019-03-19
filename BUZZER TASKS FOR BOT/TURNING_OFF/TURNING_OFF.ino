//program for ROBOT GOING TURNING OFF.

void setup()
{

}

void loop() 
{

  tone(4, 6794, 400);      //can increase or decrease intensity bassed onn 2nd argumnt. 594
  delay(500);

  tone(4, 8794, 400);      //can increase or decrease intensity bassed onn 2nd argumnt. 594
  delay(500);

  tone(4, 39794, 400);      //can increase or decrease intensity bassed onn 2nd argumnt. 594
  delay(500);

 tone(4, 39794, 400);      //can increase or decrease intensity bassed onn 2nd argumnt. 594
  delay(500);
 
  tone(4, 120694, 400);      //repeating same tone after delay.
  delay(3000);
  
  noTone(4);                 // turn off tone function for pin 4:
 
}
