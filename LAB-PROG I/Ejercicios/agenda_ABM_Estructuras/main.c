#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validaciones.h"

#define QTY_CONTACTOS 200

typedef struct
{
    char nombre[50];
    char apellido[50];
    int legajo;

}eContactos;








int main()
{
    int opcion;


    printf("\n\t AGENDA DE CONTACTOS\n");
    opcion = getInt("1. ALTA\n2. BAJA\n3. MODIFICAR\n4. ORDENAR\n5. MOSTRAR\n6. SALIR\nINGRESE UNA OPCION: ");
    switch(opcion)
    {
        case 1:

            break;

        case 2:
            break;

        case 3:
            break;

        case 4:
            break;


    }









    return 0;
}
