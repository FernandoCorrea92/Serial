/*************************************************************************
**                                                                      **
**    Descripició del programa                                          **
**                                                                      **
*************************************************************************/

//******  Includes  ******************************************************


//******  Variables  *****************************************************
int numero;
int nnum;
long suma;
float mitja;

//******  Setup  *********************************************************
void setup () {
  Serial.begin(9600);
  Serial.println("Entrar numeros un a un (per acabar 0):");
}


 //******  Loop  **********************************************************
void loop () {
  nnum = 0;
  numero = 1;
  
  do{
    while (Serial.available() > 0) {
     numero = Serial.parseInt();
     Serial.print(numero);
     Serial.print(" - ");
     
     if (Serial.read() == '\n') {
       nnum++;
       suma = suma + numero;
     }
    }
  }while(numero!=0);
 
   nnum--;
   mitja = float(suma)/nnum;
  
   Serial.println("");
   Serial.print("S'han entrat ");
   Serial.print(nnum);
   Serial.print(" numeros, ");
   Serial.print("la suma de tots ells es ");
   Serial.print(suma);
   Serial.print(" i la mitja ");
   Serial.print(mitja);
   Serial.println(".");
   Serial.println();
   Serial.println("Entrar numeros un a un (per acabar 0):");
   nnum = 0;
   numero = 1;
   suma = 0;
   mitja = 0;
}
  
