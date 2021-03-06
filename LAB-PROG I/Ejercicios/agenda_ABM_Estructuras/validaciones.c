#include "validaciones.h"
#include <stdio.h>
#include <string.h>


int validarNumero(char str[])
{
    int i=0;

    while(str[i] != '\0')
    {
        if(str[i] < '0' || str[i] > '9')
            return 0;
        i++;
    }
    return 1;
}
//--------------------------------------
int validarSoloLetras(char str[])
{
    int i=0;

    while(str[i] != '\0')
    {
        if((str[i] != ' ' ) && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
            return 0;
        i++;
    }

    return 1;
}
//--------------------------------------
int validarAlfanumerico(char str[])
{
    int i=0;

    while(str[i] != '\0')
    {
            if((str[i] != ' ') && (str[i] < '0' || str[i] > '9') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
            return 0;
        i++;
    }

    return 1;
}
//--------------------------------------
int validarTelefono(char str[])
{
    int i=0;
    int contarGuiones=0;

    while(str[i] != '\0')
    {
        if((str[i] != ' ') && (str[i] != '-') && (str[i] < '0' || str[i] > '9'))
            return 0;
        if(str[i] == '-')
            contarGuiones++;
        i++;
    }
    if(contarGuiones == 1)
        return 1;

    return 0 ;
}
//----------------------------------------------

void getString(char mensaje[],char input[])
{
    printf("%s",mensaje);
    scanf("%s",input);
}

int getStringLetras(char mensaje[],char input[])
{
    char aux[256];
    getString(mensaje,aux);
    if(validarSoloLetras(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;

}

int getStringNumerico(char mensaje[],char input[])
{
    char aux[256];
    getString(mensaje,aux);
    if(validarNumero(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}

int getInt(char mensaje[])
{
    int aux;
    printf(mensaje);
    scanf("%d",&aux);

    return aux;
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
//estructuras---------
void inicializarArrayContactos(eContactos arrayContactos[],int cantidadDeElementos,int valor)
{
    int i;
    for(i=0; i < cantidadDeElementos; i++)
    {
        arrayContactos[i].legajo = valor;
    }
}

int buscarPrimerOcurrenciaEstructuras(eContactos arrayContactos[],int cantidadDeElementos,int valor)
{
    int i;
    for(i=0; i < cantidadDeElementos; i++)
    {
        if(arrayContactos[i].legajo == valor)
        {
            return i;
        }
    }
    return -1;
}
