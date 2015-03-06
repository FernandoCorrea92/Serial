 /*************************************************************************
 **                                                                      **
 **    Descripició del programa                                          **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************
 int tempAigua = 101;

 //******  Setup  *********************************************************
 void setup () {
 Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( tempAigua < 90)
  {
    Serial.println("Aigua encara no bull.");
  } 
 else if ( tempAigua >= 90 && tempAigua <100)
  {
   Serial.println("Aigua a punt de bullir.");
  }
  
 else if ( tempAigua == 100)
  {
    Serial.println("Aigua a 100C.");
  }
 
  else if (tempAigua > 100)
  {
    Serial.println("Aigua bullint!");
  }
 }


 //******  Loop  **********************************************************
 void loop () {
  
 }
