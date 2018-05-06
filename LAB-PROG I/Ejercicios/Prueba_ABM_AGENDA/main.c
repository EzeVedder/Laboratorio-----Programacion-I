#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "validaciones.h"
#define OPCION 20

#define QTY_CLIENTES 200



void inicializarArray(int array[],int cantidad_de_elementos,int valor);
int buscarPrimerOcurrencia(int array[],int cantidad_de_elementos,int valor);


int main()
{
    //array para guardar la informacion
    char arrayNombres[QTY_CLIENTES][50];//TAMANIO DE LA AGENDA Y CANTIDAD DE CARACTERES QUE PERMITE CADA INDICE
    char arrayApellidos[QTY_CLIENTES][50];
    int arraylegajos[QTY_CLIENTES];//TAMANIO DE LEGAJOS ES IGUAL A CANTIDAD DE CLIENTES QUE EXISTAN
    //-------------------------------------------------------

    char auxNombres[50];
    char auxApellidos[50];
    char auxLegajoStr[50];//para copiar los datos de legajo en el array del contacto
    int auxLegajo;

    int indiceLugarLibre;
    int indiceResultadoBusqueda;

    int opcion = 0;
    int eliminarLegajo;
    int i;

    inicializarArray(arraylegajos,QTY_CLIENTES,-1);//inicializamos en -1 todos los indices del array - POSICION VACIA
    do
    {
        printf("\n\t AGENDA DE CONTACTOS\n\n");
        opcion = getInt("1.CREAR CONTACTO\n2.ELIMINAR CONTACTO\n3.MODIFICAR CONTACTO\n4.MOSTRAR CONTACTOS\n5.ORDENAR\n6.SALIR\n");

        switch(opcion)
        {
            case 1:

                indiceLugarLibre = buscarPrimerOcurrencia(arraylegajos,QTY_CLIENTES,-1);
                if(indiceLugarLibre == -1)
                {
                    printf("\n\nNO HAY LUGARES LIBRES!!!\n");
                    break;
                }
            printf("\nALTA DE CONTACTOS\n");
            if(!getStringLetras("Ingrese el nombre: ",auxNombres))
            {
                printf("\nEl nombre debe estar compuesto solo por letras!!!\n");
                break;
            }
            if(!getStringLetras("Ingrese el apellido: ",auxApellidos))
            {
                printf("\nEl apellido debe estar compuesto solo por letras!!!\n");
                break;
            }
            if(!getStringNumerico("Ingrese el legajo: ",auxLegajoStr))
            {
                printf("\nEl legajo no puede contener letras!!!\n");
                break;
            }
            auxLegajo = atoi(auxLegajoStr);//atoi es una funcion como el parseInt en javaScript

            if(buscarPrimerOcurrencia(arraylegajos,QTY_CLIENTES,auxLegajo) != -1)
            {
                printf("\n\nEL LEGAJO YA EXISTE!!!\n");
                break;
            }
            strcpy(arrayNombres[indiceLugarLibre],auxNombres);
            strcpy(arrayApellidos[indiceLugarLibre],auxApellidos);
            arraylegajos[indiceLugarLibre] = auxLegajo;
            printf("\n----->>>>CONTACTO CREADO SATISFACTORIAMENTE!!!\n");


                break;
            case 2:
                printf("\nBAJA DE CONTACTOS\n");
                if(!getStringNumerico("Ingrese el legajo a dar de baja: ",auxLegajoStr))
                {
                    printf("El legajo no puede contener letras\n");
                    break;
                }
                indiceResultadoBusqueda = buscarPrimerOcurrencia(arraylegajos,QTY_CLIENTES,atoi(auxLegajoStr));
                if(indiceResultadoBusqueda == -1)
                {
                    printf("\n\nNO SE ENCUENTRA EL LEGAJO\n");
                    break;
                }
                eliminarLegajo = getStringLetras("\nEsta seguro que desea eliminar el legajo? s/n ",auxLegajoStr);
                if(eliminarLegajo == 1)
                {
                    arraylegajos[indiceResultadoBusqueda] = -1;
                    printf("\n----->>>>LEGAJO ELIMINADO SATISFACTORIAMENTE!!!\n");
                }
                break;
            case 3:
                printf("\nMODIFICAR CONTACTOS\n");
                if(!getStringNumerico("Ingrese el legajo a modificar: ",auxLegajoStr))
                {
                    printf("\n\nEl legajo no puede contener letras\n");
                    break;
                }

                indiceResultadoBusqueda = buscarPrimerOcurrencia(arraylegajos,QTY_CLIENTES,atoi(auxLegajoStr));
                if(indiceResultadoBusqueda == -1)
                {
                    printf("\n\nNO SE ENCUENTRA EL LEGAJO\n");
                    break;
                }
                if(!getStringLetras("Ingrese el nombre: ",auxNombres))
                {
                    printf("\nEl nombre debe estar compuesto solo por letras!!!\n");
                    break;
                }
                if(!getStringLetras("Ingrese el apellido: ",auxApellidos))
                {
                    printf("\nEl apellido debe estar compuesto solo por letras!!!\n");
                    break;
                }
                strcpy(arrayNombres[indiceResultadoBusqueda],auxNombres);
                strcpy(arrayApellidos[indiceResultadoBusqueda],auxApellidos);
                printf("\n----->>>>LA MODIFICACION SE REALIZO SATISFACTORIAMENTE!!!\n");
                break;
            case 4:
                printf("\nMOSTRAR CONTACTOS\n");
                mostrarContactos(arrayNombres,arrayApellidos,arraylegajos,QTY_CLIENTES);
                break;
        }

    }while(opcion != 6);

    printf("------>>>Hasta luego...\n");

    return 0;
}




void mostrarMenu(void)
{
    printf("\n\t AGENDA DE CONTACTOS\n\n");
    printf("1.CREAR CONTACTO\n2.ELIMINAR CONTACTO\n3.MODIFICAR CONTACTO\n4.MOSTRAR CONTACTOS\n5.SALIR\n");

}



void inicializarArray(int array[],int cantidad_de_elementos,int valor)
{
    int i;
    for(i=0;i<cantidad_de_elementos;i++)
    {
        array[i] = valor;
    }

}

int buscarPrimerOcurrencia(int array[],int cantidad_de_elementos,int valor)
{
    int i;
    for(i=0;i<cantidad_de_elementos;i++)
    {
        if(array[i] == valor)
        {
            return i;
        }
    }

    return -1;
}

