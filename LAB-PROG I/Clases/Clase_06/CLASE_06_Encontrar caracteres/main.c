#include <stdio.h>
#include <stdlib.h>

int contarPares(int[], int); //Formales

/** \brief determina si un caracter esta o no esta dentro del array
 *
 * \param char[] coleccion de caracteres
 * \param int tamaño de la coleccion
  * \param char[] caracter a buscar
 * \return int -1 si no lo encuentra, o el indice del valor encontrado
 *
 */

int buscarChar(char[], int, char);

int main()
{
    int vector[5]={5,2,9,6,5};

    int a = 9;
    int b = 5;
    int c;  // Para descargar uno de los valores.

    //Se llama swap (intercambio)
    c = a;
    a = b;
    b = c;

    printf("a = %d -- b = %d", a, b);

    return 0;
}


int contarPares(int array[], int cantidad) // Llamada
{
    int contPares = 0;
    int i;
    for(i=0; i<cantidad; i++)
    {
        if(array[i]%2==0)
        {
            contPares++;
        }

    }
    return contPares;
}

int buscarChar(char array[], int cantidad, char caracter)
{
    int index = -1;
    int i;
    for(i=0; i<cantidad; i++)
    {
        if(array[i]==caracter)
        {
            index = i;
            break;
        }
    }

    return index;
}
