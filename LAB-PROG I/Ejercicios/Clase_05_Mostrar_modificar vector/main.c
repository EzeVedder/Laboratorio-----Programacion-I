#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "../Funciones/utn.h"

#define TAM 5

int main()
{
    int arrayDeNumeros[TAM];
    int numeroIngresado;
    int indiceArray;
    int valorIngresado;
    int opcionMenu = 0;//INICIALIZA EN 0 PARA ASEGURAR QUE NO INICIE EN ALGUN OPCION DEL CASE


    for(indiceArray = 0;indiceArray<TAM;indiceArray++)
    {
        numeroIngresado = pedirEntero("Ingrese un numero: ");
        arrayDeNumeros[indiceArray] = numeroIngresado;
    }

    while(opcionMenu !=3)
    {
        opcionMenu = pedirEntero("1.Mostrar \n2.Modificar \n3.Salir\n ");
        switch(opcionMenu)
        {
            case 1:
                printf("\n\nINDICE -- VALOR\n");
                for(indiceArray=0;indiceArray<TAM;indiceArray++)
                {
                    printf("%d   --  %d",indiceArray,arrayDeNumeros[indiceArray]);
                }
                break;

            case 2:
                printf("\nIngrese el indice para modificar su valor: ");
                if(indiceArray >= 0 && indiceArray < TAM )
                {
                    valorIngresado = pedirEntero("Ingrese el valor: \n");
                }
                break;

            case 3:
                break;


        }



    }



    getch();
    return 0;
}
