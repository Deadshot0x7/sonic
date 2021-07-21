class sonic 
{
  public:
  
  

  public:
  int a , b ,c;
  void cm( int input ,  int output, int serialno, int duration)     //caculating the disctance between the object in centimeters 
  {
      input = a;
      output = b;    
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

};
