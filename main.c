#include <LiquidCrystal_I2C.h>
#include <Wire.h> 

LiquidCrystal_I2C lcd(0x3F,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display

const int sensorPin = A0; // Pin del sensor de temperatura LM35 conectado a A0

void setup() {
  lcd.begin(16, 2);  // Inicializa el LCD con 16 columnas y 2 filas
}

void loop()
{
  int sensorValue = analogRead(sensorPin); // Lee el valor del sensor LM35
  float temperatureC = ((sensor * 5.0)/1024)/100; // Convierte el valor a temperatura en grados Celsius
  lcd.clear(); // Borra el contenido anterior del LCD
  lcd.setCursor(0, 0); // Posiciona el cursor en la primera fila, primera columna
  lcd.print("Temperatura: "); // Muestra el texto "Temperatura: " en el LCD
  lcd.setCursor(0,1); // Posiciona el cursor en la segunda fila, primera columna
  lcd.print(temperatureC);// Muestra la temperatura en el LCD
  lcd.print(" C");  // Muestra el símbolo de grados Celsius en el LCD
  delay (1000);  // Espera 1 segundo antes de volver a leer el sensor
}//fue hecho atravez de arduino
