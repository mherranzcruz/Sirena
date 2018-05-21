/*****************************************************************
**                                                              **
**                        Títol:xiulet durant 3 segons                                **
**          Posar nom representatiu del programa                **
**                                                              **
** NOM:Martin Herranz                          Data:21/05/2018  **
*****************************************************************/
//****************************INCLUDE*****************************


//***************************VARIABLES****************************
const int xiulet = 9;        // donar nom al pin 9 de l’Arduino
//*****************************SETUP******************************

void setup() {                 //Configura el final de salida
 pinMode(xiulet, OUTPUT);   // definir el pin 9 com una sortida
 

}





//******************************LOOP******************************

void loop() {                 //Inicia el bucle del programa

  tone(xiulet,800,1000);
  delay(1000);
  tone(xiulet,1000,1000);  
  delay(1000); 
  tone(xiulet,1500,1000); 
  delay(1000);
  tone(xiulet,2000,1000);
  delay(3000);

  

}

//****************************FUNCIONS****************************
