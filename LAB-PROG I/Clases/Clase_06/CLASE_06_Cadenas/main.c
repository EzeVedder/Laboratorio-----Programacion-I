#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palabra1[50]; // Se guarda solo 9. Porque un caracter es para el \0 // No se puede declarar fuera de la variable
    //char palabra2[15];
    //int i;

    printf("Ingrese una palabara: ");
    fflush(stdin);
    gets(palabra1);

    printf("%s", palabra1);
    return 0;
}
