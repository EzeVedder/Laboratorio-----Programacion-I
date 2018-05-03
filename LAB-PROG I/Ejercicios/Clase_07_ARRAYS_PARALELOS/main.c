#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define TAM 3

int main()
{
    char nombre[][30] = {"Martin","Eugenia","Ezequiel"};
    char apellido[][30] = {"Caparros","Wilde","Pane"};
    int i;
    int j;
    char aux[30];

    for(i=0;i<TAM;i++)
    {
        printf("%s %s\n",nombre[i],apellido[i]);
    }

    for(i=0;i<TAM-1;i++)
    {
        for(j=i+1;j<TAM;j++)
        {
            if(strcmp(nombre[i],nombre[j])>0)
            {
                strcpy(aux,nombre[i]);
                strcpy(nombre[i],nombre[j]);
                strcpy(nombre[j],aux);

                strcpy(aux,apellido[i]);
                strcpy(apellido[i],apellido[j]);
                strcpy(apellido[j],aux);
            }
        }
    }

    printf("\n\tLISTA ORDENADA ALFABETICAMENTE\n");
    for(i=0;i<TAM;i++)
    {
        printf("\n%s %s\n",nombre[i],apellido[i]);
    }

    return 0;
}
