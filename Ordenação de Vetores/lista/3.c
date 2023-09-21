#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char str[5] = "run";
    int minV = 1, maxV = 90;
    int v[60], cont = 0, i, j;
    int aux;
    srand(time(NULL));


    while (strcmp(str, "BINGO"))
    {

        int rndNum = rand() % (maxV - minV + 1) + minV;
        v[cont] = rndNum;
        printf("\nSorteado: %d", v[cont]);
        
        
        if(v[cont - 2] > v[cont - 1])
        {
            for (int i = 0; i < cont; i++)
            {

                for (int j = i+1; j < cont; j++)
                {
                
                    aux = v[i];
                    v[i] = v[j];
                    v[j] = aux;

                }
            }
        }


        
        printf("\nBingo? ");
        scanf("%s", str);
        strupr(str);
        cont++;

    }

    printf("\n\n\nExibindo Numeros Sorteados: ");
    for (int i = 0; i < cont; i++)
    {
        printf("\nSorteado: %d", v[i]);
    }

}