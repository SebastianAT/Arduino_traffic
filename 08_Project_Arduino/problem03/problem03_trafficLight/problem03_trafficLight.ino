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

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(4,OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  
  //noTone(10);
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(12, HIGH);  //red
  /*tone(10,20);
  delay(400);
  noTone(10);
  delay(600);
  tone(10,20);
  delay(400);
  noTone(10);
  delay(600);
  tone(10,20);
  delay(400);
  noTone(10);
  delay(600);
  tone(10,20);
  delay(400);
  noTone(10);
  delay(600);
  tone(10,20);
  delay(400);
  noTone(10);
  delay(600);
  tone(10,20);
  delay(400);
  noTone(10);
  delay(600);
  tone(10,20);
  delay(400);
  noTone(10);
  delay(600);
  tone(10,20);
  delay(400);
  noTone(10);
  delay(600);
  tone(10,20);
  delay(400);
  noTone(10);
  delay(600);
  tone(10,20);
  delay(400);
  noTone(10);
  delay(600);
  tone(10,20);
  delay(400);
  noTone(10);
  delay(600);*/
  //11

  int j = 0;

  do{
    j++;
    tone(10,20);
    delay(400);
    noTone(10);
    delay(600);
  }while(j<12);
  
  digitalWrite(8, HIGH);  //yellow
  tone(10,20);
  delay(400);
  noTone(10);
  delay(600);
  //delay(1200);
  digitalWrite(12,LOW);
  digitalWrite(8,LOW);
  digitalWrite(4, HIGH); //green

  /*tone(10,20);
  delay(300);
  noTone(10);
  delay(300);
  tone(10,20);
  delay(300);
  noTone(10);
  delay(300);
  tone(10,20);
  delay(300);
  noTone(10);
  delay(300);
  tone(10,20);
  delay(300);
  noTone(10);
  delay(300);
  tone(10,20);
  delay(300);
  noTone(10);
  delay(300);
  tone(10,20);
  delay(300);
  noTone(10);
  delay(300);
  tone(10,20);
  delay(300);
  noTone(10);
  delay(300);
  tone(10,20);
  delay(300);
  noTone(10);
  delay(300);*/
  //8
  int k = 0;

  do{
    k++;
    tone(10,20);
    delay(300);
    noTone(10);
    delay(300);
  }while(k<9);
 /* tone(10,20);
  delay(300);
  noTone(10);
  delay(300);
  tone(10,20);
  delay(300);
  noTone(10);
  delay(300);
  tone(10,20);
  delay(300);
  noTone(10);
  delay(300);
  tone(10,20);
  delay(300);
  noTone(10);
  delay(300);
  tone(10,20);
  delay(300);
  noTone(10);
  delay(300);
  tone(10,20);
  delay(300);
  noTone(10);
  delay(300);
  tone(10,20);
  delay(300);
  noTone(10);
  delay(300);
  tone(10,20);
  delay(300);
  noTone(10);
  delay(300);*/
  
  //delay(5000);
  
  int i = 0;

  do{
    i++;
    tone(10,20);
    delay(400);
    noTone(10);
    delay(600);
    digitalWrite(4, LOW);
    tone(10,20);
    delay(400);
    noTone(10);
    delay(600);
    //delay(700);
    digitalWrite(4, HIGH);
    //delay(600);
  }while(i<4);
  /*digitalWrite(4, LOW);
  delay(700);
  digitalWrite(4, HIGH);
  delay(600);
  digitalWrite(4, LOW);
  delay(700);
  digitalWrite(4, HIGH);
  delay(600);
  digitalWrite(4, LOW);
  delay(700);
  digitalWrite(4, HIGH);
  delay(600);*/
  digitalWrite(4, LOW);
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
  
}
