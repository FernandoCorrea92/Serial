 /*************************************************************************
 **                                                                      **
 **    Missatges diferents depenent del valor de la variable             **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************
 int sensorReading = 0;  //definir la variable "sensorReading" a 0


 //******  Setup  *********************************************************
 void setup()
 {
   Serial.begin(9600);            // Obre el port sèrie a 9600 bps
  Serial.print("The day is ");    // Imprimeix per pantalla les dades
   
  switch (sensorReading) {
  case 0:    //si el valor de la variable és 0
    Serial.println("dark");  // Imprimeix per pantalla les dades
    break;  //Deixa de llegir el valor
  case 1:  //si el valor de la variable és 1
    Serial.println("dim");  // Imprimeix per pantalla les dades
    break;    //Deixa de llegir el valor
  case 2:    //si el valor de la variable és 2
    Serial.println("medium");  // Imprimeix per pantalla les dades
    break;  //Deixa de llegir el valor
  case 3:  //si el valor de la variable és 3
    Serial.println("bright");  // Imprimeix per pantalla les dades
    break;  //Deixa de llegir el valor
  default:  //si el valor de la variable no es cap dels anteriors
    Serial.println("... I don't know!!!");  // Imprimeix per pantalla les dades
  } 
 }
                // el "if" llegeix valors entre un rang de valors definit, en canvi un swith només llegeix valors concrets.

 //******  Loop  **********************************************************
 void loop () {
  
 }
