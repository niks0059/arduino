//Program for menu selection sound.
void menu_sound()
{
    const int buzzer = 4; //buzzer arduino pin4
    pinMode(buzzer, OUTPUT); // Set buzzer - pin 4 as output
    tone(4,11100,18);  //break stmt should be used while using in functions
    delay(9000); 
    noTone(buzzer); 
}  

void setup()
{
     
}

void loop()
{
 
   menu_sound();
}
