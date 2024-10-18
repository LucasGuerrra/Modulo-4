int azulPin = 9;
int vermPin = 8;
int verdPin = 7;

void setup() {
  pinMode(azulPin, OUTPUT);
  pinMode(vermPin, OUTPUT);
  pinMode(verdPin, OUTPUT);
}

void loop() {
  digitalWrite(azulPin, HIGH);
  delay(450);
  digitalWrite(vermPin, HIGH);
  delay(450);
  digitalWrite(verdPin, HIGH);
  delay(450);
  digitalWrite(azulPin, LOW);
  digitalWrite(vermPin, LOW);
  digitalWrite(verdPin, LOW);
  delay(450);
}
