#include <LiquidCrystal_I2C.h>
//sequência de códigos pré escritos

LiquidCrystal_I2C lcd(0x27 , 16 , 21);
//endereço do lcd, numero de coluna e de linhas

void setup(){
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0 , 0);
  lcd.print("E o narga???");
 
}

void loop(){
  
}