
![Logo](banner.png)

    
# Sonic 
An Arduino Libary for  Ultrasinic Module that  help to find the value in three different things 
1. Centimeters
2. Inches
3. foot
And has Serial Monitor to display the things  distance covered by the Echopin in the respectivey Units 
# Feture's 
1. **Centimeters (cm):**
  - Description: Centimeters are a part of the metric system and are widely used for precise distance measurements. In the context of Arduino and sensors, measurements in centimeters offer high accuracy, which is essential for projects that require fine details. This unit is particularly favored in scientific and engineering applications where metric measurements are the standard.

2. **Inches (in)**:
 - Description: Inches are a key unit in the imperial system, commonly used in the United States and other countries for a variety of applications. When distance is measured in inches using an Arduino setup, it caters to projects or applications where imperial measurements are preferred or required. This can be particularly relevant in robotics, carpentry, or installations that align with U.S.-based standards.
3. **Feet (ft):**
 - Description: Feet, another imperial unit, are used for measuring larger distances. In an Arduino project, displaying distance in feet can be helpful in applications like room mapping, obstacle navigation for larger robots, or any situation where distance is more practical to express in a larger unit than inches or centimeters. It's especially useful in construction or interior design projects where measurements are commonly given in feet.
Each of these units serves a specific pu
## Usage/Examples

```c++
#include<sonic.h>
 
int trigpin=11 , echopin=12 ;
int budrate=9600;
long duration;
int distance;
void setup() 
{
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT);
Serial.begin(9600); 
}
void loop()
 {

b=cms(trigpin,echopin,9600)
println(b)

}

```
  



## License
[GPL](https://choosealicense.com/licenses/gpl-3.0/)

  
## 🔗 Links
[![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/https://www.linkedin.com/in/sayyed-viquar-ahmed)
[![twitter](https://img.shields.io/badge/twitter-1DA1F2?style=for-the-badge&logo=twitter&logoColor=white)](https://twitter.com/Deadshot0x7)

  
