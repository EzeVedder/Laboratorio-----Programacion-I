#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char nombre[20];
    int aux;

    printf("Ingrese el nombre: ");
    gets(nombre);

    aux = strlen(nombre);

    printf("La cadena %s contiene %d caracteres",nombre,aux);
    fflush(stdin);
    /*char nombre[30];
    char nombre2[30];
    int comparar;


    printf("INGRESE SU NOMBRE: ");
    gets(nombre);
    fflush(stdin);
    printf("INGRESE OTRO NOMBRE: ");
    gets(nombre2);
    //scanf("%s",nombre);//NO SE COLOCA '&' Y NO TOMA LOS ESPACIO O SALTOS DE LINEA
    //gets(nombre); //CON LA FUNCION GETS PUEDE LEER UNA CADENA DE CARACTERES TOMANDO EN CUENTA SI TIENE ESPACIOS
    comparar = strcmp(nombre,nombre2);//SE USA STRICMP PARA QUE NO DISTINGA ENTRE MAYUS Y MINUSC
    if(comparar == 0)
    {
        printf("Las dos cadenas son iguales\n");
    }
    if(comparar < 0)
    {
        printf("La cadena 1 es mas corta\n");
    }
    if(comparar > 0)
    {
        printf("La cadena 2 es mas corta\n");
    }


    //printf("\nEl nombre es: %s",nombre);*/

    //-------------------------------------

    char password[20];
    int comparar;

    printf("INGRESE EL PASSWORD: ");
    gets(password);
    comparar = strcmp(password,"1234");

    if(comparar==0)
    {
        printf("EL PASSWORD INGRESADO ES CORRECTO\n");
    }
    else
    {
        printf("ERROR! EL PASSWORD INGRESADO ES INCORRECTO\n");
    }

    return 0;
}
