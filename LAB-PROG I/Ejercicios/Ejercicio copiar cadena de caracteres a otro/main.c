#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define TAM 20

int main()
{
    char nombre1[TAM];
    char nombre2[TAM];
    char aux[TAM];

    printf("\nIngrese un nombre: ");
    gets(nombre1);
    fflush(stdin);
    printf("\nIngrese un nombre: ");
    gets(nombre2);

    strcpy(aux,nombre1);//el auxiliar recibe el nombre1
    strcpy(nombre1,nombre2);
    strcpy(nombre2,aux);
    printf("%s -- %s",nombre1,nombre2);

    getch();
    return 0;
}
