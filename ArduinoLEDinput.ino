int ledPin = 5;
int buttonAPin = 9;
int buttonBPin = 8;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buttonAPin, INPUT_PULLUP);
  pinMode(buttonBPin, INPUT_PULLUP);
  digitalWrite(ledPin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(buttonAPin)  == LOW){
    digitalWrite(ledPin, HIGH);
  }
  if(digitalRead(buttonBPin) == LOW){
    digitalWrite(ledPin, LOW);
  }
}
