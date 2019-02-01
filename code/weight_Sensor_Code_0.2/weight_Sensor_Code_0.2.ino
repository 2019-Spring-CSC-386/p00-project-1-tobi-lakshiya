int buzzer = 7;
int fsrPin = A2;
unsigned long time;
bool check = false;
int num = 0;
void setup() {
  // initialize serial communication:
  pinMode(fsrPin, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);

}

void loop() {

  int fsrVal = analogRead(fsrPin);
  time = millis();
  Serial.print(fsrVal);
  Serial.print('\n');
    if ((time >= num + 5000) && (fsrVal > 100) && (check == false)) {
    tone (buzzer, 500);
    check = true;
    }

    // if weight sesnor is pressed it will read 0
    if ((fsrVal == 0) && (check == true)) {
      num = millis(); //increases the num count
      noTone (buzzer);// stops buzzer
      check = false;
    }
  }
