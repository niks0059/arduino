// WARNING TONE to check  the removed module.
void setup() {

}

void loop() {
 
  tone(4, 6494, 500);
  delay(500);

  // turn off tone function for pin 7:
  noTone(4);
  delay(900);
 
}
