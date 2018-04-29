#include <stdio.h>
#include <stdlib.h>
#include <conio.h>//biblioteca getche
#define T 5//no es constante es una direcetiva del precompilador
#include <string.h>//para traer la funcion strcmp

int buscarLibre(int[],int);
void mostrarProductos(int[],char[][50],int[],float[],int);//char para la descripcion
void ordenarProductos(int[],char[][50],int[],float[],int);

int main()
{
    int idProducto[T] = {};
    char descripcion[T][50];//dos dimensiones para definir la cantdad de descripcion que quiero guardar se utiliza una matriz el 50 defina la columna
    int stock[T];
    float precioUnitario[T];
    int opcion;
    int posicion;//donde guardo el dato
    //char seguir='s';//para cortar el while
    //int i;
    do
    {
        printf("\n1.Cargar\n2.Mostrar\n3.Ordenar\n");
        printf("Ingrese una opcion: ");
        scanf("%d",&opcion);
        switch(opcion)
        {
        case 1:
            //do
           // {
            printf("CARGO\n");
            //llamar funcion buscar libre
                posicion = buscarLibre(idProducto,T);
            if(posicion!=-1)
            {
                //printf("\nIngrese la posicion: "); //CON LA FUNCION BUSCAR LIBRE BUSCA SOLO SI HAY LUGAR
                //scanf("%d",&posicion);
                printf("Ingrese ID: ");
                scanf("%d",&idProducto[posicion]);//-1//siempre guardo en la posicion -1 por el desfasaje
                printf("Stock: ");
                scanf("%d",&stock[posicion]);//-1
                printf("Precio unitario: ");
                scanf("%f",&precioUnitario[posicion]);//-1
                printf("Ingrese descripcion: ");
                fflush(stdin);//esta cargado el buffer por eso limpio
                //gets(descripcion[posicion-1];OTRA MANERA DE HACERLO---->
                scanf("%[^\n]",descripcion[posicion]);//-1//expresion regular cumple la misma funcion que el gets
                //printf("Desea continuar? (s/n): ");
                //seguir = getche();
            }
            else
            {
                printf("No hay espacio");
            }
            //}while(seguir=='s');
            /*pedir posicion
            2-pedir el dato
            3-preguntar si queiere cargar otro*/
            break;

        case 2:
            printf("MUESTRO\n");
            mostrarProductos(idProducto,descripcion,stock,precioUnitario,T);
            /*
            mostrar cada vector paralelo
             */
            break;
        case 3:
            printf("Ordenar\n");
            break;

        system("pause");
        system("cls");

        }
    }while(opcion<=9);


    return 0;
}


int buscarLibre(int id[],int tam)
{
    int index = -1;
    int i;
    for(i=0;i<tam;i++)
    {
        if(id[i]==0)
        {
            index = i;
            break;
        }
    }

    return index;

}

void mostrarProductos(int idProducto[],char descripcion[][50],int stock[],float precioUnitario[],int cantidad)
{
    int i;
    for(i=0;i<cantidad; i++)
    {
        if(idProducto[i]!=0)//para que no muestre nada si no hay datos cargados
        {
        printf("%5d %20s %5d %5.2f\n %d",idProducto[i],descripcion[i],stock[i],precioUnitario[i],cantidad);
        }
    }
}


void ordenarProductos(int idProducto[],char descripcion[][50],int stock[],float precioUnitario[],int cant)
{
    int auxInt;
    float auxFloat;
    char auxStr[50];
    int i=0;//1er for
    int j=0;//2do for

    for(i=0;i<cant-1; i++)//empiezo desde el primer elemento hasta el ultimo
    {
        for(j=i+1; j<cant; j++ )//recorro el array desde donde esta parado i
        {
            if(strcmp(descripcion[i],descripcion[j])>0)//todo criterio se establece con un if
            {
                strcpy(auxStr,descripcion[i]);//copio lo que hay en descripcion de i y lo pego en aux
                strcpy(descripcion[i],descripcion[j]);
                strcpy(descripcion[j],auxStr);

                auxInt = idProducto[i];
                idProducto[i] = idProducto[j];
                idProducto[j] = auxInt;

                auxInt = stock[i];
                stock[i] = stock[j];
                stock[j] = auxInt;

                auxFloat = precioUnitario[i];
                precioUnitario[i] = precioUnitario[j];
                precioUnitario[j] = auxFloat;
            }

        }

    }

}




