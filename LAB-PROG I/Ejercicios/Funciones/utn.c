#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int pedirEntero(char mensaje[])
{
    int auxiliar;
    printf("%s",mensaje);
    scanf("%d",&auxiliar);
    return auxiliar;
}

float pedirFloat(char mensaje[])
{
    float auxiliar;
    printf("%s",mensaje);
    scanf("%f",&auxiliar);
    return auxiliar;
}

char pedirCaracter(char mensaje[])
{
    char auxiliar;
    printf("%s",mensaje);
    fflush(stdin);//limpio basura (siempre para escanear un caracter se limpia el buffer)
    scanf("%c",&auxiliar);
    return auxiliar;
}

/*char numeroAleatorio(int desde, int hasta, int iniciar)
{
    if(iniciar)
        srand(time(NULL));
    return desde + rand()% (hasta + 1 - desde);
}*/


/** \brief Valida si el dato que recibe es numerico
 *
 * \param str[] char Array que va a ser analizado
 * \return int Retorna 1 si es numero y 0 si no lo es
 *
 */
int validarNumerico(char str[])
{
    int i=0;
    while(str[i] != '\0')//mientras no haya salto de linea
    {
        if(str[i] < '0' || str[i] > '9')
            return 0;
        i++;
    }

    return 1;
}

//------------------------------
/** \brief Valida que los datos recibidos sean numeros con guiones
 *
 * \param str[] char Array a ser analizado
 * \return int Retorna 1 si contiene numero,espacio y guion
 *
 */
int validarTelefono(char str[])
{
    int i=0;
    int contarGuiones = 0;
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

    return 0;
}

//--------------------------------
/** \brief Valida que el dato recibido sea alfanumerico
 *
 * \param str[] char Array que va a ser analizado
 * \return int Retorna 1 si es alfanumerico y 0 si no lo es
 *
 */
int validarAlfanumerico(char str[])
{
    int i=0;
    while(str[i] != '\0')
    {
        if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z') && (str[i] < '0' || str[i] > '9'))
            return 0;
            i++;
    }

    return 1;
}

//--------------------------------

/** \brief Valida que los datos recibidos contengan solo letras
 *
 * \param str[] char Array que va a ser analizado
 * \return int Retorna 1 si contiene solo ' ' y letras y 0 si no lo es
 *
 */
int validarSoloLetras(char str[])
{
    int i=0;
    while(str[i] != '\0')
    {
        if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
            return 0;
            i++;
    }

    return 1;
}
