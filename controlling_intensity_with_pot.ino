
const int analogPin = 0;//the analog input pin attach to

const int ledPin = 9;//the led attach to

int inputValue = 0;//variable to store the value coming from sensor

int outputValue = 0;//variable to store the output value

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  inputValue = analogRead(analogPin);
  Serial.print("Input: ");
  Serial.println(inputValue); 
  outputValue = map(inputValue, 0, 1023, 0,255); 
  Serial.print("Output: ");
  Serial.println(outputValue);
//  analogWrite(ledPin, 130);
  analogWrite(ledPin, outputValue); 
  delay(1000);
}
