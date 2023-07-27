#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(32, 16, 2);
int force=0;
void setup()
{
   
}

void loop()
{
  force=analogRead(14);
 lcd.init();
lcd.backlight();
lcd.print("Reading=");
  lcd.print(force);
 delay(50);
  
}
