 /*************************************************************************
 **                                                                      **
 **    Descripició del programa                                          **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************
float Indicador = 43.2;

 //******  Setup  *********************************************************
 void setup () {
 Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( Indicador < 3.5)
  {
    Serial.println("Qualificacio energetica: A");
  } 
 if ( Indicador >= 3.5 && Indicador < 6.5)
  {
   Serial.println("Qualificacio energetica: B");
  }
  
  if ( Indicador >= 6.5 && Indicador < 11.1)
  {
    Serial.println("Qualificacio energetica: C");
  }
 
  if ( Indicador >= 11.1 && Indicador < 17.7)
  {
    Serial.println("Qualificacio energetica: D");
  }
 
  if ( Indicador >= 17.7 && Indicador < 38.2)
  {
    Serial.println("Qualificacio energetica: E");
  }
  
  if ( Indicador >= 38.2 && Indicador < 43.2)
  {
    Serial.println("Qualificacio energetica: F");
  }
  
  if ( Indicador >= 43.2)
  {
    Serial.println("Qualificacio energetica: G");
  }
 }


 //******  Loop  **********************************************************
 void loop () {
  
 }
