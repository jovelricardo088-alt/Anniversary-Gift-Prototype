#include<LiquidCrystal.h>


LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int buttonpin = 9;
int val = 0, led_num = 0;
void setup()
{
 pinMode(9,INPUT);
}


void loop()
{
   val = digitalRead(9);
   
  if (val == 1) {
    led_num = led_num + 1;
  }
  if(led_num == 1) {
lcd.begin(16, 2);
  }
 
  else if (led_num == 2) {
 
  lcd.clear();
  lcd.setCursor(2, 0);
  lcd.print( " Kim");
  lcd. setCursor(2,1);
  lcd.print("Happy Anniversary");
}
else if (led_num == 3) {
  lcd.clear();
  lcd.setCursor(2,0);
  lcd.print("I Love");
  lcd.setCursor(2,1);
  lcd.print("You");
}
else if (led_num == 4) {
  lcd.clear();
  lcd.setCursor(2,0);
  lcd.print("My");
  lcd.setCursor(2,1);
  lcd.print("beloved");
}
  else if (led_num == 5) {
    lcd.clear();
    lcd.noDisplay();
}


delay(300);
}
