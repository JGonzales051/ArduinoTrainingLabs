/* Programmer: Jeremiah
 * Date: 11.14.19
 * Program: digitalRead() & the Serial Port
 * 
 * Reads a digital input on pin 2, prints the result to the serial monitor 
 */

//digital pin2 has a push button attached to it
int PushButton = 2;

void setup() {
 //initializes serial communication at 9600 bits per second
 Serial.begin(9600);
 //make the pushButton pin an input
 pinMode(PushButton, INPUT);
  
}

void loop() {
 // read the input pin
 int buttonState = digitalRead(PushButton);
 //print out the state of the button 
 Serial.println(buttonState);
 delay(250); //delay in between readings for stability
  
}
