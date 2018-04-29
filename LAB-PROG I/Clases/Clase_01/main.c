
#include <stdio.h>
#include <stdlib.h>
/*Esta es una prueba*/
int main()
{
    int numero1;
    float numero2;
    float suma;
    char letra;
    //numero1 = 18;
    //numero2 = 33.94;

    printf("Ingrese un numero entero: ");
    scanf("%d", &numero1);
    printf("Ingrese un numero con coma: ");
    scanf("%f", &numero2);
    printf("Ingrese una letra: ");
    //fflush(stdin);
    //scanf("%c",&letra);
    letra = getch();

    suma = numero1 + numero2;

    printf("\nEl resultado de la suma es: %.2f\n",suma);
    printf("La letra es: %c",letra);

    //printf("El numero 1 es: %d y el numero 2 es: %.2f",numero1,numero2,"\n","El resultado de la suma es: %.2f",suma);

    return 0;
}
