#include <stdio.h>
#include <stdlib.h>

#define TAM 5

 int buscarMaxVector(int[],int);

int main()
{
    int arrayDeNumeros[TAM];
    int mayor;
    int vec[0];
    int i;
    int flag=0;
    int num;

    for(i=0;i<TAM;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&arrayDeNumeros[i]);
    }

    mayor = vec[0];
    for(i=0;i<TAM;i++)
    {
        if(vec[i]>mayor)
        {
            mayor = vec[i];

        }

    }

    printf("\nIngrese un numero a buscar: ");
    scanf("%d",&num);

    for(i=0;i<TAM;i++)
    {
        if(num==vec[i])
        {
            printf("\nEl numero se encuentra en el array");
            flag = 1;
        }
    }
    if(flag==0)
    {
        printf("El numero no se encontro");
    }

    printf("\nEl mayor nro del array es: %d",mayor);

    return 0;
}



