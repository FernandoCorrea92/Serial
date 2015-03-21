 /*************************************************************************
 **                                                                      **
 **    Suma, resta, multiplicació, divisió i residu de 3 variables       **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************
int a = 5;  //Definir dada a donant-l'hi un valor
int b = 10; //Definir dada b donant-l'hi un valor
int c = 20; //Definir dada c donant-l'hi un valor

 //******  Setup  *********************************************************
 void setup () {
  Serial.begin(9600); // Obre el port sèrie a 9600 bps
 
  Serial.println("Here is some math: "); // Imprimeix per pantalla les dades 
  
  Serial.print("a = ");        // Imprimeix per pantalla les dades en una nova línia
  Serial.println(a);          // Mostra el valor de la variable "a" definida
  Serial.print("b = ");      // Imprimeix per pantalla les dades en una nova línia
  Serial.println(b);        // Mostra el valor de la variable "b" definida
  Serial.print("c = ");    // Imprimeix per pantalla les dades en una nova línia
  Serial.println(c);      // Mostra el valor de la variable "c" definida
  
  Serial.print("a + b = ");      // Mostra per pantalla les dades en una nova línia
  Serial.println(a + b);        // Mostra per pantalla el resltat de la suma de les variables "a" i "b"
 
  Serial.print("a * c = ");    // Mostra per pantalla les dades en una nova línia
  Serial.println(a * c);    // Mostra el resultat de la multiplicació de les variables "a" i "c"
  
  Serial.print("c / b = ");    // Mostra per pantalla les dades en una nova línia
  Serial.println(c / b);      // Mostra el resultat de la divisió de les variables "c" partit "b"

  Serial.print("c % b = ");    // Mostra per pantalla les dades en una nova línia
  Serial.println(c % b);      // Mostra el residu de la divisió de les variables "c" partit "b"
  
  Serial.print("b - c = ");    // Mostra per pantalla les dades en una nova línia
  Serial.println(b - c);      // Mostra el resultat de la resta de les variables "b" menys "c"
  
  
  
 }


 //******  Loop  **********************************************************
 void loop () {
  
 }
