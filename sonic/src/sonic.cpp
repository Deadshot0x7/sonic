#include "Arduino.h"
#include "sonic.h"

  
  
sonic::
  public:
  int a , b ,c;
  void cm( int input ,  int output, int serialno, )     //caculating the disctance between the object in centimeters 
  {
      input = a;
      output = b;    
      int duration
      serialno=c;
      digitalWrite(input,"LOW");
      duration=pulseIn(output,"HIGH");
      Serial.begin(serialno);
      
      return duration*0.034/2;
  }

  void inches( int input ,  int output, int serialno, int duration)     //caculating the disctance between the object in inches
  {
      input = a;
      output = b;    
      serialno=c;
      digitalWrite(input,"LOW");
      duration=pulseIn(output,"HIGH");
      Serial.begin(serialno);

  
      
      return duration*0.034/2;
  }

  void Serialmoni(int Serialno , int a)  // Displaying Serail Montior 
  {

    Serail.begin(serialno,s)
     int i ,s;
    Serail.begin(serialno);
    Serail.print(" ==================================");
    Serial.print("         Serial Monitor                          ");
    Serail.print(" ==================================");
  for (j=0;j<=i;i++)
  {
      Serial.print("The totla Distance is  %d",s)

  }



    
  }






