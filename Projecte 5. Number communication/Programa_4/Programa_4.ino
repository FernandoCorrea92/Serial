 /*************************************************************************
 **                                                                      **
 **    Descripició del programa                                          **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************
 int hores;
 int euros;
 float salari;
 
 //******  Setup  *********************************************************
 void setup () {
  Serial.begin(9600);
  Serial.println("Quantes hores de treball?");

 }


 //******  Loop  **********************************************************
 void loop () {
    while (Serial.available() > 0) {
     
   hores = Serial.parseInt();
   if (hores <= 37) {
    euros = hores * 20;
   }
    else if ( hores > 37 ){
     euros = (hores - 37) * 30 + 37 * 20;
   }
   
   if (euros <= 800) {
     salari = euros - euros * 0.05;
   }
   else {
    salari = euros - euros * 0.10;
   }
   
   Serial.print("el salari per ");
   Serial.print(hores);
   Serial.print(" hores treballades es de ");
   Serial.print(salari);
   Serial.println(" Euros.");
   
    
   if (Serial.read() == '\n');
     Serial.println();
     Serial.println("Entra un numero. ");
   }
  }
