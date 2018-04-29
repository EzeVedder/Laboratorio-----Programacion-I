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
    int indice = -1;
    int aux;

    printf("Ingrese un nro a buscar: ");
    scanf("%d",&aux);

    for(i=0;i<Tam;i++);
    {
        if(num[i]==aux)
        {
            indice = i;
        }

    }


    /*for(i=0;i<Tam;i++)
    {
        printf("%c",caracter[i]);
    }

    char nombre[20];

    printf("Digite su nombre: ");
    gets(nombre);

    printf("%s",nombre);*/



    getch();
    return 0;
}
