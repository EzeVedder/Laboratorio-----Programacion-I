#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 2

typedef struct//58 bytes de memoria para cada alumno INT 8BYTES CHAR 1 BYTE FLOAT 4BYTE
{
    int legajo;//valor copia el parametro como valor tipo primitivo escalar
    char nombre[50];//referencia porque guarda la direccion de memoria del primer vector
    float promedio;
    char email[30];

}eAlumno;

//void mostrar(int legajo,char nombre[],float promedio,char email[]); ESTO ES MOSTRAR PARA VECTORES
void mostrarUnAlumno(eAlumno unAlumno); //ESTO ES MOSTRAR CON ESTRUCTURAS

int main()//para harcodear
{
    /*eAlumno  miAlumno = {1,"Juan",3.25};//TIPO DE DATO IGUALADO A LA VARIABLE (MIALUMNO) CREADA POR EXTENSION
    eAlumno  otroAlumno;

    otroAlumno.legajo = 2;
    strcpy(otroAlumno.nombre,"Maria");
    otroAlumno.promedio = 6;*/
    eAlumno clase[T];//array de Alumnos en 5 estructuras
    eAlumno miAlumno;
    int i;

    //printf("T %d\n", sizeof(eAlumno));//sizeof saber el tamaño de una variable
    for(i=0; i<T; i++)
    {
        printf("Ingrese legajo: ");
        scanf("%d",&clase[i].legajo);
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(clase[i].nombre);
        printf("Ingrese promedio: ");
        scanf("%f",&clase[i].promedio);
    }
    //miAlumno = otroAlumno;

    for(i=0; i<T; i++)
    {
        mostrarUnAlumno(clase[i]);
    }
    //mostrarUnAlumno(otroAlumno);

    return 0;
}

void mostrarUnAlumno(eAlumno unAlumno)
{
    printf("Legajo Nombre Promedio\n");
    printf("%d %10s %5.2f\n",unAlumno.legajo,unAlumno.nombre,unAlumno.promedio);
}
