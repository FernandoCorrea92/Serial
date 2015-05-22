 /*************************************************************************
 **                                                                      **
 **    DE gb a mb                                                        **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************
 int drive_gb = 5; //definir "drive_gb" com a dada int amb un valor fixe de 5
 int drive_mb;     //definir "driev_mb" com a dada int sense valor
 

 //******  Setup  *********************************************************
 void setup () {
  Serial.begin(9600);                  // Obre el port sèrie a 9600 bps
  Serial.print("Your HD is ");        // Imprimeix per pantalla les dades
  Serial.print(drive_gb);            // Mostar valor de la variable "drive_gb" definit
  Serial.println(" GB large.");     // Imprimeix per pantalla les dades
  
  drive_mb = 1024 * drive_gb;      // Càlcul de gb a mb

  Serial.print("It can store ");    // Imprimeix per pantalla les dades en una nova línia
  Serial.print(drive_mb);          // Imprimeix per pantalla el resultat del càlcul
  Serial.println(" Megabytes!");  // Imprimeix per pantalla les dades
  }


 //******  Loop  **********************************************************
 void loop () {
  
 }
