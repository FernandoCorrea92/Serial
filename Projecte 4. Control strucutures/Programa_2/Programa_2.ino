 /*************************************************************************
 **                                                                      **
 **    Mostrar un missateg o un altre depenent del valor de la variable  **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************
 int tempAigua = 100; //definir la variable "tempAigua" a 100

 //******  Setup  *********************************************************
 void setup () {
 Serial.begin(9600);     // Obre el port sèrie a 9600 bps

  if ( tempAigua >= 100) // Condició de que quan tempAigua sigui major o igual de 100
  {
    Serial.print("Aigua supera els 100C, esta bullint!");  // Imprimeix per pantalla les dades
  } 
 else                  // Condició contrari (sinó)
 
  {
   Serial.print("Aigua encara no bull.");  // Imprimeix per pantalla les dades
  }
 }


 //******  Loop  **********************************************************
 void loop () {
  
 }
