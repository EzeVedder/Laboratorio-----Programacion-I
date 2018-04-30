#include <stdio.h>
#include <stdlib.h>


int main()
{
    char nombre[30];


    printf("INGRESE SU NOMBRE: ");
    //scanf("%s",nombre);//NO SE COLOCA '&' Y NO TOMA LOS ESPACIO O SALTOS DE LINEA
    gets(nombre); //CON LA FUNCION GETS PUEDE LEER UNA CADENA DE CARACTERES TOMANDO EN CUENTA SI TIENE ESPACIOS
    printf("\nEl nombre es: %s",nombre);

    return 0;
}
