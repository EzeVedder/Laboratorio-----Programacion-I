#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Edad;//18-60  Esta no es la misma variable que declare en la funcion
    int Legajo;//1-1050
    int Nota;//0-10

    Edad = pedirEntero(" edad: ",18,60);
    Legajo = pedirEntero(" legajo: ",1,1050);
    Nota = pedirEntero(" nota ",1,10);
    printf("La edad es: %d, el legajo es: %d y la nota es: %d",Edad,Legajo,Nota);

    return 0;
}



