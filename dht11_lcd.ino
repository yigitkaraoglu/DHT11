#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#include <dht11.h>

LiquidCrystal_I2C lcd(0x27,16,2); 

#define DHT11_pin 2
dht11 DHT11_sensor; 

void setup(){
  
lcd.begin();

}
void loop(){

   int chk = DHT11_sensor.read(DHT11_pin);
   lcd.clear();
   lcd.setCursor(0,0);
   lcd.print("Nem Orani:");
   lcd.setCursor(10,0);
   lcd.print((float)DHT11_sensor.humidity, 2);  
   lcd.setCursor(0,1);
   lcd.print("Sicaklik:");
   lcd.setCursor(9,1);
   lcd.print((float)DHT11_sensor.temperature, 2);   
 
   delay(1000);
}
