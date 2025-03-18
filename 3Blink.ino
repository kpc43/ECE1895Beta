// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(17, OUTPUT);  // A3 as output
  pinMode(18, OUTPUT);  // A4 as output
  pinMode(19, OUTPUT);  // A5 as output
  pinMode(9, INPUT);    // Digital pin 9 as input for the button
}

// the loop function runs over and over again forever
void loop() {
  // Check if the button at pin 9 is pressed
  if (digitalRead(9) == HIGH) {
    digitalWrite(17, HIGH);  // Turn on LED at A3
    delay(500);              
    digitalWrite(17, LOW);   // Turn off LED at A3
    delay(500);              
    
    digitalWrite(18, HIGH);  // Turn on LED at A4
    delay(500);              
    digitalWrite(18, LOW);   // Turn off LED at A4
    delay(500);              
    
    digitalWrite(19, HIGH);  // Turn on LED at A5
    delay(500);              
    digitalWrite(19, LOW);   // Turn off LED at A5
    delay(500);  
  } 
  else {
    // Ensure all LEDs are off if the button is not pressed
    digitalWrite(17, LOW);
    digitalWrite(18, LOW);
    digitalWrite(19, LOW);
  }
}
//MY NAME IS KEVIN 
//MY NAME IS AARON
//MY NAME IS CHASE
