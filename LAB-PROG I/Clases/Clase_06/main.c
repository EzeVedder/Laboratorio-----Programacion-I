#include <stdio.h>
#include <stdlib.h>

int contarPares(int[],int);

/** \brief Determin
 *
 * \param char[]
 * \param char
 * \return char
 *
 */
int buscarChar(char[],int,char);


int main()
{
    int vector[5]={2,2,9,6,5};
    char letras[5] = {'f','g','h','s','a'};
    int indexLetra;
    int cantidad;

    cantidad = contarPares(vector, 5);
    indexLetra = buscarChar(letras,5,'a');
    if(indexLetra == -1)
    {
        printf("No se encontro el caracter \n");
    }
    else
    {
        printf("El caracter se encuentra en el array \n");
    }

    printf("Cantidad de pares: %d\n", cantidad);
    printf("Caracter encontrado: %c\n",indexLetra);
    return 0;
}

int contarPares(int array[],int cantidad)
{
    int contarPares = 0;
    int i;

    for(i=0; i<cantidad; i++)
    {
        if(array[i]%2==0)
            {
                contarPares++;
            }
    }
    return contarPares;
}

int buscarChar(char array[], int cantidad, char caracter)
{
    int index = -1;//se inicia e -1 para que entre en el array el caracter que busco
    int i;
    for(i=0;i<cantidad;i++)
    {
        if(array[i]==caracter)
        {
            index = i;
            break;//rompe la estructura repetitiva
        }

    }//end for
    return index;
}

