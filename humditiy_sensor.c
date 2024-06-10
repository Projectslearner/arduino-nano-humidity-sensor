/*
    Project name : Humidity Sensor
    Modified Date: 10-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-humidity-sensor
*/

#include <DHT.h>

#define DHTPIN 2      // Digital pin connected to the DHT sensor
#define DHTTYPE DHT11 // DHT 11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600); // Initialize serial communication
  dht.begin();        // Initialize DHT sensor
}

void loop()
{
  delay(2000); // Delay to allow sensor to stabilize
  
  // Read humidity value from sensor
  float humidity = dht.readHumidity();
  
  // Read temperature value from sensor in Celsius
  float temperature = dht.readTemperature();
  
  // Print humidity and temperature values to serial monitor
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print("%, Temperature: ");
  Serial.print(temperature);
  Serial.println("°C");
}
