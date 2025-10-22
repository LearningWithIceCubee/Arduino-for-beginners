int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  ledSeries();
  delay(500);
  ledOFF();
  delay(500);
  ledReverse();
  delay(500);
  ledOFF();
  delay(500);
  // homework for lesson
  ledSeries2();
  delay(500);
  ledOFF();
  delay(500);
  ledReverse2();
  delay(500);

}


void ledSeries(){
  digitalWrite(led1, HIGH);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led3, HIGH);
  delay(500);
  digitalWrite(led4, HIGH);
  delay(500);
  digitalWrite(led5, HIGH);
  delay(500);
  digitalWrite(led6, HIGH);
  delay(500);
}

void ledOFF(){
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
}

void ledReverse(){
  digitalWrite(led6, HIGH);
  delay(500);
  digitalWrite(led5, HIGH);
  delay(500);
  digitalWrite(led4, HIGH);
  delay(500);
  digitalWrite(led3, HIGH);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led1, HIGH);
  delay(500);
}

// homework for lesson
void ledSeries2(){
  digitalWrite(led1, HIGH);
  delay(500);
  digitalWrite(led3, HIGH);
  delay(500);
  digitalWrite(led5, HIGH);
  delay(500);
}

void ledReverse2(){
  digitalWrite(led6, HIGH);
  delay(500);
  digitalWrite(led4, HIGH);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
}
