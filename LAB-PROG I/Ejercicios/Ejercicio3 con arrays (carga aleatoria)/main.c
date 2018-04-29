#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define tam 3

int main()
{
    int vector[5];
    int posicion;
    int i;
    char seguir;

    for(i=0;i<5;i++)
    {
        vector[i]=0;//inicializar el vector
    }

    do
    {
        printf("Ingrese posicion: ");
        scanf("%d",&posicion);
        printf("Ingrese el valor del vector a cargar: ");
        scanf("%d",&vector[posicion]);
        printf("Desea ingresar otro dato S/N?: ");
        fflush(stdin);
        scanf("%c",&seguir);
    }while(seguir == 's');

    for(i=0;i<5;i++)
    {
        printf("%d\n",vector[posicion]);
    }


    //getch();
    return 0;
}
