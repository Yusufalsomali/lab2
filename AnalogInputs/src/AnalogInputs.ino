/*SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
 * Project AnalogInputs
 * Description:
 * Author:
 * Date:
 */

// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.

}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  unit16_t value;
  int=analogRead(A5);
  Serial.println(value);   
Serial.begin(9600);     
  // The core of your code will likely live here.

}