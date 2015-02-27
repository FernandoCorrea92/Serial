 /*************************************************************************
 **                                                                      **
 **    Descripició del programa                                          **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************
 int Valor;



 //******  Setup  *********************************************************
 void setup () {
  Serial.begin(9600);
  Serial.println("Entra un numero");

 }


 //******  Loop  **********************************************************
 void loop () {
  while (Serial.available() > 0) {
    Valor = Serial.parseInt();
    Serial.print("el ");
    Serial.print(Valor);
 
      if (Valor % 2 == 0)
    {
      Serial.print(" es parell.");
    } 
    else
     {
       Serial.println(" es senar.");
    
     }
     if (Serial.read() == '\n');
     Serial.println();
   }
  }
