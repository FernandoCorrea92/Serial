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

  if ( tempAigua > 100)
  {
    Serial.print("Aigua supera els 100C, esta bullint!");
  } 

 }
/* Quan tempAigua sigui major de 100, a la pantalla apareixera el missatge
"Aigua supera els 100C, esta bullint!".
Mentres tempAigua sigui 100C o menys no apareixerà res a la pantalla.
Això succeix perquè només em definit que actui quan sigui un valor superior
a 100C. Si és menys no passa res.*/

 //******  Loop  **********************************************************
 void loop () {
  
 }
