 /*************************************************************************
 **                                                                      **
 **    Descripició del programa                                          **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************
 float r1, r2;             // variables for the R's
 float rSerie, rParalel;   // variables for the results



 //******  Setup  *********************************************************
 void setup () {
  Serial.begin(9600);
  Serial.println("Entra el valor de r1 i r2 (separats per una coma)");

 }


 //******  Loop  **********************************************************
 void loop () {
  while (Serial.available() > 0) {
    r1 = Serial.parseInt();
    Serial.print("r1 = ");
    Serial.print(r1);
    Serial.print(" Ohms");
    
    r2 = Serial.parseFloat();
    Serial.print(" r2 = ");
    Serial.print(r2);
    Serial.println(" Ohms");
    
     if (Serial.read() == '\n') {
      rSerie = r1 + r2;
      Serial.print("rSerie = ");
      Serial.print(rSerie);
      Serial.print(" Ohms");
      
      rParalel = 1/(1/r1 + 1/r2);
      Serial.print(" rParalel = ");
      Serial.print(rParalel);
      Serial.println(" Ohms");
      Serial.println();
      
      Serial.println("Entra nous valors per r1 i r2");
      Serial.println();
      
     }
  }
 }
