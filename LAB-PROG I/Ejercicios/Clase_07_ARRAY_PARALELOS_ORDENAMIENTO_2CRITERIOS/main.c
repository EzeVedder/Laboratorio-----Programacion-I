#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int main()
{
    int legajo[MAX];
    //int legajoAux;
    int i;
    //int j;
    float sueldo[MAX]
    //float sueldoAux;
    char nombre[MAX][30];
    //char nombreAux[30];

    for(i=0;i<MAX;i++)
    {
        system("cls");
        printf("Ingrese el legajo del empleado: ");
        scanf("%d",&legajo[i]);

        printf("Ingrese el nombre del empleado: ");
        fflush(stdin);
        gets(nombre[i]);

        printf("Ingrese el sueldo del empleado: ");
        scanf("%f",&sueldo[i]);

    }
        for(i=0;i<MAX;i++)
    {
        printf("%s\n",nombre[i]);
    }




    return 0;
}
