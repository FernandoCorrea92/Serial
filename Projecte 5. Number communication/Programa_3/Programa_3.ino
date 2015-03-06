 /*************************************************************************
 **                                                                      **
 **    Descripició del programa                                          **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************
 int valor;
 int i;
 int resultat;
  
 //******  Setup  *********************************************************
 void setup () {
  Serial.begin(9600);
  Serial.println("Entra un numero.");

 }


 //******  Loop  **********************************************************
 void loop () {
    while (Serial.available() > 0) {
     
   valor = Serial.parseInt();
   
   Serial.print("el numero ");
   Serial.print(valor);
   Serial.print(" te ");
   
   resultat = valor;
   i = 0;
   
    while (resultat != 0) {
     resultat = valor / 10;
     valor = valor / 10;
     i++;
   }
   
   Serial.print(i);
   Serial.println(" xifres.");
   
     if (Serial.read() == '\n');
     Serial.println();
     Serial.println("Entra un numero. ");
   }
  }
