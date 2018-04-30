#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "../Funciones/utn.h"

#define TAM 5//tamanio del array

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
        opcionMenu = pedirEntero("\n1.Mostrar \n2.Modificar \n3.Salir\n ");
        switch(opcionMenu)
        {
            case 1:
                printf("\n\nINDICE -- VALOR\n");
                for(indiceArray=0;indiceArray<TAM;indiceArray++)
                {
                    printf("%d      --    %d\n",indiceArray,arrayDeNumeros[indiceArray]);
                }
                break;

            case 2:
                indiceArray = pedirEntero("\nIngrese el indice para modificar su valor: ");
                if(indiceArray >= 0 && indiceArray < TAM )
                {
                    valorIngresado = pedirEntero("\nIngrese el valor: ");
                    arrayDeNumeros[indiceArray] = valorIngresado;
                }
                else
                {
                    printf("No existe el valor ingresado");
                }
                break;

            case 3:

                break;


        }



    }



    getch();
    return 0;
}
