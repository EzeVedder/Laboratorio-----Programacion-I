#include <stdio.h>
#include <stdlib.h>
#define TAM 3

int main()
{
    char nombre[][30] = {"Martin","Eugenia","Ezequiel"};
    char apellido[][30] = {"Caparros","Wilde","Pane"};
    int i;

    for(i=0;i<TAM;i++)
    {
        printf("%s %s\n",nombre[i],apellido[i]);
    }



    return 0;
}
