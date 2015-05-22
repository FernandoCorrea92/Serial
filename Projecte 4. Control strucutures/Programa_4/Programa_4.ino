 /*************************************************************************
 **                                                                      **
 **    Missatges diferents depenent del valor de la variable             **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************
float Indicador = 43.2;  //definir la variable "indicador" a 43.2

 //******  Setup  *********************************************************
 void setup () {
 Serial.begin(9600);     // Obre el port sèrie a 9600 bps

  if ( Indicador < 3.5)
  {
    Serial.println("Qualificacio energetica: A");  // Imprimeix per pantalla les dades
  } 
 if ( Indicador >= 3.5 && Indicador < 6.5)    // Condició de que si la variable és mes gran o igual a 3,5 i més petita de 6,5
  {
   Serial.println("Qualificacio energetica: B");  // Imprimeix per pantalla les dades
  }
  
  if ( Indicador >= 6.5 && Indicador < 11.1)  // Condició de que si la variable és mes gran o igual a 6,5 i més petita de 11,1
  {
    Serial.println("Qualificacio energetica: C");  // Imprimeix per pantalla les dades
  }
 
  if ( Indicador >= 11.1 && Indicador < 17.7)  // Condició de que si la variable és mes gran o igual a 11,1 i més petita de 17,7
  {
    Serial.println("Qualificacio energetica: D");  // Imprimeix per pantalla les dades
  }
 
  if ( Indicador >= 17.7 && Indicador < 38.2)  // Condició de que si la variable és mes gran o igual a 17,7 i més petita de 38,2
  {
    Serial.println("Qualificacio energetica: E");  // Imprimeix per pantalla les dades
  }
  
  if ( Indicador >= 38.2 && Indicador < 43.2)  // Condició de que si la variable és mes gran o igual a 38,2 i més petita de 43,2
  {
    Serial.println("Qualificacio energetica: F");  // Imprimeix per pantalla les dades
  }
  
  if ( Indicador >= 43.2)  // Condició de que si la variable és mes gran o igual a 43,2
  {
    Serial.println("Qualificacio energetica: G");  // Imprimeix per pantalla les dades
  }
 }


 //******  Loop  **********************************************************
 void loop () {
  
 }
