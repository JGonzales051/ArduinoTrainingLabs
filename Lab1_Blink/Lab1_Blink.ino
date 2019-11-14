
/* Programmer: Jeremiah
 * Date: 11.6.19
 * Program: Blank
 * 
 * This program will turn on an LED for a specified amounts of time, turn it
 * off, and back on in a While Loop
 */

//initialize our led to Pin 13
int led = 13;


void setup() {
  // Using the Funtion pinMode to call the varible led and provide Output
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
  delay(1500);
  digitalWrite(led, LOW);
  delay(500);
}
