#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include <conio.h>
#define TAMANIO 10


int main()
{
    int opcion;
    int i;

    do
    {
        menu();
        printf("\nElija una opcion: ");
        scanf("%d",&opcion);
        while(opcion <= 0 || opcion >= 12)
        {
            printf("\nERROR. %d NO ES UNA OPCION VALIDA!!!\n",opcion);
            printf("\nElija una opcion: ");
            scanf("%d",&opcion);
        }
            switch(opcion)
            {
                case 1:
                    for(i=0;i<TAMANIO;i++)
                    {


                    }

                    break;

                case 2:
                    break;

                case 3:
                    break;

                case 4:
                    break;

                case 5:
                    break;

                case 6:
                    break;

                case 7:
                    break;

                case 8:
                    break;

                case 9:
                    break;

                case 10:
                    break;

                default:
                    break;
            }

    }while(opcion != 11);


    printf("\nHASTA LUEGO...\n");
    return 0;
}


