 /*************************************************************************
 **                                                                      **
 **   suma 1 a una variable int amb el seu màxim valor                   **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************
 int test = 32767; //definir la variable "test" a 32767


 //******  Setup  *********************************************************
 void setup () {
  Serial.begin(9600);                // Obre el port sèrie a 9600 bps
  Serial.print("Test value is: ");  // Imprimeix per pantalla les dades
  Serial.println(test);            // Mostar valor de la variable "test" definit

  test = test + 1;                // càlcul de sumar 1 a la variable
 
  Serial.print("Now it is ");  // Imprimeix per pantalla les dades
  Serial.println(test);        // Mostar el resultat del càlcul
                               // Com és una variable int i el seu número màxim és de 32767, quan se li suma un número
                               // apareix el número més baix, el -32768

 }


 //******  Loop  **********************************************************
 void loop () {
  
 }
