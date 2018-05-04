#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nombre[20];
    int edad;
}ePersona;


int main()
{


    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(ePersona.nombre);
    printf("Ingrese edad: ");
    scanf("%d",&ePersona.edad);

    printf("Hello world!\n");
    return 0;
}
