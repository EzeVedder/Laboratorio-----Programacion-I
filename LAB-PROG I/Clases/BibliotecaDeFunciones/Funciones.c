#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

//Funcion para mostrar un numero float
float mostrarNumFloat(char mensaje[])
{

    float a;//defino la variable que retorna la funcion
    printf("%s", mensaje);
    scanf("%f", &a);
    printf("El numero ingresado es: %f\n",a);//imprimo msj + la variable ingresada

    return a;
}

//Funcion para sumar dos numeros
float sumarFloat(float n1,float n2)
{

    float suma;//defino la variable que retorna la funcion
    suma = (n1+n2);//operacion suma

    return suma;

}

//Funcion para restar dos numeros
float restarFloat(float n1,float n2)
{

    float resta;//defino la variable que retorna
    resta = n1-n2;

    return resta;

}

//Funcion para multiplicar dos numeros
float multiplicarFloat(float n1,float n2)
{

    float producto;//defino la variable que retorna
    producto = n1*n2;

    return producto;

}
//Funcion para dividir dos numeros
float funcionDividir(float a, float b)
{
    float division;
    if (b == 0) // Se habilita la condicion de IF, para qué en caso que se ingrese un numero negativo, avise del error.
    {
        printf("\nNo se puede dividir entre 0\n");
    }
    else
    {
    division = (float)a/b;
    }
    return division;
}
//Funcion para calcular factorial(Hay que castear el float)
int calcularFactorial(int a)
{

    int factorial = 1;
    int i;//esta es la variable de control (para controlar el for)
    if((int)a<=0)
    {
        printf("\nERROR!. No existe el factorial de un numero negativo ni de 0\n");
        return 0;
    }
    for(i = a; i >= 1; i--)
    {

        factorial = factorial*i;

    }
    return factorial;
}


//Funciones genericas para pedir y validar numeros

//ESTO ES UNA FUNCION GENERICA PARA PEDIR UN NUMERO ENTERO
int pedirEntero(char mensaje[], int min, int max)
{
    int numero;

    printf("Ingrese%s",mensaje);//%s es para una cadena (STRING)
    scanf("%d",&numero);

    numero = validarEntero(numero,min,max,mensaje);//LLAMADA A LA FUNCION PARA VALIDAR EL ENTERO DENTRO DEL RANGO PEDIDO

    return numero;
}

//FUNCION GENERICA PARA VALIDAR
int validarEntero(int dato,int min,int max,char mensaje[])
{
        while(dato < min || dato > max)
    {
        printf("Error Reingrese%s",mensaje);//%s es para una cadena (STRING)
        scanf("%d",&dato);
    }
    return dato;
}
