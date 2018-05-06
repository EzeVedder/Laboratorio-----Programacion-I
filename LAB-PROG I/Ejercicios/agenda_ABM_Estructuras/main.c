#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validaciones.h"

#define QTY_CONTACTOS 200




int main()
{
    //array de contactos
    eContactos arrayContactos[QTY_CONTACTOS];
    //-------------------------------------
    eContactos auxiliarContacto;

    char auxiliarNombre[50];
    char auxiliarApellido[50];
    char auxiliarLegajoStr[50];
    int auxiliarLegajo;

    int indiceLugarLibre;
    int resultadoBusquedaIndice;
    int opcion = 0;

    int i,j;

    inicializarArrayContactos(arrayContactos,QTY_CONTACTOS,-1);
    do
    {
        printf("\n\t AGENDA DE CONTACTOS\n\n");
        opcion = getInt("1. ALTA\n2. BAJA\n3. MODIFICAR\n4. ORDENAR\n5. MOSTRAR\n6. SALIR\nINGRESE UNA OPCION: ");
        switch(opcion)
        {
            case 1:
                printf("\nALTA");
                indiceLugarLibre = buscarPrimerOcurrenciaEstructuras(arrayContactos,QTY_CONTACTOS,-1);
                if(indiceLugarLibre == -1)
                {
                    printf("\n-------->>>>>NO HAY LUGARES LIBRES\n");
                    break;
                }
                printf("\nALTA\n");
                if(!getStringLetras("Ingrese el nombre: ",auxiliarNombre))
                {
                    printf("\nEL NOMBRE DEBE CONTENER SOLO LETRAS!!!");
                    break;
                }
                if(!getStringLetras("Ingrese el apellido: ",auxiliarApellido));
                {
                    printf("\nEL APELLIDO DEBE CONTENER SOLO LETRAS!!!");
                    break;
                }
                if(!getStringNumerico("Ingrese el legajo: ",auxiliarLegajoStr))
                {
                    printf("\nEL LEGAJO NO PUEDE CONTENER LETRAS!!!");
                    break;
                }
                auxiliarLegajo = atoi(auxiliarLegajoStr);

                if(buscarPrimerOcurrenciaEstructuras(arrayContactos,QTY_CONTACTOS,auxiliarLegajo)!= -1)
                {
                    printf("\nEL LEGAJO YA EXISTE!!!");
                    break;
                }

                strcpy(arrayContactos[indiceLugarLibre].nombre,auxiliarNombre);
                strcpy(arrayContactos[indiceLugarLibre].apellido,auxiliarApellido);
                arrayContactos[indiceLugarLibre].legajo = auxiliarLegajo;

                break;

            case 2:
                printf("\nBAJA");
                if(!getStringNumerico("Ingrese el legajo a dar de baja",auxiliarLegajoStr))
                {
                    printf("\nEL LEGAJO NO PUEDE CONTENER LETRAS!!!");
                    break;
                }
                resultadoBusquedaIndice = buscarPrimerOcurrenciaEstructuras(arrayContactos,QTY_CONTACTOS,-1);

                if(resultadoBusquedaIndice == -1)
                {
                    printf("\n-------->>>>>NO SE ENCONTRO EL LEGAJO\n");
                    break;
                }
                arrayContactos[resultadoBusquedaIndice].legajo = -1;
                break;

            case 3:
                printf("\nMODIFICAR");
                if(!getStringLetras("Ingrese el legajo a modificar",auxiliarLegajoStr))
                {
                    printf("\nEL LEGAJO NO PUEDE CONTENER LETRAS!!!");
                    break;
                }
                resultadoBusquedaIndice = buscarPrimerOcurrenciaEstructuras(arrayContactos,QTY_CONTACTOS,atoi(auxiliarLegajoStr));

                if(resultadoBusquedaIndice == -1)
                {
                    printf("\n-------->>>>>NO SE ENCONTRO EL LEGAJO\n");
                    break;
                }
                if(!getStringLetras("Ingrese el nombre: ",auxiliarNombre))
                {
                    printf("\nEL NOMBRE DEBE CONTENER SOLO LETRAS!!!");
                    break;
                }
                if(!getStringLetras("Ingrese el apellido: ",auxiliarApellido))
                {
                    printf("\nEL APELLIDO DEBE CONTENER SOLO LETRAS!!!");
                    break;
                }

                strcpy(arrayContactos[resultadoBusquedaIndice].nombre,auxiliarNombre);
                strcpy(arrayContactos[resultadoBusquedaIndice].apellido,auxiliarApellido);

                break;

            case 4:
                break;


        }
    }while(opcion != 6);


    return 0;
}
