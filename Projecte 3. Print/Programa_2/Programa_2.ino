 /*************************************************************************
 **                                                                      **
 **    mostrar a partir del número 33 es seu valor en hex, bin, oct i    **
 **    i símbol de la taula ASCII fins al 126                            **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************
int thisByte = 33;  //definir la variable "thisByte" a 33

 //******  Setup  *********************************************************
 void setup () {
  Serial.begin(9600);                              // Obre el port sèrie a 9600 bps
  Serial.println("ASCII Table ~ Character Map");   // Imprimeix per pantalla les dades
 }


 //******  Loop  **********************************************************
 void loop () {
  Serial.write(thisByte);    //Escriu el valor de la vraible "thisByte"
  
  Serial.print(", dec: ");         // Imprimeix per pantalla les dades
  Serial.print(thisByte);        // Mostar valor de la variable "thisByte"
  Serial.print(", hex: ");         // Imprimeix per pantalla les dades
  Serial.print(thisByte, HEX);     // Mostar valor de la variable "thisByte" en hexadecimal
  Serial.print(", oct: ");         // Imprimeix per pantalla les dades
  Serial.print(thisByte, OCT);     // Mostar valor de la variable "thisByte" en oct
  Serial.print(", bin: ");         // Imprimeix per pantalla les dades
  Serial.println(thisByte, BIN);   // Mostar valor de la variable "thisByte" en binari

  if(thisByte == 126)  // condició de que si thisByte és igual a 126
  { 
    while(true)        // mentres sigui certa la condició no farà res
    { 
    } 
  } 
  thisByte++;     // si no és certa anirà suman 1 al valor de thisByte

 }
