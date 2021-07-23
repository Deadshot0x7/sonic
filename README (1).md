
![Logo](https://dev-to-uploads.s3.amazonaws.com/uploads/articles/th5xamgrr6se0x5ro4g6.png)

    
# Sonic 
An Arduino Libary for  Ultrasinic Module that  help to find the value in three different things 
1. Centimeters
2. Inches
3. foot
And has Serial Monitor to display the things  distance covered by the Echopin in the respectivey Units 

## Screenshots

![App Screenshot](https://via.placeholder.com/468x300?text=App+Screenshot+Here)

  
## Installation

```batch

    
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


  



## License
[GPL](https://choosealicense.com/licenses/gpl-3.0/)
https://img.shields.io/badge/GPL-If%20%20have%20done%20any%20contribuation%20and%20%20uplaoded%20it%20.%20please%20give%20the%20credit%20-blue
  
## 🔗 Links
[![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/)
[![twitter](https://img.shields.io/badge/twitter-1DA1F2?style=for-the-badge&logo=twitter&logoColor=white)](https://twitter.com/)
[![license ](https://img.shields.io/badge/GPL-If%20%20have%20done%20any%20contribuation%20and%20%20uplaoded%20it%20.%20please%20give%20the%20credit%20-blue)]
  