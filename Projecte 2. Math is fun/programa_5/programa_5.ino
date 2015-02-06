 /*************************************************************************
 **                                                                      **
 **    Descripició del programa                                          **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************
 int drive_gb = 100;
 long drive_mb;
 

 //******  Setup  *********************************************************
 void setup () {
  Serial.begin(9600);     
  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");
  
  drive_mb = 1024 * drive_gb; //està multiplicant un int i un long per tant
                              // el resultat seguirà sent amb int i no dona
                              // correcte.
  

  Serial.print("It can store ");
  Serial.print(drive_mb);
  Serial.println(" Megabytes!");
  }


 //******  Loop  **********************************************************
 void loop () {
  
 }
