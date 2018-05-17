#include <stdio.h>
#include <stdlib.h>

#define T 5

#include "generales.h"

int main()
{
    //ESTRUCTURAS / INICIALIZACIONES / HARDCODEOS.
    ePersona persona[T];
    inicializarPropietarios(persona, T);

    eAuto autos[T];
    inicializarAutos(autos, T);



    int opcion;
    int salir = 0;



    do
    {
    opcion=Menu();
    switch(opcion)
        {
        case 1:
        altaDePersonas(persona, T);
            system("pause");
            break;
        case 2:
        modificarPersona(persona, T);
            system("pause");
            break;
        case 3:
        bajaDePersonas(persona, T);
            system("pause");
            break;
        case 4:
            system("pause");
            break;
        case 5:
            system("pause");
            break;
        case 6:
            system("pause");
            break;
        case 7:
            system("pause");
            break;
        case 8:
            system("pause");
            break;
        case 0:
            system("pause");
            printf("Programa terminado");
            salir=1;
            break;

        default:
            printf("Error, opcion no valida\n\n");
            system("pause");
            break;
        }

    }while(salir==0);



    return 0;
}
