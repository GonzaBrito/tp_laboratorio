#include <stdio.h>
#include <stdlib.h>
#include "bibloteca.h"

int menu(float a, float b, float c)
{
    int opcion;

    system("cls");
    printf("\t**Menu de opciones**\n\n");
    printf("1-Ingrese kilometros(%.2f KM)\n", a);
    printf("2-Ingrese precio de vuelos (aerolineas: $%.2f\t latam: $%.2f)\n",b, c);
    printf("3-Calcular todos los costos\n");
    printf("4-Informar resultados\n");
    printf("5-Carga forzada de datos\n");
    printf("6-salir\n");
    printf("Ingrese una opcion: ");
    scanf("%d", &opcion);

    return opcion;
}

void ingresarKm(float* a, char mensaje[], int* flag)
{
    float b;
    system("cls");
    printf("Ingrese la cantidad de %s", mensaje);
    scanf("%f", &b);
    b=validacion(b , "Ingrese una cantidad de kilometros valida: ");
    *a=b;
    *flag = 1;
}
void ingresarVuelos(float* a, char mensaje[], int* flag)
{
    float b;
    printf("Ingre el precio de %s", mensaje);
    scanf("%f", &b);
    b=validacion(b , "Ingrese un precio valido: ");
    *a=b;
    *flag = 2;
}
float validacion(float a,char mensajeError[])
{
    //valida todos los datos ingresados, con valores realistar mayores a 0.
    while(a <= 0)
    {
        system("cls");
        printf("Error. %s", mensajeError);//imprime el mensaje "error" con un mensaje modificable en el codigo main
        fflush(stdin);
        scanf("%f", &a);
    }
    return a;
}

void error(char mensaje[])
{
    system("cls");
    printf("%s", mensaje);
    system("pause");
}

void hacerCuentas(float* a, float* b, float* c, float* d, float e, float f)
{
    *a = e - (e * 0.1);
    *b = e + (e * 0.25);
    *c = e / 4606954.55;
    *d = e / f;
}

void mostrarDatos(float a, float* b, float* c, float* d, float* e, char mensaje[])
{
    float tarjetaDebito;
    float tarjetaCredito;
    float bitcoin;
    float precioUnitario;

    tarjetaDebito= *b;
    tarjetaCredito= *c;
    bitcoin= *d;
    precioUnitario= *e;

    printf("Precio %s : %.2f\n",mensaje, a);
    printf("a)Precio con tarjeta de debito: $%.2f\n", tarjetaDebito);
    printf("b)Precio con tarjeta de credito: $%.2f\n", tarjetaCredito);
    printf("c)Precio con bitcoin: %.10f BTC\n", bitcoin);
    printf("d)Precio unitario por kilometro: $%.2f\n\n", precioUnitario);
}

void mostrarDif(float a, float b)
{
    float difPrecio;
    if(a>b)
    {
        difPrecio=a-b;
        printf("Entre Aerolineas y latam hay $%.2f diferencia en el precio.\n\n", difPrecio);
    }
    else
    {
        difPrecio=b-a;
        printf("Entre Latam y aerolinea hay $%.2f diferencia en el precio.\n\n", difPrecio);
    }
}
