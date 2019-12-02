
/* Programmer: Jeremiah
 * Date: 11.6.19
 * Program: Blank
 * 
 * This program will turn on an LED for a specified amounts of time, turn it
 * off, and back on in a While Loop
 *
Merged 12/2/19
 * Programmer: Jeremiah
 * Date: 11.14.19
 * Program: digitalRead() & the Serial Port
 * 
 * Reads a digital input on pin 2, prints the result to the serial monitor 
 */

//initialize our led to Pin 13
int led = 13;

//digital pin2 has a push button attached to it
int PushButton = 3;

void setup() {
  // Using the Funtion pinMode to call the varible led and provide Output
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
  delay(1500);
  digitalWrite(led, LOW);
  delay(500);

   // read the input pin
 int buttonState = digitalRead(PushButton);
 //print out the state of the button 
 Serial.println(buttonState);
 delay(250); //delay in between readings for stability
}
