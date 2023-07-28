#define BLYNK_TEMPLATE_ID "TMPL3AwExpzjk"
#define BLYNK_DEVICE_NAME "FarmAssist"
#define BLYNK_AUTH_TOKEN "txutjfzVlmJXP5SWUeRDhbYSIqomyQ5e"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Adafruit_Sensor.h>
#include <DHT.h>

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "POCO X3 Pro";
char pass[] = "trh970uvekxqni4f";

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <DHT.h>

#define DHTPIN D5          // DHT sensor pin
#define DHTTYPE DHT11      // DHT sensor type (DHT11 or DHT22)
#define soilSensorPin A0      // Soil moisture sensor pin

int relayPin = D0;// Set relay pin to D0
int relayState = LOW;

DHT dht(DHTPIN, DHTTYPE);

void setup()
{
  Serial.begin(9600);
  
  pinMode(relayPin, OUTPUT);  // Set relay pin as Output
  digitalWrite(relayPin,relayState); //Turn off the relay by default
  
  Blynk.begin(auth, ssid, pass);
  dht.begin();
}

void loop()
{
  // Reading humidity
  float humidity = dht.readHumidity();    
  float temperature = dht.readTemperature();  // Reading temperature in Celsius

  // Sending temperature and humidity values to Blynk app
  Blynk.virtualWrite(V4, humidity);
  Blynk.virtualWrite(V0, temperature);
  
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print("%  Temperature: ");
  Serial.print(temperature);
  Serial.println("°C");

  // Reading soil moisture
  int soilMoisture = analogRead(soilSensorPin);
  int Percent = map(soilMoisture, 1023, 0, 0, 100);
  // Sending soil moisture value to Blynk app
  Blynk.virtualWrite(V2, Percent);
  
  Serial.print("Soil Moisture: ");
  Serial.print(Percent);
  Serial.println("%");
/*
  if (Percent<20) {
    digitalWrite(relayPin, HIGH);
    relayState = HIGH;
  } else {
    digitalWrite(relayPin, LOW);
    relayState = LOW;
  }
*/
  delay(2000);  // Wait for 2 seconds before taking the next reading
  Blynk.run();
}

BLYNK_WRITE(V3)
  {
    int manualRelayState = param.asInt();
    digitalWrite(relayPin, manualRelayState);
    relayState = manualRelayState;
  }
