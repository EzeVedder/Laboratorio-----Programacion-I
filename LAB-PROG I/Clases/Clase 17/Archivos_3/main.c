#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* miArchivo;
    int numero ;

    miArchivo = fopen("prueba1.txt","r");

    fread(&numero,sizeof(int),1,miArchivo);

    fclose(miArchivo);
    printf("NUMERO: %d",numero);

    return 0;
}
