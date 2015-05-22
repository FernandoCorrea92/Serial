 /*************************************************************************
 **                                                                      **
 **    Diferents formats d'um mateix número                              **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************
 int num = 64;  //definir la variable "num" a 64

 //******  Setup  *********************************************************
 void setup () {
   Serial.begin(9600);       // Obre el port sèrie a 9600 bps
   
  Serial.println("Different formats for the same number:");  // Imprimeix per pantalla les dades

  Serial.write(num);   // // Mostar valor de la variable "num" de la taula ascii
  Serial.println();    //línia buida per separar
  
  Serial.println(num);     // Mostar valor de la variable "num"
  
  Serial.println(num,DEC);  // Mostar valor de la variable "num" en decimal
  
  Serial.println(num,BIN); // Mostar valor de la variable "num" en binari
  
  Serial.println(num,HEX);  // Mostar valor de la variable "num" en hexadecimal
  
  Serial.println(num,OCT); // Mostar valor de la variable "num" en oct
 }


 //******  Loop  **********************************************************
 void loop () {
  
 }
