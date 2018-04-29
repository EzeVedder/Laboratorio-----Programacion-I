#include <stdio.h>
#include "Vectores.h"


void cargarVector(int[],int){

    int i;
    for(i=0; i<TAM; i++)
    {
        printf("Ingrese un numero ");
        scanf("%d",&vector[i]);
    }
}

int buscarValor(int vec[],int tam,int valor){

    int index = -1;
    int i;

    for(i=0; i<tam; i++)
    {
        if(valor == vec[i])
        {
            index = i;
            break;
        }
    }




    return index;

}
