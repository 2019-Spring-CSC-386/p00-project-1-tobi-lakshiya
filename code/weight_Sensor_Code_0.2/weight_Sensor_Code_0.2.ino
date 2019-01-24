int pingPin = 7;
int fsrPin = A0;

void setup() {
  // initialize serial communication:
  pinMode(fsrPin, INPUT);
  pinMode(pingPin, OUTPUT);
  Serial.begin(9600);
  time = millis()
}

void loop() {
  int fsrVal = analogRead(fsrPin);
  
  if ((time >= 60000)&& (fsrVal < 500)) {
      digitalWrite(pingPin, HIGH)
}
