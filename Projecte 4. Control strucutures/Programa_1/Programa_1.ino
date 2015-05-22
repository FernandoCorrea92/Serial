 /*************************************************************************
 **                                                                      **
 **    Mostrar per pantalla missatge quan la variable fixe la canviem    **
 **    i superi un valor concret                                         **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************
 int tempAigua = 101; //definir la variable "tempAigua" a 100

 //******  Setup  *********************************************************
 void setup () {
 Serial.begin(9600);     // Obre el port sèrie a 9600 bps

  if ( tempAigua > 100) // Condició de que quan tempAigua sigui major de 100
  {
    Serial.print("Aigua supera els 100C, esta bullint!"); // Imprimeix per pantalla les dades
  } 

}
       

 //******  Loop  **********************************************************
 void loop () {
  
 }
