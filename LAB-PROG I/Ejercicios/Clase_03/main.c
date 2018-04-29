#include <stdio.h>
#include <stdlib.h>


/** \brief Funcion que pide un numero al usuario
 *
 * \return float Retorna el numero elegido por el usuario
 *
 */
float pedirNumero();
/** \brief Recibe el radio de un numero para calcular el area
 *
 * \param float Radio
 * \return float Retorna el area
 *
 */
float calcularAreaCirculo(float);


int main()
{
    float area;//tambien se puede hacer un auxiliar y ese parametro se lo pasamos a la funcion calcularArea
    area = pedirNumero();
    area = calcularAreaCirculo(area);
    printf("El area del circulo es: %.2f",area);


    return 0;
}



float pedirNumero()
{
    float auxiliar;
    printf("Ingrese un numero:");
    scanf("%f",&auxiliar);
    return auxiliar;
}

float calcularAreaCirculo(float radio)
{
    float resultado;
    resultado = 3.14 * radio * radio;//las comas son reemplazadas por puntos en los nros decimales
    return resultado;
}

