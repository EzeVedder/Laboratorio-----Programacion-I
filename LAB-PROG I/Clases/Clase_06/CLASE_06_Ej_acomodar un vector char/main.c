#include <stdio.h>
#include <stdlib.h>


int main()
{
    //int vector[5]={5,2,9,6,5};
    char vector[5]={'w','a','v','e','b'};
    char auxiliar; //para guardar el dato
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
        printf("%c\n", vector[i]);
    }

    return 0;
}
