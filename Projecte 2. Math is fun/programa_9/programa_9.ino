 /*************************************************************************
 **                                                                      **
 **    Divisió nombres enters                                            **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************
int a = 3; //definir la variable "a" a 3
int b = 2; //definir la variable "b" a 2
int d;     //deifnir la variable "d"



 //******  Setup  *********************************************************
 void setup () {
  Serial.begin(9600);                     // Obre el port sèrie a 9600 bps
  Serial.println("Here is division: ");  // Imprimeix per pantalla les dades

  Serial.print("a = ");          // Imprimeix per pantalla les dades
  Serial.println(a);            // Mostar valor de la variable "a"
  Serial.print("b = ");        // Imprimeix per pantalla les dades
  Serial.println(b);          // Mostar valor de la variable "b"
  
  d = a / b;                 //càlcul
 
  Serial.print("a / b = "); // Imprimeix per pantalla les dades
  Serial.println(d);        // Mostar el valor del càlcul
 }  
 //No dona 1,5 perquè el nombres int son enters per tant no dóna decimals.

 //******  Loop  **********************************************************
 void loop () {
  
 }
