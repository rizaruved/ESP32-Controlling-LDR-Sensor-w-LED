//A simple program to control LED using ESP32 based on LDR sensor digital reading

//Defining the pins used for LED and LDR Sensor
#define LDRPin 12
#define LEDPin 15

//Setting things up
void setup() {
  //Initialize serial communication
  Serial.begin(115200);
  //Setting pinMode of LED pin and LDR pin
  pinMode(LDRPin, INPUT);
  pinMode(LEDPin, OUTPUT);
}

//The main program
void loop() {
  //If the digital reading of LDR is equal to zero, then:
  if(digitalRead(LDRPin) == 0) {
    //The serial monitor will print out LED OFF
    Serial.println("LED OFF");
    //LED will turned off
    digitalWrite(LEDPin, LOW);
  }
  //Else (if the digital reading of LDR is some other values (in this case 1), then:
  else {
    //The serial monitor will print out LED ON
    Serial.println("LED ON");
    //LED will turn on
    digitalWrite(LEDPin, HIGH);
  }
  //The delay between each loop cycle is 100 miliseconds
  delay(100); // this speeds up the simulation
}
