#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nombre[20];
    int edad;
    char descripcion[50];
}ePersona;


int main()
{
    ePersona persona;
    int i;

    for(i=0;i<3;i++)
    {
    fflush(stdin);
    printf("Ingrese nombre: ");
    gets(persona.nombre);
    printf("Ingrese edad: ");
    scanf("%d",&persona.edad);
    fflush(stdin);
    printf("Ingrese descripcion: ");
    gets(persona.descripcion);
    }
    printf("\nNOMBRE\t EDAD  DESCRIPCION\n");
    printf("%s %3d %15s",persona.nombre,persona.edad,persona.descripcion);
    return 0;
}
