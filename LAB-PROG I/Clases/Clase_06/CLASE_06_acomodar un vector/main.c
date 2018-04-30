#include <stdio.h>
#include <stdlib.h>


int main()
{
    int vector[5]={10,2,9,6,5};
    int auxiliar; //para guardar el dato
    int i;
    int j;
    for(i=0; i<4; i++) // Cantidad de array -1
    {
        for(j=i+1; j<5; j++) // Siempre un elemento mas respecto a la maarilla. J hasta ultimo elemento
        {
            if(vector[i]>vector[j]) // Se pregunta si es mayor, en caso de ser asi, se van a intercambiar
            {
            auxiliar = vector[i];
            vector[i] = vector[j];
            vector[j] = auxiliar;
            }
        }
    }

    for (i=0; i<5; i++)
    {
        printf("%d\n", vector[i]);
    }

    return 0;
}
