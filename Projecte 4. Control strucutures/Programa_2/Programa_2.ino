 /*************************************************************************
 **                                                                      **
 **    Descripició del programa                                          **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************
 int tempAigua = 100;

 //******  Setup  *********************************************************
 void setup () {
 Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( tempAigua >= 100)
  {
    Serial.print("Aigua supera els 100C, esta bullint!");
  } 
 else
 
  {
   Serial.print("Aigua encara no bull.");
  }
 }


 //******  Loop  **********************************************************
 void loop () {
  
 }