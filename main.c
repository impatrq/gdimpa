#include <LiquidCrystal_I2C.h>
#include <Wire.h> 

LiquidCrystal_I2C lcd(0x27,20,4); 
int sensor;
float temperatura;
void setup() {
  lcd.begin(16, 2);  // Inicializa el LCD con 16 columnas y 2 filas
}

void loop()
{
  lcd.clear();
  lcd.print("Temp =");
  sensor = analogRead(A0); //leemos el valor del sensor del pin A0
  temperatura = ((sensor * 5000.0)/1023)/10; //Formula para saber temp. con voltaje y el sensor
  lcd.setCursor(0,1);
  lcd.print(temperatura);
  delay (1000);
}//fue hecho atravez de arduino
