 /*************************************************************************
 **                                                                      **
 **    Descripició del programa                                          **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************
int a = 3;
int b = 2;
int d;



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
 //No dona 1,5 perquè el nombres int son enters per tant no dóna decimals.

 //******  Loop  **********************************************************
 void loop () {
  
 }
