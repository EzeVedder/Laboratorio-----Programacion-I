#include <stdio.h>
#include <stdlib.h>

int main()
{
    int auxInt;
    int minimo
    int maximo;
    int acumulador;//Acumulador
    int i;//contador

    printf("Ingrese un numero: ");
    scanf("&d",auxInt);
    minimo = auxInt;
    maximo = auxInt;
    acumulador auxInt;

    for(i=0;i<4;i++)
    {
        printf("Ingrese un numero: ");
        scanf("&d",auxInt);
        acumulador = acumulador+auxInt;

        if(auxInt>maximo)
        {
            maximo = auxInt;
        }
        if(auxInt<minimo)
        {
            minimo = auxInt;
        }
    }
    return 0;
}
