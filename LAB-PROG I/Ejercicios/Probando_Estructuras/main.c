#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dia;
    int mes;
    int anio;
}eFechaNacimiento;

typedef struct
{
    char nombre[30];
    int edad;
    struct eFechaNacimiento fnacimiento;
}ePersona;



int main()
{

    ePersona persona1[3];
    eFechaNacimiento fn;
    int i;

    for(i=0;i<3;i++)
    {
        printf("ingrese nombre: ");
        gets(persona1[i].nombre);
        printf("Ingrse edad: ");
        scanf("%d",&persona1[i].edad);
        printf("Ingrese dia de nacimiento: ");
        scanf("%d",&fn.dia);
        printf("Ingrese mes de nacimiento: ");
        scanf("%d",&fn.mes);
        printf("Ingrese año de nacimiento: ");
        scanf("%d",&fn.anio);

        persona1.fnacimiento = fn;

        fflush(stdin);
    }

    for(i=0;i<3;i++)
    {
        printf("%s",persona1[i].nombre);
        printf("%d",persona1[i].edad);
        printf("d",persona1[i]);
    }

    return 0;
}
