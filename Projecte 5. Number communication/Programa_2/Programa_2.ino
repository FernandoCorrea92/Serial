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
  Serial.print("Entra un numero, ");

 }


 //******  Loop  **********************************************************
 void loop () {
    while (Serial.available() > 0) {
     
     Valor = Serial.parseInt();
  
   Serial.print("el ");
   Serial.print(Valor);
 
      if (Valor % 2 == 0)
    {
      Serial.println(" es parell.");
    } 
    else
     {
       Serial.println(" es senar.");
    
     }
     Serial.read() == '\n';
     Serial.println();
     Serial.print("Entra un numero, ");
   }
  }
