#include <LiquidCrystal_I2C.h>
#include <Wire.h> 

LiquidCrystal_I2C lcd(0x3F,20,4); 

const int sensorPin = A0;

void setup() {
  lcd.begin(16, 2);  // Inicializa el LCD con 16 columnas y 2 filas
}

void loop()
{
  int sensorValue = analogRead(sensorPin);
  float temperatureC = ((sensor * 5.0)/1024)/100;
  lcd.clear();
  lcd.print("Temperatura: ");
  lcd.setCursor(0,1);
  lcd.print(temperatureC);
  delay (1000);
}//fue hecho atravez de arduino
