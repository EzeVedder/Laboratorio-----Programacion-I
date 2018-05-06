#include <stdio.h>
#include <stdlib.h>
#include "validaciones.h"



int main()
{
    int opcion;

    printf("\n\t AGENDA DE CONTACTOS\n\n");
    opcion = getInt("1.CREAR CONTACTO\n2.ELIMINAR CONTACTO\n3.MODIFICAR CONTACTO\n4.MOSTRAR CONTACTOS\n5.SALIR\n");

    printf("La opcion es: %d",opcion);

    return 0;
}



