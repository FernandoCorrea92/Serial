 /*************************************************************************
 **                                                                      **
 **    Descripició del programa                                          **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************
 int comptar = 11;


 //******  Setup  *********************************************************
 void setup()
 {
   Serial.begin(9600);
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);
  for (int i=0; i <= comptar; i++)
  {
    Serial.print(i);
     Serial.print("-");
  } 

 }
/* Si es canvi el valor de "comptar" el programa mostrarà tots els números
fins arribar a el valor de "comptar" definit.*/

 //******  Loop  **********************************************************
 void loop () {
  
 }
