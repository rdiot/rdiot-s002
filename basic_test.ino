/* Photo Resistor Module (KY-018) [S002] : http://rdiot.tistory.com/68 [RDIoT Demo] */

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
 
LiquidCrystal_I2C lcd(0x27,20,4);  // LCD2004
 
int sensorPin1 = A0; 
int sensorPin2 = A1; //S002
 
void setup()
{
  lcd.init();  // initialize the lcd 
  lcd.backlight();
  lcd.print("start LCD2004");
}
 
void loop()
{
  int rate1 = analogRead(sensorPin1);
  int rate2 = analogRead(sensorPin2);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("[1]CDS05MM=" + (String)rate1);
  lcd.setCursor(0,1);
  lcd.print("[2]KY-018=" + (String)rate2);
 
  delay(200); 
}
