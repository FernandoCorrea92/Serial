 /*************************************************************************
 **                                                                      **
 **    Mostrat text per pantalla infinites vegades un sota l'altre       **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************


 //******  Setup  *********************************************************
 void setup () {
  Serial.begin(9600);  // Obre el port sèrie a 9600 bps


 }


 //******  Loop  **********************************************************
 void loop () {
  Serial.println("Hello world!");  // imprimeix hello world un a sota de l'altre per el ln
                                  // el ln (new line) fa que el seguent text després d'ell s'escrigui a sota
                        
  delay(1000);                   // espera d'un segon per tornar a mostrar les dades
 }
