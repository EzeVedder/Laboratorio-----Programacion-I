#include <stdio.h>
#include <stdlib.h>
//Prueba Bucle WHILE---->FUNCIONA!!!

int main()
{
    //int array[5] = {1,2,3,4,5};//cinco elementos comenzando por la posicion 0
    char nombre[30];
    char tecla;
    //printf("%d %d",array[0],array[1]);
    tecla= 's';
    do
    {
        printf("\ningrese un nombre: ");
        gets(nombre);
        printf("El nombre es: %s\n",nombre);
        printf("Desea continuar ?\n");
        scanf("%c",&tecla);
        system("cls");//clean screener LIMPIO LA PANTALLA
        fflush(stdin);//LIMPIO LA BASURA DEL BUFFER

    }while(tecla=='s');


    return 0;
}


