/*
 ============================================================================
 Name        : Trabajo.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "bibloteca.h"

int main()
{
	setbuf(stdout, NULL);
    float kilometros;
    float aerolineas;
    float latam;
    char salir = 'n';
    int flag = 0;

    float tarjetaDebito;
    float tarjetaCredito;
    float bitcoin;
    float precioUnitario;

    float tarjetaDebito1;
    float tarjetaCredito1;
    float bitcoin1;
    float precioUnitario1;

    do
    {
        switch(menu(kilometros, aerolineas, latam))
        {
            case 1://pedir los datos de los km
                    ingresarKm(&kilometros, "kilometros: ", &flag);
                    break;
            case 2://pedir los datos de los vuelos
                    if(flag)
                    {
                        system("cls");
                        ingresarVuelos(&aerolineas, "aerolineas: ", &flag);
                        ingresarVuelos(&latam, "latam: ", &flag);
                    }
                    else
                    {
                        error("Primero se deben ingresar los kilometros\n\n");
                    }
                    break;
            case 3://hacer las cuentas
                    if(flag == 2)
                    {
                        system("cls");
                        hacerCuentas(&tarjetaDebito, &tarjetaCredito, &bitcoin, &precioUnitario, aerolineas, kilometros);
                        printf("Se realizaron los calculos para: Aerolineas\n\n");
                        system("pause");
                        system("cls");
                        hacerCuentas(&tarjetaDebito1, &tarjetaCredito1, &bitcoin1, &precioUnitario1, latam, kilometros);
                        printf("Se realizaron los calculos para: Latam\n\n");
                        system("pause");
                        flag=3;
                    }
                    else
                    {
                        error("Para calcular los datos primero se deben ingresar.\n\n");
                    }
                    break;
            case 4://informar resultados
                    if(flag == 3)
                    {
                        system("cls");
                        printf("KMS Ingresados: %.2f\n\n", kilometros);
                        mostrarDatos(aerolineas, &tarjetaDebito, &tarjetaCredito, &bitcoin, &precioUnitario, "aerolineas");
                        mostrarDatos(latam, &tarjetaDebito1, &tarjetaCredito1, &bitcoin1, &precioUnitario1, "latam");
                        mostrarDif(aerolineas, latam);
                        system("pause");
                    }
                    else
                    {
                        error("Para mostrar los datos primero se deben calcular.\n\n");
                    }
                    break;
            case 5:
            		kilometros=7090;
            		aerolineas=162965;
            		latam=159339;
                    hacerCuentas(&tarjetaDebito, &tarjetaCredito, &bitcoin, &precioUnitario, aerolineas, kilometros);
                    hacerCuentas(&tarjetaDebito1, &tarjetaCredito1, &bitcoin1, &precioUnitario1, latam, kilometros);
                    system("cls");
                    printf("KMS Ingresados: %.2f\n\n", kilometros);
            		mostrarDatos(aerolineas, &tarjetaDebito, &tarjetaCredito, &bitcoin, &precioUnitario, "aerolineas");
            		mostrarDatos(latam, &tarjetaDebito1, &tarjetaCredito1, &bitcoin1, &precioUnitario1, "latam");
            		mostrarDif(aerolineas, latam);
            		system("pause");
                    break;
            case 6:
                    salir='s';
                    break;
            default:
                    system("cls");
                    printf("Opcion Invalida!\n\n");
                    system("pause");
                    break;
        }
    }
    while(salir!='s');

    return 0;
}
