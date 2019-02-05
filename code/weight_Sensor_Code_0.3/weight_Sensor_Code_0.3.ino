int buzzer = 7;
int fsrPin = A2;
unsigned long StartTime = millis();
unsigned long CheckTime = 5000;

void setup() {
  // initialize serial communication:
  pinMode(fsrPin, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  StartTime = millis();
  int fsrVal = analogRead(fsrPin);
  //Serial.print(fsrVal);
  //Serial.print('\n');
  //Serial.print(StartTime);
  //Serial.print("\n Check passed");
  //Serial.print(CheckTime);

    // if 5 seconds has passed and there is nothing on the weight sensor
    if ((StartTime > CheckTime) &&  (StartTime < CheckTime+3000) && (fsrVal > 100)) {
    tone (buzzer, 500);
    }

    // if weight sesnor is pressed it will read 0
    if (fsrVal == 0) {
      noTone (buzzer);// stops buzzer
      CheckTime = StartTime + 5000;
    }
  }
