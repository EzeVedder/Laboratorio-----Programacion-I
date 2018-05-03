#include <stdio.h>
#include <stdlib.h>
#define T 10
#include <string.h>

//void ordenarNombre(char[],int[],float[],int);
int buscarInt(int[],int,int);

int main()
{
    int vectorInt[T] = {6,1,2,3,4};
    char vectorString[T][30] = {"Horacio","Ana","Maria","Pedro","Agustin"};
    float vectorFloat[T] = {5.3,2.3,2.3,3.4,5.5};
    //int i;
    int auxInt;
    float auxFloat;
    char auxStr[30];
    int i;//1er for
    int j;//2do for


    //BUSQUEDA DE VECTOR ENTERO
    auxInt = buscarInt(vectorInt,T,10);
    if(auxInt!=-1)
    {
        printf("%s\n",vectorString[auxInt]);
    }
    else
    {
        printf("El elemento no se encuentra en el array \n");
        printf("\n--------------------------------------- \n");
    }
    //-------------------------------

    //ORDENAMIENTO
    for(i=0;i<T; i++)//empiezo desde el primer elemento hasta el ultimo
    {
        for(j=i+1; j<T; j++ )//recorro el array desde donde esta parado i
        {
            if(strcmp(vectorString[i],vectorString[j])>0)//todo criterio se establece con un if
            {
                strcpy(auxStr,vectorString[i]);//copio lo que hay en descripcion de i y lo pego en aux
                strcpy(vectorString[i],vectorString[j]);
                strcpy(vectorString[j],auxStr);

                auxInt = vectorInt[i];
                vectorInt[i] = vectorInt[j];
                vectorInt[j] = auxInt;

                auxFloat = vectorFloat[i];
                vectorFloat[i] = vectorFloat[j];
                vectorFloat[j] = auxFloat;
            }//END IF
        }//2DO FOR
        printf("%d %5s %.1f\n",vectorInt[i],vectorString[i], vectorFloat[i]);
    }//PRIMER FOR

    return 0;
}

int buscarInt(int enteros[],int tam, int cual)
{
    int index = -1;
    int i;

    for(i=0;i<tam;i++)
    {
        if(enteros[i]==cual)
        {
            index = i;
            break;
        }
    }
    return index;
}
