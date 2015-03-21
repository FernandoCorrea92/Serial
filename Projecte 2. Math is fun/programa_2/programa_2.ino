 /*************************************************************************
 **                                                                      **
 **    Càlcul de la hipotenusa                                           **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************
  int a = 3;   // Definir variable "a" donant-l'hi un valor
  int b = 4;  // Definir variable "b" donant-l'hi un valor
  int h;     // Definir variable "h"
 

 //******  Setup  *********************************************************
 void setup () {
   Serial.begin(9600);                               // Obre el port sèrie a 9600 bps
   Serial.println("Lets calculate a hypoteneuse");  // Imprimeix per pantalla les dades
   Serial.print("a = ");                           // Imprimeix per pantalla les dades en una nova línia
   Serial.println(a);                             // Mostar valor de la variable "a" definit
   Serial.print("b = ");                         // Imprimeix per pantalla les dades en una nova línia
   Serial.println(b);                           // Mostar valor de la variable "b" definit
   
   h = sqrt(a*a + b*b);                       // Càlcul de la hipotenusa (sqrt = arrel quadrada)
 
 Serial.print("h = ");                      // Imprimeix per pantalla les dades en una nova línia
 Serial.println(h);                        // Mostar valor de la hipotenusa calculada
   
  }


 //******  Loop  **********************************************************
 void loop () {
  
 }
