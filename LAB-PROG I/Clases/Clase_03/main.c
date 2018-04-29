#include <stdio.h>
#include <stdlib.h>


/*Declaracion de la funcion | prototipo de la funcion

    Tipo_de_dato_que_devuelve

    Tipo_de_dato_devuelto identificador (parametros de entrada);
    int,float,char,void,double,long

    Identificador

    nombre representativo_ verbo + objeto

    Parametros de entrada

    declaro una variable por cada parametro que recibe la funcion*/


    int mostrarEincrementar(int);

int main()
{
    int numero;
    int incremento;
    printf("Ingrese un numero \n");
    scanf("%d",&numero); //parametro actual

    //llamada a la funcion
    incremento = mostrarEincrementar(numero);

    printf("\nEl numero incrementado es: %d",incremento);

    return 0;
}

//Desarrollo o Implementacion de la funcion

int mostrarEincrementar(int numero) //parametro formal
{
    int retorno;
    printf("El numero ingresado es: %d",numero);

    retorno = numero + 10;

    return retorno;

}



