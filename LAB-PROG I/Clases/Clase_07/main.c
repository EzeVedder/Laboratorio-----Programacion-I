#include <stdio.h>
#include <stdlib.h>
#define tam 3

float calcularPromedio(int,int);
void mostrarAlumnos(int[],char[][30],int[],int[],float[],int);


int main()
{
    int legajo[tam];//2 + el \0
    char nombre[tam][30];//matriz de 3x30 29+\0
    int nota1[tam];
    int nota2[tam];
    float promedio[tam];
    int i;

    for(i=0;i<tam; i++)
    {
        printf("\nIngrese el legajo: ");
        scanf("%d",&legajo[i]);

        printf("Ingrese el nombre: ");
        fflush(stdin);
        gets(nombre[i]);
        //scanf("%s",nombre[i]);

        printf("Ingrese la primer nota: ");
        scanf("%d",&nota1[i]);

        printf("Ingrese la segunda nota: ");
        scanf("%d",&nota2[i]);

        promedio[i] = calcularPromedio(nota1[i],nota2[i]);

    }
        mostrarAlumnos(legajo,nombre,nota1,nota2,promedio,tam);


    return 0;
}


float calcularPromedio(int nota1,int nota2)
{
    float promedio;
    promedio = (float)(nota1 + nota2)/2;
    return promedio;
}

void mostrarAlumnos(int legajo[],char nombre[][30],int nota1[],int nota2[],float promedio[],int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        printf("\n%5d %15s %5d %5d %.2f\n",legajo[i],nombre[i],nota1[i],nota2[i],promedio[i]);
    }
}


