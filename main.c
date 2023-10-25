#include <LiquidCrystal.h> 

LiquidCrystal lcd(2,3,9,10,11,12);
int sensor;
float temperatura;
void setup() {
  lcd.begin(16,2);   //indicamos el tamaño de la pantalla
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
