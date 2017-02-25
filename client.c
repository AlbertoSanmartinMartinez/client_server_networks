
//modulo software cliente

//librerias
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//variables para las constantes
#define num_subscription_process = 3;      //numero procesos de subscripcion (o)
#define num_packages_sent = 5;             //numero de paquetes enviados (n)
#define wait_time_between_subscripction_process =

//variables para los estados del cliente
#define DISCONNECTED "DISCONNECTED";       //desconectado
#define NOT_SUBSCRIBED = "NOT_SUBSCRIBED";   //no subscrito
#define WAIT_ACK_SUBS = "WAIT_ACK_SUBS";     //espera confirmacion paquete de subscripcion
#define WAIT_ACK_INFO "WAIT_ACK_INFO";     //espera confirmacion paquete adicional de subscripcion
#define SUBSCRIBED = "SUBSCRIBED";           //ubscrito
#define SEND_HELLO = "SEND_HELLO";           //
#define WAIT_INFO = "WAIT_INFO";

//declaracion de funciones
void impossibleConnectServer(); //funcion para avisar que ha sido imposible conectar con el servidor
int randomTime();
void showStatus(char status[]);
void readFileCfg();
void waitingTerminalComands();
void packInfo();
void unpackInfo();

//tipos de paquetes en fase subscripcion
void SUBS_REQ();    //peticion paquete subscripcion
void SUBS_ACK();    //aceptacion paquete subscripcion
void SUBS_INFO();   //peticion paquete adicional de subscripcion
void INFO_ACK();    //aceptacion paquete adicional de subscripcion
void SUBS_NACK();   //error de susbscripcion
void SUBS_REJ();    //rechazo de subscripcion

//tipos de paquetes en fase comunicacion
void HELLO();       //envio del paquete hello
void HELLO_REJ();   //rechazo del paquete hello

//tipos de paquetes en fase transferencia
void SEND_DATA();   //envio de datos desde el controlador
void SET_DATA();    //envio de datos desde el servidor
void GET_DATA();    //peticion de datos desde el servidor
void DATA_ACK();    //aceptacion de un paquete de datos
void DATA_NACK();   //error en un paquete de datos
void DATA_REJ();    //rechazo de un paquete de datos

//inicio del programa
int main() {

    char status[] = DISCONNECTED;
    showStatus(status);

    status[] = WAIT_ACK_INFO;
    showStatus(status);

    //leer datos del archivo
    //readFileCfg();

    //identificarse en el servidor
    //randomTime();
    //showStatus(status);
    //mantener comunicacion periódica

    //enviar datos al servidor (valores medidos, eventos...)

    //recibir datos del servidor

    //espera de comandos para la consolda del controlador
}

//funcion para avisar de que no se puede conectar con el servidor
void impossible_connect_server() {
    printf("Imposible conectar con el servidor.\n");
}

//funicion que genera un numero aleatorio para los tiempos de espera entre intentos de conexion
int randomTime() {
    srand(time(NULL));
    int num = rand() % 11;
    printf ("El numero aleatorio es: %d.\n", num);
    return num;
}

//funcion que muestra el estado del cliente
void showStatus(char status[]) {
    printf("El estado del cliente es: %s\n", status);
}

//funcion que hace la peticion de subscripcion
void SUBS_REQ() {

}

void SUBS_ACK() {
  //guardar los datos del servidor (MAC, IP, numero aleatorio)
}

void SUBS_INFO() {

}

void INFO_ACK() {

}

void SUBS_NACK() {

}

void SUBS_REJ() {

}

//metodo que lee la informacion del fichero .cfg
void readFileCfg() {

}

//metodo para empaquetar
void packInfo() {

}

//metodo para desempaquetar
void unpackInfo() {

}

//metodo que espera comando por el terminal
void waitingTerminalComands() {
  //stat:
  //set:
  //send:
  //quit:
}
