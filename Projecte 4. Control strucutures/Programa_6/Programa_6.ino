 /*************************************************************************
 **                                                                      **
 **    Contador de números                                               **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************
 int comptar = 11;  //definir la variable "comptar" a 11


 //******  Setup  *********************************************************
 void setup()
 {
   Serial.begin(9600);                    // Obre el port sèrie a 9600 bps
  Serial.print("Ara comptare de 0 a ");  // Imprimeix per pantalla les dades
  Serial.println(comptar);              //Mostra el valor de la variable
  for (int i=0; i <= comptar; i++)     //Condició de que si la variable "i" és igual a 0, i la variable "i" és més petit o igual a la variable "comptar", suma 1 a la variable "i"
  {
    Serial.print(i);                  //Mostra el valor de la variable
     Serial.print("-");              // Imprimeix per pantalla les dades 
  } 
                                   // Si es canvi el valor de "comptar" el programa mostrarà tots els números fins arribar a el valor de "comptar" definit.
 }
                          

 //******  Loop  **********************************************************
 void loop () {
  
 }
