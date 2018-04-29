#include <stdio.h>
#include <stdlib.h>

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

char numeroAleatorio(int desde, int hasta, int iniciar)
{
    if(iniciar)
        srand(time(NULL));
    return desde + rand()% (hasta + 1 - desde);
}
