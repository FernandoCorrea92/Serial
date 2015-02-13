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
    if (comptar > i)
    Serial.print("-");
  } 

 }
/* Per eliminar l'últim "-" es fica un if dient que si el comptador és més
gran que la variable "i" no l'escriu.*/

 //******  Loop  **********************************************************
 void loop () {
  
 }
