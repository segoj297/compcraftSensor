int sensorPin = A0;    // select the input pin for the sensor
int ledBlue = 9;     // select the pin for the LED
int ledWhite = 10; //added white LED to the sketch
int ledYellow = 2; //added yellow LED to the sketch

int blueVal = 0;  // value of blue LED
int whiteVal = 0; //value of white LED
int yellowVal = 0; //value of yellow LED

void setup() {
  pinMode(ledBlue, OUTPUT);
  pinMode(ledWhite, OUTPUT);  //adding this to the sketch
  pinMode(ledYellow, OUTPUT); //adding this to the sketch
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  
// read the value from the sensor:
blueVal = analogRead(sensorPin); 
whiteVal = analogRead(sensorPin);
yellowVal = analogRead(sensorPin);

analogWrite(ledBlue, blueVal);
Serial.println("Off");


if (blueVal > 110) {
  analogWrite(ledWhite, whiteVal);
  Serial.println("Medium");  
  } else {
  analogWrite(ledWhite, whiteVal = 0);
  }

if (whiteVal > 140) {
  analogWrite(ledYellow, yellowVal);
  Serial.println("High");  
  } else {
  analogWrite(ledYellow, yellowVal = 0);
  }



//Print the value to the Serial monitor   
//Serial.println("Off");  
//Serial.println(whiteVal);
//Serial.println(yellowVal);

}

