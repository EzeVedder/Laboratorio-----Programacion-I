#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 200

int buscarLibre(int[],int);
void mostrarAlumnos(int[],int);


int main()
{
    int legajo[TAM];
    char alumnos[TAM][30];
    int alumno[TAM];
    int opcion;
    int posicion;

    printf("\tGestion de Alumnos\n");
    do
    {
        printf("\n1.ALTA\n2.MOSTRAR\n3.BAJA\n4.MODIFICAR\n5,ORDENAR\n6.SALIR\n");
        printf("Ingrese una opcion: ");
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                posicion = buscarLibre(alumno,TAM);
                if(posicion!=-1)
                {
                    printf("Ingrese legajo:");
                    scanf("%d",&legajo[TAM]);
                    printf("Ingrese el nombre del alumno: ");
                    fflush(stdin);
                    scanf("%[^\n]",alumnos[posicion]);
                }
                else
                {
                    printf("No hay mas espacio para ingresar datos. ");
                }
            break;
            case 2:
                printf("MOSTRAR\n");
            break;

            case 3:
                printf("BAJA\n");
            break;

            case 4:
                printf("MODIFICAR\n");
            break;

            case 5:
                printf("ORDENAR\n");
            break;

            case 6:
                printf("SALIR\n");
            break;
        }

    }while(opcion<=6);

    return 0;
}

int buscarLibre(int alumno[],int tam)
{
    int index = -1;
    int i;
    for(i=0;i<tam;i++)
    {
        if(alumno[i]==0)
        {
            index = i;
            break;
        }
    }

    return index;

}
