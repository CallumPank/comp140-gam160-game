const int PotentiometerIn = A1;

int RawValue= 0;
float Voltage = 0;
float Resistance = 0;

int ledPin = 13;  // LED on Pin 13 of Arduino
int MotionSensorPin = 4; // Input for Motion Sensor

int MotionSensorValue; // Stores the PIR value

void setup(){  
  pinMode(PotentiometerIn, INPUT);
  Serial.begin(9600);
  
  pinMode(ledPin, OUTPUT);
  pinMode(MotionSensorPin, INPUT);

  digitalWrite(ledPin, LOW);
}

void loop(){  
 MotionSensorValue = digitalRead(MotionSensorPin);
  digitalWrite(ledPin, MotionSensorValue);

  
  RawValue = analogRead(PotentiometerIn); 
  Voltage = (RawValue * 5.0 )/ 1024.0; // Analog Digital Converter, comment where I got this from http://henrysbench.capnfatz.com/henrys-bench/arduino-sensors-and-input/robotale-slide-potentiometer-arduino-tutorial/
  
  Resistance = 5000.0 * (RawValue/1024.0); // 5000 is the resistance of the potentiometer  http://henrysbench.capnfatz.com/henrys-bench/arduino-sensors-and-input/robotale-slide-potentiometer-arduino-tutorial/
 
  String SendString;
  SendString += String (RawValue) + "," + Voltage + "," + Resistance + "," + MotionSensorValue;
  Serial.println(SendString);
}

