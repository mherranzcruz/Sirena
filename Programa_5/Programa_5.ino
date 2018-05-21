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
const int pot0 = A0;         // donar nom al pin A0 de l’Arduino
const int pot1 = A1;
int valPot0;                 // guardar valor del potenciometre
int valPot1;
//*****************************SETUP******************************

void setup() {                 //Configura el final de salida
 pinMode(xiulet, OUTPUT);   // definir el pin 9 com una sortida
 

}





//******************************LOOP******************************

void loop() {                 //Inicia el bucle del programa
  valPot0 = analogRead(pot0);    // llegir valor potenciòmetre 
  valPot1 = analogRead(pot1);    // llegir valor potenciòmetre 

  tone(xiulet,1000,valPot0);
  delay(valPot1);
  
  
  
 
  

}

//****************************FUNCIONS****************************
