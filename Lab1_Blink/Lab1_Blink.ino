
/* Programmer: Jeremiah
 * Date: 11.6.19
 * Program: Blank
 * 
 * This program will turn on an LED for a specified amounts of time, turn it
 * off, and back on in a While Loop
 * 
 * Update: 11.22.19
 * Program: Update blink to allow my LED to fade.
 */

//initialize our led to Pin 9
int led = 9;  //the pin that the LED is in on the Arduino board
int brightness = 0; //how bright the LED is
int fadeAmount = 5; //how many points to fade the LED

void setup() {
  // Using the Funtion pinMode to call the varible led and provide Output
  pinMode(led, OUTPUT);
}

void loop() {
  // set the brightnes of pin9 (LED)
  analogWrite(led, brightness);

  //change the brightness for the next time through the loop
  brightness = brightness + fadeAmount;

  //reverse the direction of the fading at the end of the fade
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount;
  }
  delay(30);
  
}
