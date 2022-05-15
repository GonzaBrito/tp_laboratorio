#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "ArrayPassenger.h"


#define LEN 2000
#define TAMS 3

int main()
{
    char salir = 'n';
    int proximoId = 1000;
    ePassenger list[LEN];
    //eStatusFlight statusFlight[3];

    initPassengers(list, LEN);
    hardcodearPasajeros(list, LEN, 8, &proximoId);

    do
    {
        switch(menu())
        {
            case 1:
                if(altaEmpleado(list, LEN, &proximoId))
                {
                    printf("Pasajero ingresado con exito!!!\n\n");
                }
                else{
                   printf("Hubo un problema con el alta pasajero!!!\n\n");
                }

                break;
            case 2:
                if(modificarPasajero(list, LEN))
                {
                    printf("Modificacion exitosa!!!\n\n");
                }
                else{
                   printf("Hubo un problema con la modificacion del pasajero!!!\n\n");
                }
                break;
            case 3:
                if(!bajaPasajero(list, LEN))
                {
                    printf("Problema al hacer la baja de pasajero\n");
                }
                break;
            case 4:
                informarPasajeros(list, LEN);
                break;
            case 5:
                listarPasajeros(list, LEN);
                break;
            case 6:
                printf("Salir\n");
                salir = 's';
                break;
        }
        system("pause");
    }while(salir != 's');

    return 0;
}



