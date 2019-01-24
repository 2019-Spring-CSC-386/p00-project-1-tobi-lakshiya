int pingPin = 7;
int fsrPin = A0;

void setup() {
  // initialize serial communication:
  pinMode(fsrPin, INPUT);
  pinMode(pingPin, OUTPUT);
  Serial.begin(9600);
  time = millis();
  switch = false;
}

void loop() {
  int fsrVal = analogRead(fsrPin);
  
  if ((time >= 60000)&& (fsrVal < 500)) {
      digitalWrite(pingPin, HIGH);
      switch = true;
  if ((time >= 60000)&& (fsrVal > 500) && switch = true){
      // need to add code to reset timer here
      switch = false;
    }
  }
    
}
