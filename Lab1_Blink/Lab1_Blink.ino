
/* Programmer: Jeremiah
   Date: 12.3.19
   Update: 12.10.19
   Program: Potentiometer

   AnalogReadSerial
   Reads an analog input on pin A0, prints to the serial monitor

  Add serial read to be able to read voltages from 0 to 5 volts

*/

void setup() {
  //initialize the serial communication at 9600 bits per second
  Serial.begin(9600);
}

void loop() {
  // read the input on analog pin 0
  int potentiometerValue = analogRead(A0);

  //convert the analog read from 0 - 1023 to 0 - 5volts
  float voltage = potentiometerValue * (5.0 / 1023);

  //print the value of our potentiometer
  Serial.println(voltage);

  //add a delay for stabuility
  ; delay(1);


}
