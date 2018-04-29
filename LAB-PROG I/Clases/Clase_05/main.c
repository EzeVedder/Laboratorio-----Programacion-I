#include <stdio.h>
#include <stdlib.h>
#include "Vectores.h"
#define TAM 5
/*
int main()
{

    int vector[5] = {9, -3, 5, 14, -4};
    int i;

    for(i=0 ; i<5 ; i++)
    {
        printf("%d -- %d\n",i,vector[i]);
    }


    return 0;
}

/*
int main()
{
    int vector[5];
    int i;

    for(i=0;i<5;i++)
    {
        printf("%d -- %d\n",i,vector[i]);
    }


    return 0;
}
*/

/*
int main()
{
    int vector[5];
    int i;

    for(i=0;i<5;i++)
    {
        vector[i] = -1);
    }


    return 0;
}


int main()
{
    int vector[5];
    int i;

    for(i=0;i<TAM;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&vector[i]); //&para la direccion de memoria
    }

    for(i=0;i<TAM;i++)//muestra los elementos de los vectores
    {
        printf("%d -- %d\n",i,vector[i]);
    }



    return 0;
}

    void mostrarVector(int vec[],int tamanio );//siempre que se recibe como parametro un vector, la funcion recibe el vector y el 2do la cantidad de elementos

    int main(){

    int i;
    int vector[5];

    for(i=0; i<TAM; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&vector[i]); //&para la direccion de memoria
    }

    mostrarVector(vector,TAM);

    return 0;

    }

    //funcion que muestra un vector
    void mostrarVector(int vec[],int tamanio )
    {

    int i;

     for(i=0;i<tamanio;i++)//muestra los elementos de los vectores
    {
        printf("%d -- %d\n",i,vec[i]);
    }
    }


    //funcion que recibe un max y un min y devuelve el max
    int buscarMaxVector(int [],int);

    int main()
     {
        int i;//DIRECCION EN MEMORIA
        int vector[TAM];
        int mayor;

        for(i=0; i<TAM; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&vector[i]); //&para la direccion de memoria
        printf("%d -- %d\n",i,vector[i]);
    }
        mayor = buscarMaxVector(vector,TAM);
        printf("El maximo es: %d",mayor);

         return 0;
     }

    int buscarMaxVector(int vec[],int tam)
    {
        int maximo;//declaro la variable maximo para retorno
        int i;//variable de control para incrementar el vector
        int flag = 0;

        for(i=0; i<tam; i++)
        {
            if(flag = 0 || vec[i]>maximo)
            {
                maximo = vec[i];
                flag = 1;
            }
        }

        return maximo;
    }

*/


    int main (){


    if(indice == -1)
    {
        printf("No se encontro el numero");
    }



    return 0;

    }
