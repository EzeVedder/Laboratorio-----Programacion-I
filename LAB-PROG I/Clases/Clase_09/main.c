#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char calle[50];
    int numero;
    char localidad;
    int piso;
    char dpto;
    int cp;
}eDomicilio;

typedef struct
{
    int legajo;
    char nombre[50];
    eDomicilio domicilio;

}eAlumno;

/*
typedef struct
{
    int legajo;
    char nombre[50];
    eDomicilio domicilio;
}eProfesor;
*/

int main()
{
    //COMPOSICION DE DATOS
    eAlumno miAlumno;//SE PUEDE HACER CON ARRAY
    miAlumno.legajo = 400;//asino un numero de legajo con el punto (.)
    miAlumno.domicilio.cp = 1870;//asigno el codigo postal.

    printf("Legajo: %d -- CP: %d",miAlumno.legajo,miAlumno.domicilio.cp);
    return 0;
}
