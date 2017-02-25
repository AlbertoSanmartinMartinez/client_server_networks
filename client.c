
//modulo software cliente

//librerias
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//variables para las constantes
#define num_subscription_process = 3;      //numero procesos de subscripcion (o)
#define num_packages_sent = 5;             //numero de paquetes enviados (n)
#define wait_time_between_subscripction_process =

//variables para los estados del cliente
#define DISCONNECTED 0;       //desconectado
#define NOT_SUBSCRIBED 1;     //no subscrito
#define WAIT_ACK_SUBS 2;      //espera confirmacion paquete de subscripcion
#define WAIT_ACK_INFO 3;      //espera confirmacion paquete adicional de subscripcion
#define SUBSCRIBED 4;         //subscrito
#define SEND_HELLO 5;         //enviando paquetes de hello
#define WAIT_INFO 6;          //esperando paquetes de hello

//declaracion de funciones
void impossibleConnectServer(); //funcion para avisar que ha sido imposible conectar con el servidor
int randomTime();
void showStatus(int status);
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

    int status = DISCONNECTED;
    showStatus(status);
    //strcpy(status, NOT_SUBSCRIBED);
    status = NOT_SUBSCRIBED;
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
void showStatus(int status) {
    if (status == 0) {
        printf("El estado del cliente es: Desconectado.\n");
    }
    else if (status == 1) {
        printf("El estado del cliente es: No subscrito.\n");
    }
    else if (status == 2) {
        printf("El estado del cliente es: Espera confirmacion paquete de subscripcion.\n");
    }
    else if (status == 3) {
        printf("El estado del cliente es: Espera confirmacion paquete adicional de subscripcion\n");
    }
    else if (status == 4) {
      printf("El estado del cliente es: Subscrito\n");
    }
    else if (status == 5) {
        printf("El estado del cliente es: Enviando paquetes de hello\n");
    }
    else if (status == 6) {
        printf("El estado del cliente es: esperando paquetes de hello\n");
    }
    else {
        printf("El estado del cliente es: Este estado no existe\n");
    }
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
  FILE * file = fopen("client0.cfg", "r");
  if (file == NULL) {
    printf("se ha producido un error al abrir el archivo");
  }
  else {
    char str[200];
    while (fgets(str, 200, file) != NULL) {
      fprintf("%s\n", str);
    }
    //printf("el texto es %s \n", str);
  }
  fclose(file);
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
