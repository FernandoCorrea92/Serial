 /*************************************************************************
 **                                                                      **
 **    Missatges diferents depenent del valor de la variable             **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************
 int tempAigua = 101;  //definir la variable "tempAigua" a 101

 //******  Setup  *********************************************************
 void setup () {
 Serial.begin(9600);     // Obre el port sèrie a 9600 bps

  if ( tempAigua < 90)  // Condició de que quan tempAigua sigui menor de 90
  {
    Serial.println("Aigua encara no bull.");  // Imprimeix per pantalla les dades
  } 
 else if ( tempAigua >= 90 && tempAigua <100) // Condició de que quan tempAigua més gran o igual a 90 i més petit de 100
  {
   Serial.println("Aigua a punt de bullir.");  // Imprimeix per pantalla les dades
  }
  
 else if ( tempAigua == 100)                  // Condició de que quan tempAigua sigui igual de 100
  {
    Serial.println("Aigua a 100C.");        // Imprimeix per pantalla les dades
  }
 
  else if (tempAigua > 100)                  // Condició de que quan tempAigua sigui més gran de 100
  {
    Serial.println("Aigua bullint!");      // Imprimeix per pantalla les dades
  }
 }


 //******  Loop  **********************************************************
 void loop () {
  
 }
