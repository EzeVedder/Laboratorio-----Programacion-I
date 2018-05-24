#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* miArchivo;
    int numero = 64;

    miArchivo = fopen("prueba1.txt","w");

    /*1. origen del dato,direccion de memoria 2.sizeof devuelve el peso
    del dato(le digo que vamos a escribir un entero) 3.devuelve el puntero*/

    fwrite(&numero,sizeof(int),1,miArchivo);//funcion para escribir en un archivo binario IMPRIME EL @ EN ASCII


    return 0;
}
