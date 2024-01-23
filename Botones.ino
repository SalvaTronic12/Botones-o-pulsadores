int boton1 = 6;
int boton2 = 7;
int led1 = 12;
int led2 = 13;


void setup() {

Serial.begin(9600);
pinMode(boton1,INPUT);
pinMode(boton2,INPUT);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);

}

void loop() {
int estadoBoton1 = digitalRead(boton1); // PULL-UP
int estadoBoton2 = digitalRead(boton2); // PULL - DOWN

Serial.print("ESTADO DEL BOTON 1:");Serial.print(" ");Serial.print(estadoBoton1);

Serial.print("ESTADO DEL BOTON 2:");Serial.print(" ");Serial.print(estadoBoton2);
Serial.println("");
delay(250);




//condicion 1
if(estadoBoton1 == 1){
  digitalWrite(led1,HIGH);
}
else{
  digitalWrite(led1,LOW);
}
// condicion 2
if(estadoBoton2 == 1){
  digitalWrite(led2,HIGH);
}
else{
  digitalWrite(led2,LOW);
}



}
