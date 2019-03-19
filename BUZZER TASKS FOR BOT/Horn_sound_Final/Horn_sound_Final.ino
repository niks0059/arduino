//program for horn sound.  
int object_detect=1;
 
void horn()
{
  tone(2, 794, 400);     
}

void setup()
{
      
}

void loop() 
{
      if(object_detect==1)
      horn();

}
