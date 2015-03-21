 /*************************************************************************
 **                                                                      **
 **    Mostrat text per pantalla infinites vegades en la mateixa línea   **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************


 //******  Setup  *********************************************************
 void setup () {
  Serial.begin(9600); // Obre el port sèrie a 9600 bps


 }


 //******  Loop  **********************************************************
 void loop () {
  Serial.print("Hello world!");  // Imprimeix les dades com a text
  delay(1000);                  // Espera d'1 segon per tornar a mostar les dades
 }
