#include <stdio.h>
#include <stdlib.h>


typedef struct
{
    char nombre[30];
    int edad;
}ePersona;



int main()
{

    ePersona persona1[3];
    int i;

    for(i=0;i<3;i++)
    {
        printf("ingrese nombre: ");
        gets(persona1[i].nombre);
        printf("Ingrse edad: ");
        scanf("%d",&persona1[i].edad);
        fflush(stdin);
    }

    for(i=0;i<3;i++)
    {
        printf("%s",persona1[i].nombre);
        printf("%d",persona1[i].edad);
    }

    return 0;
}
