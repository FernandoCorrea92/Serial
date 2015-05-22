 /*************************************************************************
 **                                                                      **
 **  mb i kb teòrics i mb i kb reals                                     **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************
long drive_gb = 100;  //definir la variable "drive_gb" a 100
long drive_mb;        //definir la variable "drive_mb"
long drive_kb;        //definir la variable "drive_kb"
long real_drive_mb;  //definir la variable "real_drive_mb"
long real_drive_kb;  //definir la variable "real_drive_kb"


 //******  Setup  *********************************************************
 void setup () {
  Serial.begin(9600);           // Obre el port sèrie a 9600 bps
  Serial.print("Your HD is ");  // Imprimeix per pantalla les dades
  Serial.print(drive_gb);      // Mostar valor de la variable "drive_gb" definit
  Serial.println(" GB large."); // Imprimeix per pantalla les dades
  
  drive_mb = 1024 * drive_gb;               //càlcul de mb a gb teòric
  drive_kb = 1024 * drive_mb;              //càlcul de kb a mb teòric
  real_drive_mb = 1000 * drive_gb;        // càlcul de mb a gb real
  real_drive_kb = 1000 * real_drive_mb;  //càlcul de kb a mb real
  
  Serial.print("In theory, it can store ");           // Imprimeix per pantalla les dades
  Serial.print(drive_mb);                            // Mostar el resultat del càlcul
  Serial.print(" Megabytes,");                      // Imprimeix per pantalla les dades
  Serial.print(drive_kb);                          // Mostar el resultat del càlcul
  Serial.println(" Kilobytes.");                  // Imprimeix per pantalla les dades
  Serial.print("But it really only stores");     // Imprimeix per pantalla les dades
  Serial.print(real_drive_mb);                  // Mostar el resultat del càlcul
  Serial.print(" Megabytes,");                 // Imprimeix per pantalla les dades
  Serial.print(real_drive_kb);                // Mostar el resultat del càlcul
  Serial.println(" Kilobytes.");             // Imprimeix per pantalla les dades
  Serial.print("You are missing");          // Imprimeix per pantalla les dades
  Serial.print(drive_kb - real_drive_kb);  // Mostar el resultat del càlcul
  Serial.println(" Kilobytes!");          // Imprimeix per pantalla les dades
  
 }


 //******  Loop  **********************************************************
 void loop () {
  
 }
