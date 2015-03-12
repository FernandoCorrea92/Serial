 /*************************************************************************
 **                                                                      **
 **    Descripició del programa                                          **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************
 int cm;

 
 //******  Setup  *********************************************************
 void setup () {
  Serial.begin(9600);
  Serial.println("Quina mida te el cargol en cm?");

 }


 //******  Loop  **********************************************************
 void loop () {
    while (Serial.available() > 0) {
     
   cm = Serial.parseInt();
    Serial.print("El cargol amb una mida de ");
    Serial.print(cm);
    Serial.print(" cm es ");
 
    
  if (cm >=1 && cm < 3) {
    Serial.println(" petit.");
  }
  
  else if (cm > 2 && cm < 5) {
   Serial.println(" mitja.");
  }
 
  else if (cm > 4 && cm < 8) {
   Serial.println(" gran.");
 }
  
  else if (cm > 7 && cm <= 10){
  Serial.println(" molt gran.");
 }
  
  else {
  Serial.println("incorrecte.");
  }
 
   if (Serial.read() == '\n'); 
     Serial.println();
     Serial.println("Quina mida te el cargol en cm?");
   }
 }
  
