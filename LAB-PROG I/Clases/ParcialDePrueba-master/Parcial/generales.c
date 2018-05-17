#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#include "generales.h"

int Menu(void)
{
    int opcion;
    system("cls");
    printf("\nQue desea hacer?\n\n");
    printf("1-Alta Propietario\n");
    printf("2-Modificar Tarjeta de Credito\n");
    printf("3-Baja Propietario\n");
    printf("4-Ingreso Automovil\n");
    printf("5-Egreso Automovil\n");
    printf("6-Listas\n");
    printf("7-Recaudaciones\n");
    printf("8-Buscar Propietario\n");
    printf("0-Salir~\n\n");

    printf("Ingrese opcion: ");
    fflush(stdin);
    scanf("%d",&opcion);
    system("cls");

    return opcion;
}

// INICIALIZACIONES.
void inicializarPropietarios(ePersona persona[],int t)
{
    for(int i=0; i<t; i++)
    {
        persona[i].estado=0;
    }
}

void inicializarAutos(eAuto autos[],int t)
{
    for(int i=0; i<t; i++)
    {
        autos[i].estado=0;
    }
}



int mostrarUnaPersona(ePersona persona)
{
    printf("%15d %15s %20s %20s\n", persona.idPersona, persona.nombreCompleto, persona.direccion, persona.tarjeta);

}


void mostrarListaPersonas(ePersona persona[], int t)
{
    int retorno = -1;
    int i;
    if(t > 0 && persona != NULL)
    {
        retorno = 0;
        for(i=0; i<t; i++)
        {
        if(persona[i].estado==1)
            {
            mostrarUnaPersona(persona[i]);
            }
        }
    }
    return retorno;
}



int obtenerEspacioLibrePersona(ePersona persona[], int t)
{
    int retorno = -1;
    int i;
    if(t > 0 && persona != NULL)
    {
        retorno = -2;
        for(i=0;i<t;i++)
        {
            if(persona[i].estado == 0)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}


int altaDePersonas(ePersona persona[],int t)
{
    int retorno =-1;
    int i;

    int id;
    char auxiliarID[50];

    char auxiliarEdad[50];
    int edad;

    i = obtenerEspacioLibrePersona(persona, t);
    if(i>=0)
    {
        //Pedir el nombre
        printf("Ingrese un nombre: ");
        fflush(stdin);
        gets(persona[i].nombreCompleto);
        stringToUpper(persona[i].nombreCompleto); // LLAMADA A LA FUNCION PARA 1ER LETRA MAYUSCULA.
        //Validar que se haya pedido el nombre.
        while(esSoloLetras(persona[i].nombreCompleto)==0)
        {
            printf("Usted ha ingresado un tipo de nombre incorrecto. Ingrese nuevamente: ");
            fflush(stdin);
            gets(persona[i].nombreCompleto);
        }


        //Pedir el direccion
        printf("Ingrese la direccion: ");
        fflush(stdin);
        gets(persona[i].direccion);
        stringToUpper(persona[i].direccion); // LLAMADA A LA FUNCION PARA 1ER LETRA MAYUSCULA.
        //Validar que se haya pedido la direccion.
        while(esAlfaNumerico(persona[i].direccion)==0)
        {
            printf("Usted ha ingresado una direccion incorrecta. Ingrese nuevamente:");
            fflush(stdin);
            gets(persona[i].direccion);
        }


        //Pedir tarjeta
        printf("Ingrese la tarjeta de credito: ");
        fflush(stdin);
        gets(persona[i].tarjeta);
        //Validar que se haya ingresado una tarjeta correcta.
        while(esAlfaNumerico(persona[i].tarjeta)==0)
        {
            printf("Usted ha ingresado una tarjeta incorrecta. Ingrese nuevamente:");
            fflush(stdin);
            gets(persona[i].tarjeta);
        }

        //Forzar el estado a 1
        persona[i].estado=1;

        // Incrementar ID
        persona[i].idPersona = idAutoIncrementalEstructura(persona, t);

        retorno=0;
        printf("\nEL USUARIO FUE INGRESADO CON EXITO!\n\n");
        mostrarListaPersonas(persona, t);
    }
    else
    {
        printf("\nNo quedan lugares libres!\n");
    }
    return retorno;
}


void modificarPersona(ePersona persona[], int t)
{
    int i;
    int opcion;
    int opcion2;
    mostrarListaPersonas(persona, t);

    printf("Ingrese el ID del usuario a modificar.\n");
    scanf("%d",&opcion);

    for(i=0; i<t; i++)
    {
        if(opcion==persona[i].idPersona)
        {
            printf("Que desea modificar\n 1-TARJETA DE CREDITO\n");
            scanf("%d",&opcion2);

            switch(opcion2)
            {
            case 1:
                printf("INGRESE SU NUEVA TARJETA DE CREDITO\n");
                fflush(stdin);
                gets(persona[i].tarjeta);
                break;
            default:
                printf("Usted ingreso una opcion invalida. Vuelva a intentarlo nuevamente\n");
                break;
            }

        }

    }

}


int bajaDePersonas(ePersona persona[],int t)
{
    int i;
    int opcion;
    int opcion2;
    mostrarListaPersonas(persona, t);

    printf("\nIngrese el ID del usuario que quiera borrar. Si introduce un DNI erroneo, el programa comenzara nuevamente.\n");
    scanf("%d",&opcion);

    for(i=0; i<t; i++)
    {
        if(opcion==persona[i].idPersona)
        {
            printf("¿Desea dar de baja el usuario? Ingrese 1 para SI // Ingrese 2 para NO.\n");
            scanf("%d",&opcion2);

            switch(opcion2)
            {
            case 1:
                persona[i].estado = 0;
                persona[i].idPersona= 0;
                printf("El usuario ha sido dado de baja.\n");
                break;
            case 2:
                printf("No se ha modificado ningun usuario.\n");
                break;
            default:
                printf("Usted ingreso una opcion invalida. Vuelva a intentarlo nuevamente.\n");
                break;
            }

        }
    }

}

//************GETS****************//
int getInt (char mensaje[])
{
    int auxiliarInt;
    printf("%s", mensaje);
    scanf("%d", &auxiliarInt);
    return auxiliarInt;
}

char getChar (char mensaje[])
{
    char auxiliarChar;
    printf("%s", mensaje);
    fflush(stdin);
    scanf("%s", &auxiliarChar);
    return auxiliarChar;
}

float getFloat(char mensaje[])
{
    float auxiliarFloat;
    printf("%s", mensaje);
    scanf("%f", &auxiliarFloat);
    return auxiliarFloat;
}

///////////////////////////////////////////////////////////////////


//************VALIDACIONES****************//
void stringToUpper(char caracter[])
{
    int i;
    int largo;
    caracter[0]=toupper(caracter[0]);
    largo=strlen(caracter);
    for(i=0;i<largo;i++)
    {
        if(caracter[i]==' ')
        {
            i=i+1;
            caracter[i]=toupper(caracter[i]);
        }
    }
    return caracter;
}



int esNumerico (char str[])
{
    int i=0;
    while (str[i] != '\0')
    {
        if (str[i] < '0' || str[i] > '9')
        return 0;
        i++;
    }
    return 1;
}



int esTelefono(char str[])
{
    int i=0;
    int contadorGuiones = 0;
    while (str[i] != '\0')
    {
        if ((str[i] != ' ') && (str[i] != '-') && (str[i] < '0' || str[i] > '9'))
            return 0;
        if (str[i] == '-')
            contadorGuiones++;
        i++;
    }
    if (contadorGuiones==1)
        return 1;
        return 0;
}



int esSoloLetras(char str[])
{
    int i=0;
    while (str[i] != '\0')
    {
        if((str[i] != ' ') && (str[i] <  'a' || str [i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
        return 0;
        i++;
    }
    return 1;
}



int esAlfaNumerico(char str[])
{
    int i=0;
    while (str[i] != '\0')
    {
        if((str[i] != ' ') && (str[i] <  'a' || str [i] > 'z') && (str[i] < 'A' || str[i] > 'Z') && (str[i] < '0' || str[i] > '9'))
        return 0;
        i++;
    }
    return 1;
}



void getString(char mensaje[], char input[])
{
    printf(mensaje);
    scanf("%s", mensaje);
}



int getStringLetras(char mensaje[], char input[])
{
    char auxiliar[256];
    getString(mensaje, auxiliar); // (Se llama a la funcion de arriba)
    if(esSoloLetras(auxiliar))
    {
        strcpy(input, auxiliar);
        return 1;
    }

    return 0;
}


int getStringNumeros(char mensaje[], char input[])
{
    char auxiliar[256];
    getString(mensaje, auxiliar); // (Se llama a la funcion de arriba)
    if(esNumerico(auxiliar))
    {
        strcpy(input, auxiliar);
        return 1;
    }

    return 0;
}

/////////////////////////////////////////////////////////////////////////








//************VALIDACIONES PESADAS****************//
int validarStringEntero(char datoAValidar[])
{
    int A;
    int validar;
    validar=strlen(datoAValidar);
    int i;
    for(i=0;i<validar;)
    {
        if(isdigit(datoAValidar[i])==0||datoAValidar[i]==' ')
        {
            do
            {
                printf("\nIngresa un numero valido ");
                gets(datoAValidar);
                validar=strlen(datoAValidar);
                fflush(stdin);
            }
            while(isdigit(datoAValidar[i])==0||datoAValidar[i]==' ');
        }
        else
        {
            i=i+1;
        }
    }
    A=atoi(datoAValidar);
    return A;
}



char validarStringCadena(char datoAValidar[])
{
    int validar;
    validar=strlen(datoAValidar);
    int i;
    for(i=0;i<validar;)
    {
        if(isalpha(datoAValidar[i])==0&&datoAValidar[i]!=' ')
        {
            do
            {
                printf("\nIngresa una palabra valida ");
                gets(datoAValidar);
                validar=strlen(datoAValidar);
                fflush(stdin);
            }
            while(isalpha(datoAValidar[i])==0);
        }
        else if(datoAValidar[0]== ' ')
        {
            do
            {
                printf("\nIngresa una palabra valida ");
                gets(datoAValidar);
                validar=strlen(datoAValidar);
                fflush(stdin);
            }
            while(datoAValidar[0]==' ');
        }
        else
        {
            i=i+1;
        }

    }
    return datoAValidar;
}



char validarStringCaracter(char datoAValidar)
{
        if(isalpha(datoAValidar)==0||datoAValidar==' ')
        {
            do
            {
                printf("\nIngresa un caracter valido ");
                scanf("%c",&datoAValidar);
                fflush(stdin);
            }
            while(isalpha(datoAValidar)==0||datoAValidar==' ');
        }
        return datoAValidar;
}



float validarStringFloat(char datoAValidar[])
{
    float numero;
    int validar;
    validar=strlen(datoAValidar);
    int i;
    for(i=0;i<validar;)
    {
        if(isdigit(datoAValidar[i])==0)
        {
            do
            {
                printf("\nIngresa un numero valido ");
                gets(datoAValidar);
                validar=strlen(datoAValidar);
                fflush(stdin);
            }
            while(isdigit(datoAValidar[i])==0);
        }
        else
        {
            i=i+1;
        }
    }
    numero=atof(datoAValidar);
    return numero;
}

/////////////////////////////////////////////////////////////////////////

int idAutoIncrementalEstructura(ePersona persona[],int t)
{
    int contador=0;
    int i;
    for(i=0;i<t;i++)
    {
        if(persona[i].estado==1||persona[i].estado==2)
        {
            contador=contador+1;
        }
    }
    return contador;
}
