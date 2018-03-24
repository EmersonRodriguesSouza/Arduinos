#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
	//Revert commit e atualização da descrição
	lcd.begin();

	
	lcd.backlight();
  lcd.setCursor(3,0);
	lcd.print("Hello");
  lcd.setCursor(0,1);
  lcd.print("Word!!!");
}

void loop()
{
	
}
