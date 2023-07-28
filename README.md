# Connected Agriculture

*Improving agricultural efficiency with IoT technology*

## Introduction

There is a rapid development in technology which is influencing human life in several aspects due to rapid development in different fields, but we still need to adopt that technology such that we can make human life easier to live. In our country, while farming, the farmers don't know if the field has sufficient water or if the soil quality is good/bad, etc. until and unless they go and manually check the field for the status of the field and crop, making it more time-consuming. Sometimes they miss turning on the pumps, adding fertilizer, or releasing excess water from the field on time, which leads to less productivity.

## Objective

The project uses a range of sensors, including humidity and water sensors, and a fire sensor to detect any potential fires in the field. Additionally, our project incorporates a relay module to operate a motor, which will automatically start pumping water into the field when the water level goes low. With this technology, farmers can easily monitor soil moisture levels and water levels while also ensuring their fields are safe from potential fires. Our project is an innovative solution that helps to improve agricultural efficiency, reduce water waste, and increase crop yields, while also providing a more sustainable and safer farming environment, making farming and agriculture processes easier and more efficient.

## Components

### NodeMCU (ESP8266) Development Board:
The NodeMCU is a versatile development board based on the ESP8266 microcontroller. It offers built-in Wi-Fi capabilities, making it ideal for IoT applications. The NodeMCU can be programmed using Arduino IDE, Lua scripts, or other programming languages compatible with the ESP8266 platform. In the connected agriculture project, the NodeMCU acts as the brain of the system, collecting data from various sensors, including the gas sensor, and controlling the relay module to manage water supply. Its connectivity features enable it to send data to a remote server or cloud for monitoring and analysis.
![Node-Mcu](https://www.google.com/url?sa=i&url=https%3A%2F%2Fmischianti.org%2F2021%2F10%2F27%2Fnodemcu-v2-and-v2-1-high-resolution-pinout-and-specs%2F&psig=AOvVaw1KTBZJ1XAewtnoa3aLF4-9&ust=1690655721867000&source=images&cd=vfe&opi=89978449&ved=0CA4QjRxqFwoTCIDmk8KFsoADFQAAAAAdAAAAABAD)

### Gas Sensor:
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

1. Clone the repository:

```bash
git clone https://github.com/Gouenjixx/Connected-Agriculture.git
cd connected-agriculture
