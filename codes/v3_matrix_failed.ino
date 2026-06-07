 #include<LiquidCrystal.h>
#include <LedControl.h>

LedControl lc = LedControl(13,11,9,1);

byte heart[8] = {
  B00000000,
  B01100110,
  B11111111,
  B11111111,
  B11111111,
  B01111110,
  B00111100,
  B00011000
};

byte iddle [8] = {
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000
};

LiquidCrystal lcd(12, 10, 5, 4, 3, 2);
void setup()
{
  lc.shutdown(0, false);
  lc.setIntensity(0,8);
  lc.clearDisplay(0);
 lcd.begin(16, 2); 
}

void loop()
{

  for (int row = 0; row < 8; row++) {
    lc.setRow(0, row, heart[row]);
  }
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
