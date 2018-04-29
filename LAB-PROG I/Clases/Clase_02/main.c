int main()
{
    /*Se ingresan numeros (distintos de cero), no se sabe cuantos. (WHILE)
    *Se pide mostrar:
    *Cant de numeros pares e impares.
    *Porcentaje de numeros positivos y negativos.
    *Maximo y Minimo.
    *Maximo numero par.
    *Cantidad de numeros comprendidos entre 125 y 236.*/

    char rta = 's';
    int numero;
    int numPares = 0;
    int numImpares = 0;
    int contador;
    int numPosit = 0;
    int porcPosit;
    int numNegat = 0;
    int porcNegat;
    int numMax;
    int numMin;
    int flag = 0;
    int flagPar = 0;
    int maxPar;
    int numEntre = 0;

    while(rta != 'n')
    {
        printf("Elija un numero \n");
        scanf("%d",&numero);
        while(numero == 0)
        {
            printf("Elija un numero distinto de cero\n");
            scanf("%d",&numero);
        }
            if(numero %2 == 0)
                {
                    numPares++;
                    if(flagPar == 0)
                    {
                        maxPar = numero;
                        flagPar = 1;
                    }
                    else
                    {
                        if(numero > maxPar)
                    {
                        maxPar = numero;
                    }
                    }
                }
            else
                {
                    numImpares++;
                }
            if(numero > 0)
                {
                    numPosit++;
                }
            else
                {
                    numNegat++;
                }
            if(flag == 0 || numero > numMax)
            {
                numMax = numero;
            }
            if(flag == 0 || numero < numMin)
            {
                numMin = numero;
                flag = 1;
            }
            if(numero >= 125 && numero <=236)
            {
                numEntre++;
            }

        contador = numPosit + numNegat;
        porcPosit = (numPosit * 100) / contador;
        porcNegat = 100 - porcPosit;




        printf("Desea continuar?\n");
        rta = getch();
    }

    printf("La cantidad de numeros pares es: %d y la cantidad de numeros impares es: %d\n",numPares,numImpares);
    printf("El porcentaje de numeros positivos es: %d y el porcentaje de numeros negativos es: %d\n",porcPosit,porcNegat);
    printf("El numero maximo es: %d y el numero minimo es: %d\n",numMax,numMin);
    printf("La cantidad de numeros comprendidos entres 125 y 236 es: %d",numEntre);










}





