#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* pArchivo;//donde se ubica el archivo - como se gestiona PUNTERO AL ARCHIVO
    char cadena[50] = "hola ";//abrirlo usarlo y cerrarlo  --> se pueden perder datos

    /*hay que poner el path si quiero que busque en carpeta en concreto raiz del proyecto
    secuencia de escape -->la W es ek modo de apertura del archivo*/

    pArchivo = fopen("archivo.txt","w");

    if(pArchivo!= NULL)
    {
        fprintf(pArchivo,"%s--%d",cadena,156);//funcion para texto
        fprintf(pArchivo,"Otra cadena");
        fclose(pArchivo);
        printf("Guardado!");
    }
    else
    {
        printf("Imposible guardar");
    }

    pArchivo = fopen("archivo.txt","r");

    if(pArchivo!= NULL)
    {
        while(!feof(pArchivo))
        {
            fgets(cadena,50,pArchivo);
            puts(cadena);  //leo el archivo traigo la info proceso la info y vuelvo a volcar datos en el archivo
        }
        fclose(pArchivo);
    }






    return 0;
}
