 /*************************************************************************
 **                                                                      **
 **    Mostar per pantalla operació a realitzar i les 3 possibles        **
 **    respostes                                                         **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************


 //******  Setup  *********************************************************
 void setup () {
  Serial.begin(9600);  // Obre el port sèrie a 9600 bps            
  Serial.println("escull el numero de l'operacio que vols realitzar?"); // Imprimeix per pantalla les dades
  Serial.println("1.comprovar numero tarjeta de credit");               // Imprimeix per pantalla les dades en una nova línia
  Serial.println("2.comprovar numero compte bancari");                  // Imprimeix per pantalla les dades en una nova línia
  Serial.println("3.buscar un digit perdut de tarjeta de credit");      // Imprimeix per pantalla les dades en una nova línia
 }


 //******  Loop  **********************************************************
 void loop () {
  
 }
