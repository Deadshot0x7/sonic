
![Logo](banner.png)

    
# Sonic 
An Arduino Libary for  Ultrasinic Module that  help to find the value in three different things 
1. Centimeters
2. Inches
3. foot
And has Serial Monitor to display the things  distance covered by the Echopin in the respectivey Units 

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

  
