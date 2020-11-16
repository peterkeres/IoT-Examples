// code for lab_02 of computer architecture
// this will allow us to see all the 'states' of the clock SR flip flop model 
// sep 9 2019

// the folowing are each light as it matches each pin on the board
#define SET   7 // GREEN
#define RESET 8 // RED
#define CLOCK 9 // YELLOW



void setup() {
  // put your setup code here, to run once:

  // set up each of the pins for output mode
  pinMode(SET,OUTPUT);
  pinMode(RESET,OUTPUT);
  pinMode(CLOCK,OUTPUT);


  //light test for 5 sec to show start of program
  digitalWrite(SET, HIGH);
  digitalWrite(RESET, HIGH);
  digitalWrite(CLOCK, HIGH);
  delay(5000);
  
  digitalWrite(SET, LOW);
  digitalWrite(RESET, LOW);
  digitalWrite(CLOCK, LOW);
  delay(2000);

  
}

void loop() {
  // put your main code here, to run repeatedly

  // the following will loop thought 4 sets of tests folowed by a 3 sec break between each test
  // only SET single is on/ SET and CLOCK is on/ only RESET is on/ RESET and CLOCK are on
  
  setOnly();
  delay(3000);

  setNclock();
  delay(3000);

  resetOnly();
  delay(3000);

  resetNclock();
  delay(3000);

}


// only the 'set' single is on/high
void setOnly (){
  
  digitalWrite(SET, HIGH);
  digitalWrite(RESET, LOW);
  digitalWrite(CLOCK, LOW); 
}


// only the 'set' and 'clock' single is on/high
void setNclock (){
  
  digitalWrite(SET, HIGH);
  digitalWrite(RESET, LOW);
  digitalWrite(CLOCK, HIGH); 
}


// only the 'reset' single is on/high
void resetOnly (){
  
  digitalWrite(SET, LOW);
  digitalWrite(RESET, HIGH);
  digitalWrite(CLOCK, LOW); 
}


// only the 'reset' and 'clock' single is on/high
void resetNclock (){
  
  digitalWrite(SET, LOW);
  digitalWrite(RESET, HIGH);
  digitalWrite(CLOCK, HIGH); 
}
