#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main()
{
    float result;
    float n1;
    float n2;

    printf("Ing un num:");
    scanf("%f",&n1);
    printf("Ing un num:");
    scanf("%f",&n2);

    result = funcionDividir(n1,n2);
    printf("El resultado es: %f",result);

    return 0;
}

