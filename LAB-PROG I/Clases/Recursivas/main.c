#include <stdio.h>
#include <stdlib.h>




/*  int numero =5;
    int i;
    int factor = 1;

    for (i = numero;i >=1; i--)
    {
        factor = factor * i;
    }
    printf("El factorial del numero ingresado es: %d\n",factor);
*/

/** \brief calcula el factorial de un numero
 *
 * \param int Recibe un numero
 * \return int Devuelvo el numero factorial del numero recibido como parametro
 *
 */
int factorial(int);

int main()
{
    int numero = 5;
    int factor;

    factor = factorial(numero);
    printf("El factorial del numero ingresado es: %d",factor);

    return 0;
}

/*FUNCION RECURSIVA
QUE EXISTAN LAS FUNCIONES RECURSIVAS NO SIGNIFICA QUE HAY QUE UTILIZARLAS
ESTE TIPO DE FUNCION PUEDE PRODUCIR UN STACK OVERFLOAW (DESBORDAMIENTO DE PILA)POR LOS BYTES QUE TIENE
QUE GUARDAR PARA CADA VARIABLE CALCULADA*/
int factorial(int numero)
{
    int respuesta;
    if(numero == 0)
    {
        respuesta = 1;
    }
    else
    {
        respuesta = numero * factorial(numero - 1);
    }
    return respuesta;

}
