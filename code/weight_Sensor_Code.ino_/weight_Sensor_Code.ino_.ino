int pingPin = 7;
int fsrPin = A0;

void setup() {
  // initialize serial communication:
  pinMode(fsrPin, INPUT);
  pinMode(pingPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int fsrVal = analogRead(fsrPin);

  if(fsrVal > 500) {
      digitalWrite(pingPin, HIGH);
      delayMicroseconds(2);
      digitalWrite(pingPin, HIGH);
  }else{
      digitalWrite(pingPin, LOW);
      delayMicroseconds(5);
      digitalWrite(pingPin, HIGH);
  }
}
