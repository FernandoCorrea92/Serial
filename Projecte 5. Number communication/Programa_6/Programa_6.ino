/*************************************************************************
**                                                                      **
**    Descripició del programa                                          **
**                                                                      **
*************************************************************************/

//******  Includes  ******************************************************


//******  Variables  *****************************************************
int numero;
int nnum;
int suma;
 
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
       nnum=nnum+1;
       suma=suma+numero;
     }
    }
  }while(numero!=0)
  
     Serial.print("S'han entrat ");
     Serial.print(nnum);
     Serial.print(" numeros, ");
     Serial.println("la suma de tots ells es ");
     Serial.print(suma);
     Serial.println("i la mitja ");
     Serial.print(suma/nnum);
  

 
    
     Serial.println();
     Serial.println("Entrar numeros un a un (per acabar 0:");
  
}
  
