/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

#include <LiquidCrystal.h>
LiquidCrystal lcd(8,7,6,5,4,3);
int micIN = 2;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12,OUTPUT);  // red 13
  pinMode(8,OUTPUT);  // yellow 12
  pinMode(11,OUTPUT); // green 11 
  

  
  lcd.begin(16,2);
  lcd.print("INIT");
  lcd.setCursor(0,1);
 
  
  
  
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(13, HIGH);  //red
  
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("color: ");
  lcd.setCursor(0,1);
  lcd.print("Red");
  
  int j = 0;

  do{
    j++;
    tone(micIN,20);
    delay(400);
    noTone(micIN);
    delay(600);
  }while(j<12);
  
  digitalWrite(8, HIGH);  //yellow

  lcd.print(" & Yellow");

  tone(micIN,20);
  delay(400);
  noTone(micIN);
  delay(600);
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11, HIGH); //green

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("color: ");
  lcd.setCursor(0,1);
  lcd.print("Green");

  int k = 0;

  do{
    k++;
    tone(micIN,20);
    delay(300);
    noTone(micIN);
    delay(300);
  }while(k<9);
  
  int i = 0;

  do{
    i++;
    tone(micIN,20);
    delay(400);
    noTone(micIN);
    delay(600);
    digitalWrite(11, LOW);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("color: ");
    lcd.setCursor(0,1);
    lcd.print("Green blinking");
    tone(micIN,20);
    delay(400);
    noTone(micIN);
    delay(600);
    digitalWrite(11, HIGH);
  }while(i<4);

  

  digitalWrite(11, LOW);

  digitalWrite(12, HIGH);

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("color: ");
  lcd.setCursor(0,1);
  lcd.print("Yellow");
  
  digitalWrite(13, HIGH);
  lcd.print(" & Red");
  
  delay(1000);
  digitalWrite(12, LOW);
  
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(600);                       // wait for a second
  
}
