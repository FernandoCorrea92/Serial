 /*************************************************************************
 **                                                                      **
 **   de gb a mb                                                         **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************
 int drive_gb = 100; //definir la variable drive_gb" amb un valor de 100
 long drive_mb;      //definir la variable "drive_mb"
 

 //******  Setup  *********************************************************
 void setup () {
  Serial.begin(9600);           // Obre el port sèrie a 9600 bps
  Serial.print("Your HD is ");  // Imprimeix per pantalla les dades
  Serial.print(drive_gb);       // Mostar valor de la variable "drive_gb" definit
  Serial.println(" GB large.");  // Imprimeix per pantalla les dades
  
  drive_mb = drive_gb;           //una opció és igualar en int a long o a 
  drive_mb = drive_mb * 1024;    //dalt a variables assignar els dos valors 
                                 //a long
  Serial.print("It can store ");  // Imprimeix per pantalla les dades
  Serial.print(drive_mb);        // Mostar el resultat del càlcul
  Serial.println(" Megabytes!");  // Imprimeix per pantalla les dades
  }


 //******  Loop  **********************************************************
 void loop () {
  
 }
