// Code for lab_01 of computer architecture
// this will act like a street, flipping lights and telling people to cross the street or not
// by: peter keres
// date: Aug 22 2019

// adds the following libary, Most are to allow to interact with the LED screen
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// sets the width and height of the screen 
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

// sets the color led lights to the pins on the board
#define RED  A0
#define YELLOW A1
#define GREEN  A2

// Declaration for an SSD1360 display
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);



void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  //this sets up each pin to outputs
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);

  // checks for error in screen set up, gets suck in a loop
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3c)){
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }

  // will show a one time system start message
  delay(2000);
  display.clearDisplay();

  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(0,10);

  display.println("SYSTEM    START");
  display.display();

  delay(5000);
  display.clearDisplay();
}



void loop() {
  // put your main code here, to run repeatedly:

  greenOn();
  delay(3000);
  yellowOn();
  delay(3000);
  redOn();
  delay(3000);
}



// turns the green light on, and puts a message on the screen
void greenOn(){
  digitalWrite(RED,LOW);
  digitalWrite(YELLOW,LOW);
  digitalWrite(GREEN,HIGH);

  display.clearDisplay();

  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,10);

  display.println("Green led is on! Pesdestrain crossing");
  display.display();
}




// turns the yellow light on, and puts a message on the screen
void yellowOn(){
  digitalWrite(RED,LOW);
  digitalWrite(YELLOW,HIGH);
  digitalWrite(GREEN,LOW);

  display.clearDisplay();

  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,10);

  display.println("Yellow led is on! be prepared");
  display.display();
}




// turns the red light on, and puts a message on the screen
void redOn(){
  digitalWrite(RED,HIGH);
  digitalWrite(YELLOW,LOW);
  digitalWrite(GREEN,LOW);

  display.clearDisplay();

  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,10);

  display.println("Red led is on! Please stop!");
  display.display();
}
