# Connected Agriculture

*Improving agricultural efficiency with IoT technology*

## Introduction

There is a rapid development in technology which is influencing human life in several aspects due to rapid development in different fields, but we still need to adopt that technology such that we can make human life easier to live. In our country, while farming, the farmers don't know if the field has sufficient water or if the soil quality is good/bad, etc. until and unless they go and manually check the field for the status of the field and crop, making it more time-consuming. Sometimes they miss turning on the pumps, adding fertilizer, or releasing excess water from the field on time, which leads to less productivity.

## Objective

The project uses a range of sensors, including humidity and water sensors, and a fire sensor to detect any potential fires in the field. Additionally, our project incorporates a relay module to operate a motor, which will automatically start pumping water into the field when the water level goes low. With this technology, farmers can easily monitor soil moisture levels and water levels while also ensuring their fields are safe from potential fires. Our project is an innovative solution that helps to improve agricultural efficiency, reduce water waste, and increase crop yields, while also providing a more sustainable and safer farming environment, making farming and agriculture processes easier and more efficient.

## Components

### NodeMCU (ESP8266) Development Board:
The NodeMCU is a versatile development board based on the ESP8266 microcontroller. It offers built-in Wi-Fi capabilities, making it ideal for IoT applications. The NodeMCU can be programmed using Arduino IDE, Lua scripts, or other programming languages compatible with the ESP8266 platform. In the connected agriculture project, the NodeMCU acts as the brain of the system, collecting data from various sensors, including the gas sensor, and controlling the relay module to manage water supply. Its connectivity features enable it to send data to a remote server or cloud for monitoring and analysis.

### MQ-3 Gas Sensor:
The gas sensor is used to detect the presence of specific gases in the environment. In the context of connected agriculture, gas sensors can be employed to monitor various gases that may affect crop health or pose risks to the farming environment. For example, certain gases may be released during chemical fertilization or pesticide usage, and their levels need to be monitored to ensure safety. Additionally, gas sensors can help detect harmful gases, such as methane or ammonia, which might indicate issues with soil health or livestock management. By integrating gas sensors with the NodeMCU, farmers can receive real-time alerts or notifications when gas levels exceed safe thresholds, enabling timely action to address potential issues.

### Soil Moisture Sensor:
The soil moisture sensor is used to measure the level of moisture or water content in the soil. It helps to determine whether the soil has enough water for the plants or if it requires irrigation. By monitoring the soil moisture, farmers can optimize irrigation schedules and prevent overwatering or underwatering, leading to better crop yield and water conservation.

### Water Level Sensor:
The water level sensor is designed to measure the level of water in a container or reservoir. In the context of connected agriculture, it can be used to monitor the water level in irrigation tanks or channels. When the water level goes below a certain threshold, it triggers an action to pump water into the fields, ensuring a steady water supply for crops.

### Fire Sensor:
The fire sensor is a device that detects the presence of fire or smoke in the vicinity. It plays a crucial role in ensuring the safety of the farm by detecting potential fires early on. In agricultural settings, fires can cause extensive damage to crops and property. When the fire sensor detects smoke or fire, it can activate an alarm or notify the farmer, enabling swift action to prevent or control the fire.

### Relay Module:
The relay module is an electronic switch that allows low-power devices (like microcontrollers) to control high-power devices (like motors or pumps). In the connected agriculture project, the relay module is used to control the water pump. When the water level sensor indicates a low water level, the relay module is triggered to turn on the pump automatically. This automation ensures efficient water management and reduces the burden on farmers to manually control the pump.


## Getting Started

To get started with the project, follow the steps below:

### Sensor Calibration:
1. To calibrate the YL-69 soil moisture sensor, we need to follow these steps:
2. Collect a sample of soil from the area where the sensor will be used.
3. Spread the soil out and let it dry completely.
4. Weigh the dry soil sample and record the weight.
5. Fully saturate the soil with water and let it sit for a few hours to allow the water to distribute evenly.
6. Remove excess water from the surface of the soil and weigh the soil again.
7. Record the weight of the fully saturated soil.
8. Calculate the moisture content of the soil using the following formula:
9. Moisture Content = ((Wet Weight - Dry Weight) / Dry Weight) x 100%
10. Adjust the calibration factor in the code to match the calculated moisture content.
11. Test the sensor by taking readings from dry soil, moist soil, and fully saturated soil to ensure that the readings are accurate and consistent. Adjust the calibration factor as necessary.

### Programming Code:
The code for this project is written using the Arduino IDE and Blynk IoT app. 
      Follow these steps to program the Node-MCU:
1. Open the Arduino IDE and install the Blynk library.
2. Connect the Node-MCU to your computer using the USB cable.3. Open the Blynk app and create a new project.
4. Add the required widgets to the app, such as the gauge widget for displaying the temperature and humidity, the level widget for the soil moisture, and the value display widget for the rain sensor.
5. Obtain the authentication token from the app and insert it in the code.
6. Connect the DHT11 sensor to the D5 pin of the Node-MCU, the YL-69 sensor to the A0 pin, and the rain sensor to the D0 pin.
7. Upload the code to the Node-MCU using the Arduino IDE.
8. Test the system by placing the sensors in the appropriate locations and checking that the readings are displayed correctly in the app.
9. Note: The code can be modified to add additional functionality, such as turning on a pump when the soil moisture is low or sending alerts when the rain sensor detects rainfall.

### Software Requirements:
•Arduino IDE
•Blynk app
•Blynk library for Arduino IDE
•Adafruit Unified Sensor library
•DHT library for Arduino
•PubSubClient library
•WiFi.h library

### Methodology:
- First, the hardware setup is done by connecting the Node-MCU board with all the sensors
and relay module using jumper wires and breadboard as per the circuit diagram.
- Next, the Arduino IDE is installed on the computer and the required libraries are added to it.
- Then, the code is written in Arduino IDE by including the necessary libraries and setting up the Blynk connection with the Node-MCU using Wi-Fi credentials.
- The code is divided into different sections to handle each sensor's data separately and display it in the Blynk app.➢ For the DHT11 sensor, the code reads temperature and humidity values and sends them to the Blynk app.
- For the YL-69 soil moisture sensor, the code reads the analog values of the sensor, converts it into percentage, and sends it to the Blynk app. It also checks if the soil moisture level is below a threshold value (38%) and turns on the relay module to water the plants automatically.
- For the rain sensor, the code reads the digital value of the sensor and sends it to the Blynk app. It also checks if the sensor value is low, indicating rain, and sends a notification to the Blynk app.
- For the MQ-3 alcohol gas sensor, the code reads the analog values of the sensor, converts it into PPM, and sends it to the Blynk app.
- Finally, the code is uploaded to the Node-MCU board using the Arduino IDE and the Blynk app is used to create a dashboard to display the sensor data.


To Clone the repository:

```bash
git clone https://github.com/Gouenjixx/Connected-Agriculture.git
cd connected-agriculture
