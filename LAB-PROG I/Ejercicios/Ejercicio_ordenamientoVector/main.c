#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int main()
{
    int arrayDeNumeros[TAM];
    int i;
    int j;
    int aux;


    for(i=0;i<TAM;i++)//ingreso los numeros sin harcodeo
    {
        printf("\nIngrese un numero: ");
        scanf("%d",&arrayDeNumeros[i]);
    }

    for(i=0;i<TAM;i++)
    {
        for(j=i+1;j<TAM;j++)
        {
            if(arrayDeNumeros[i]>arrayDeNumeros[j])
            {
                aux = arrayDeNumeros[i];
                arrayDeNumeros[i]=arrayDeNumeros[j];
                arrayDeNumeros[j]=aux;

            }
        }
    }

    for(i=0;i<TAM;i++)
    {
        printf("\n%d",arrayDeNumeros[i]);
    }


    return 0;
}
