 /*************************************************************************
 **                                                                      **
 **    Descripició del programa                                          **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************
 int test = 32767;


 //******  Setup  *********************************************************
 void setup () {
  Serial.begin(9600);
  Serial.print("Test value is: ");
  Serial.println(test);

  test = test + 1;
 
  Serial.print("Now it is ");
  Serial.println(test);

 }


 //******  Loop  **********************************************************
 void loop () {
  
 }