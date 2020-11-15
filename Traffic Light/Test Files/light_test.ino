//the following are each light as it matches each pin on the board
int red = A0;
int yellow = A1;
int green = A2;


void setup() {
  // put your setup code here, to run once:
  //this sets up each pin to outputs
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  // high means send a single, low means dont send the single
  digitalWrite(red,LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(green,HIGH);
  // this delay is a pause
  delay(2000);

  digitalWrite(red,LOW);
  digitalWrite(yellow,HIGH);
  digitalWrite(green,LOW);
  delay(2000);

  digitalWrite(red,HIGH);
  digitalWrite(yellow,LOW);
  digitalWrite(green,LOW);
  delay(2000);


}
