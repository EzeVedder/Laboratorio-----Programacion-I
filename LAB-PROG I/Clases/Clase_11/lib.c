#include <stdio.h>
#include <conio.h>


void menu(void)
{
    int opcion;
    int continuar = 0;

    do
    {
        printf("\t MENU DE OPCIONES\n");
        printf("\n1.ALTA DE USUARIO\n2.MODIFICAR DATOS DE USUARIO\n3.BAJA DE USUARIO\n4.PUBLICAR PRODUCTO\n5.MODIFICAR PUBLICACION\n6.CANCELAR PUBLICACION\n7.COMPRAR PRODUCTO\n8.LISTAR PUBLICACIONES DE USUARIO\n9.LISTAR PUBLICACIONES\n10.LISTAR USUARIOS\n11.SALIR\n");
        printf("\nElija una opcion: \n");
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
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

    }while(continuar != 11);
}

