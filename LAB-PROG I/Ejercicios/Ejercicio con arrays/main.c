#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define Tam 5

int main()
{
    /*int legajo[Tam]; //= {45,23,321};
    int i;

    for(i=0; i<Tam; i++)
    {
        printf("Digite un numero: ");
        scanf("%d",&legajo[i]);
    }

    for(i=0;i<Tam;i++)
    {
        printf("%d \n",legajo[i]);
    }*/

    int num[Tam] = {4,3,5,2,6};
    int i;
    int vector[Tam];

    printf("Ingrese la letra a buscar: ");
    fflush(stdin);
    scanf("%d",&num);

    for(i=0;i<Tam;i++);
    {
        if(num==vector[i])
        {
            printf("Se encontro el caracter en el array");
        }
        else
        {
            printf("No se encontro el caracter en el array");
        }
    }

    /*for(i=0;i<Tam;i++)
    {
        printf("%c",caracter[i]);
    }

    /*char nombre[20];

    printf("Digite su nombre: ");
    gets(nombre);

    printf("%s",nombre);*/



    getch();
    return 0;
}
