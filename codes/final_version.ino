#include<LiquidCrystal.h>
#include <LedControl.h>
const int echoPin = 8;
const int trigPin = 7;
const int threshold = 5;
int DIN = 11;
int CS = 9;
int  CLK = 13;
int wait = 2000;
int wait2 = 1000;
int wait3 = 500;
int wait4  = 100;
int wait5 = 50;
LedControl lc=LedControl(DIN, CLK, CS,0);
int  sheart [8] = {B00000000,B00000000,B01100110,B01111110,B00111100,B00011000,B00000000,B00000000};
byte  bheart [8] = {B01100110,B11111111,B11111111,B11111111,B01111110,B00111100,B00011000,B00000000};
byte  eye [8] = {B00000000,B00111000,B00010000,B00010000,B00010000,B00010000,B00111000,B00000000};
byte  you [8] = {B00000000,B01000010,B01000010,B01000010,B01000010,B01000010,B00111100,B00000000};
byte  kim [8] = {B00100001,B00100010,B00100100,B00111000,B00111000,B00100100,B00100010,B00100001};
byte  arrow1 [8] = {B00000000,B00000000,B10000000,B11000000,B10000000,B00000000,B00000000,B00000000};
byte  arrow2 [8] = {B00000000,B10000000,B01000000,B11100000,B01000000,B10000000,B00000000,B00000000};
byte  arrow3 [8] = {B00000000,B01000000,B00100000,B11110000,B00100000,B01000000,B00000000,B00000000};
byte  arrow4 [8] = {B00000000,B00100000,B00010000,B11111000,B00010000,B00100000,B00000000,B00000000};
byte  arrow5 [8] = {B00000000,B00100000,B00010000,B11111000,B00010000,B00100000,B00000000,B00000000};
byte  arrow6 [8] = {B00000000,B00001000,B00000100,B11111110,B00000100,B00001000,B00000000,B00000000};
byte  arrow7 [8] = {B00000000,B00000100,B00000010,B11111111,B00000010,B00000100,B00000000,B00000000};
byte clear [8] = {B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000};

LiquidCrystal lcd(12, 10, 5, 4, 3, 2);
void setup()
{
   Serial.begin(9600);
  pinMode(echoPin,INPUT);
  pinMode(trigPin,OUTPUT);
   lc.shutdown(0,false);
  lc.setIntensity(0,0);
  lc.clearDisplay(0);
  lcd.begin(16, 2); 
}

void loop()
{
  long duration, inches, cm;

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);


  inches = microsecondsToInches(duration);
  cm = microsecondsToCentimeters(duration);

if (cm<threshold) {
 for(int i=0;i<8;i++) lc.setRow(0,i,eye[i]);
 delay(wait);
  lc.clearDisplay(0);

 for(int i=0;i<8;i++) lc.setRow(0,i,arrow1[i]);
 delay(wait4);
  lc.clearDisplay(0);

 for(int i=0;i<8;i++) lc.setRow(0,i,arrow2[i]);
 delay(wait4);
  lc.clearDisplay(0);

 for(int i=0;i<8;i++) lc.setRow(0,i,arrow3[i]);
 delay(wait4);
  lc.clearDisplay(0);

 for(int i=0;i<8;i++) lc.setRow(0,i,arrow4[i]);
 delay(wait4);
  lc.clearDisplay(0);

 for(int i=0;i<8;i++) lc.setRow(0,i,arrow5[i]);
 delay(wait4);
  lc.clearDisplay(0);

 for(int i=0;i<8;i++) lc.setRow(0,i,arrow6[i]);
 delay(wait4);
  lc.clearDisplay(0);

 for(int i=0;i<8;i++) lc.setRow(0,i,arrow7[i]);
 delay(wait4);
  lc.clearDisplay(0);

 for(int i=0;i<8;i++) lc.setRow(0,i,bheart[i]);
 delay(wait3);
  lc.clearDisplay(0);
 
 for(int i=0;i<8;i++) lc.setRow(0,i,sheart[i]);
  delay(wait3);
 lc.clearDisplay(0);

 for(int i=0;i<8;i++) lc.setRow(0,i,bheart[i]);
  delay(wait3);
 lc.clearDisplay(0);
 
 for(int i=0;i<8;i++) lc.setRow(0,i,sheart[i]);
  delay(wait3);
 lc.clearDisplay(0);

 for(int i=0;i<8;i++) lc.setRow(0,i,you[i]);
  delay(wait);
 lc.clearDisplay(0);

 for(int i=0;i<8;i++) lc.setRow(0,i,kim[i]);
  delay(wait);
 lc.clearDisplay(0);





   lcd.clear();
 lcd.setCursor(2, 0);
  lcd.print( " Hi");
  lcd. setCursor(2,1);
  lcd.print("Kim");
  delay(2000);


 lcd.clear();
  lcd.setCursor(2,0);
  lcd.print("Happy");
  lcd.setCursor(2,1);
  lcd.print("Anniversary");
  delay(3000);


   lcd.clear();
  lcd.setCursor(2,0);
  lcd.print("Thank");
  lcd.setCursor(2,1);
  lcd.print("You");
  delay(3000);


  lcd.clear();
  lcd.setCursor(2,0);
  lcd.print("for");
  lcd.setCursor(2,1);
  lcd.print("making me");
  delay(3000);


   lcd.clear();
  lcd.setCursor(2,0);
  lcd.print("A Happy");
  lcd.setCursor(2,1);
  lcd.print("man");
  delay(3000);


   lcd.clear();
  lcd.setCursor(2,0);
  lcd.print("I couldn't");
  lcd.setCursor(2,1);
  lcd.print("ask for");
  delay(3000);


  lcd.clear();
  lcd.setCursor(2,0);
  lcd.print("someone");
  lcd.setCursor(2,1);
  lcd.print("better");
  delay(3000);
}
 else {
   lc.clearDisplay(0);
  lcd.clear();
 }
Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();

  delay(100);
}

long microsecondsToInches(long microseconds) {

  return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds) {

  return microseconds / 29 / 2;
}


