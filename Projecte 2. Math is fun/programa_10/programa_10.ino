 /*************************************************************************
 **                                                                      **
 **    Descripició del programa                                          **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************
float a = 3;
float b = 2;
float d;



 //******  Setup  *********************************************************
 void setup () {
  Serial.begin(9600);      
  Serial.println("Here is division: ");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  
  d = a / b;
 
  Serial.print("a / b = ");
  Serial.println(d);
 }
/* al canviar les varaibles int per float el problema esta solucionat,
els nombres float si mostren decimals. */

 //******  Loop  **********************************************************
 void loop () {
  
 }
