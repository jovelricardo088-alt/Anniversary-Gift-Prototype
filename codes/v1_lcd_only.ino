#include<LiquidCrystal.h>


LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


void setup()
{


}


void loop()
{
 {
lcd.begin(16, 2);
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
  delay(2000);


  lcd.clear();
  lcd.setCursor(2,0);
  lcd.print("Thank");
  lcd.setCursor(2,1);
  lcd.print("You");
  delay(2000);


  lcd.clear();
  lcd.setCursor(2,0);
  lcd.print("for");
  lcd.setCursor(2,1);
  lcd.print("making me");
  delay(2000);


  lcd.clear();
  lcd.setCursor(2,0);
  lcd.print("A Happy");
  lcd.setCursor(2,1);
  lcd.print("man");
  delay(2000);


  lcd.clear();
  lcd.setCursor(2,0);
  lcd.print("I couldn't");
  lcd.setCursor(2,1);
  lcd.print("ask for");
  delay(2000);


  lcd.clear();
  lcd.setCursor(2,0);
  lcd.print("someone");
  lcd.setCursor(2,1);
  lcd.print("better");
  delay(2000);
}
 

