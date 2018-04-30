#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "../Funciones/utn.h"


#define MAXINPUT 100

int main()
{
    char input[MAXINPUT];
    int length;

    printf("Ingrese algo: ");
    scanf("%s",input);
    length = strlen(input);
    if(length > 0)
    {
        if(validarNumerico(input))
        {
            printf("Si es un numero\n");
        }
        if(validarAlfanumerico(input))
        {
            printf("Si es alfanumerico\n");
        }
        if(validarSoloLetras(input))
        {
            printf("Si es solo letras\n");
        }
        if(validarTelefono(input));
        {
            printf("Si es un telefono\n");
        }
    }

}

