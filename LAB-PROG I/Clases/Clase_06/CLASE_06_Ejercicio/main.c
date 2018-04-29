#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char palabra1[15]; // Se guarda solo 9. Porque un caracter es para el \0 // No se puede declarar fuera de la variable
    char palabra2[15];
    char buffer[1024];
    int i;
    int cantidad;
    int comparacion;

    printf("Ingrese una palabra: ");
    fflush(stdin);
    gets(buffer);
    // cantidad = strlen(palabra1); // Devuelve la cantidad de elemenros que tiene la cadena. Cuenta la cantidad de caracteres.


    while (strlen(buffer)>14)
    {
    printf("Ingrese una palabra: ");
    fflush(stdin);
    gets(buffer);
    }

    strcpy(palabra1, buffer); //destino, origen
    strcpy(palabra2, "Gato"); //destino, origen

    strupr(palabra1); //CONVIERTE TODO A MAYUSCULA
    strlwr(palabra2); //convierte todo a minuscula


    strcat(buffer, palabra2); //Sirve para concatenar. Es como el + de javascript
    strcat(buffer, palabra1); //Sirve para concatenar. Es como el + de javascript




    comparacion = strcmp(palabra1, palabra2); // Funcion para comparar palabras, Devuelve valor entero
    // comparacion = stricmp(palabra1, palabra2); // Funcion para comparar palabras, IMPORTAN LAS MAYUSCULAS.
    printf("El resultado de la comparacion es: %d\n", comparacion);

    printf("Cantidad de caracteres palabra1: %d\n", cantidad);
    printf("Palabra1: %s\nPalabra2 %s\n - Buffer %s\n", palabra1, palabra2, buffer);
    return 0;



    /*
    Tarea:
    DECLARAR 3 VARIABLES.
    char nombre[?];
    char apellido[?];
    char apellidoYNombre[?];
    ***********
    Ingresar el apellido scarafilo
    Ingresar el nombre german // tener en cuenta si es compuesto
    Variable apellidoynombre = Escarafilo, German". Primera letra mayuscula, y separado con coma y espacio.
    */
}
