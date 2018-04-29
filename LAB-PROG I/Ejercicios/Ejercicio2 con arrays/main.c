#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MAX 2

int main()
{
    int edad[MAX],i;
    float sueldo[MAX];
    float suma=0;
    float prom;
    float aux;

    for(i=0;i<MAX;i++)
    {
        printf("Ingrese la edad del legajo: ");
        scanf("%d",&edad[i]);
        printf("Ingrese el sueldo del legajo: ");
        scanf("%f",&aux);
        sueldo[i]=aux;
    }

    for(i=0;i<MAX;i++)
    {
        suma = suma+sueldo[i];
    }
    prom=suma/MAX;

    printf("el promedio del sueldo es: %f",prom);





    getch();
    return 0;
}
