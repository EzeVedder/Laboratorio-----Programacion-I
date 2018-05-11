#include <stdio.h>
#include <stdlib.h>



float promedio(float [],int tam);

int main(void)
{
    float numeros[14] = {1.43,2.43,3.23,4.2,5,12,3.43,10,4,2.33,1,2,3,4.65};
    int i;

    for(i=0;i<14;i++)
    {
        printf("%f",sacarPromedio(numeros));
    }

    return 0;
}

float sacarPromedio(float [],int tam)
{
    int i;
    for(i=0;i<tam,i++)
    {
        i+= i;
    }
}


