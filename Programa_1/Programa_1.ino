/*****************************************************************
**                                                              **
**                        Títol:                                **
**          Posar nom representatiu del programa                **
**                                                              **
** NOM:Martin Herranz                          Data:21/05/2018  **
*****************************************************************/
//****************************INCLUDE*****************************


//***************************VARIABLES****************************
const int xiulet = 9;        // donar nom al pin 9 de l’Arduino
const int pot0 = A0;         // donar nom al pin A0 de l’Arduino
int valPot0;                 // guardar valor del potenciometre
//*****************************SETUP******************************

void setup() {                 //Configura el final de salida
 pinMode(xiulet, OUTPUT);   // definir el pin 9 com una sortida


}





//******************************LOOP******************************

void loop() {                 //Inicia el bucle del programa

valPot0 = analogRead(pot0);    // llegir valor potenciòmetre 

  tone(xiulet, 800, valPot0);    // xiulet de durada valPot0
  delay(2*valPot0);              // esperar valPot0 del xiulet + valPot0 silenci


}

//****************************FUNCIONS****************************
