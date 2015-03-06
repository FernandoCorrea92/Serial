 /*************************************************************************
 **                                                                      **
 **    Descripició del programa                                          **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************
 int hores;
 int euros;
  
 //******  Setup  *********************************************************
 void setup () {
  Serial.begin(9600);
  Serial.println("Quantes hores de treball?");

 }


 //******  Loop  **********************************************************
 void loop () {
    while (Serial.available() > 0) {
     
   hores = Serial.parseInt();
   euros = hores * 20;
   
   Serial.print("el salari per ");
   Serial.print(hores);
   Serial.print(" hores treballades es de ");
   Serial.print(euros);
   Serial.println(" Euros.");
   
    
   if (Serial.read() == '\n');
     Serial.println();
     Serial.println("Entra un numero. ");
   }
  }
