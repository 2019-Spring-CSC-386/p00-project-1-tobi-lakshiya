int buzzer = 7;
int fsrPin = A2;
unsigned long StartTime = millis();
unsigned long TimePassed = 0;
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
  Serial.print('\n');
  TimePassed = StartTime - TimePassed;
  Serial.print(StartTime);
  Serial.print("\n time passed");
  Serial.print(TimePassed);
 
    if (TimePassed > 5000 && (fsrVal > 100)) {
    tone (buzzer, 500);
    }

    // if weight sesnor is pressed it will read 0
    if (fsrVal == 0) {
      noTone (buzzer);// stops buzzer
      TimePassed = StartTime;
    }
  }
