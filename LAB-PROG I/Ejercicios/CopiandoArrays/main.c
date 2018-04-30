#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define TAM 5

void copiandoArrays(int[],int[],int);

int main()
{
    int array1[TAM] = {4,3,2,6,7};
    int array2[TAM] = {10,23,12,5,8};

    printf("Copiando arrays\n\n");
    copiandoArrays(array1,array2,TAM);




    getch();
    return 0;
}

void copiandoArrays(int a1[],int a2[],int tamanio)//FUNCION PARA COPIAR UN ARRAY A OTRO
{
    int i;

    for(i=0; i< tamanio; i++)
    {
        a2[i]=a1[i];
    }

    for(i=0; i<tamanio; i++)
    {
        printf("%d",a2[i]);
    }


}
