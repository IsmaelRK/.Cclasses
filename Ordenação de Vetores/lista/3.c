#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

main()
{
    char str[5] = "n/a";
    int minV = 1, maxV = 90;
    int v[60], cont = 0, i, j;


    srand(time(NULL));

    while (str != "BINGO")
    {

        int rndNum = rand() % (maxV - minV + 1) + minV;
        printf("%d", rndNum);

        for (i = 0; i < 60; i++)
        {

            for (j = i + 1; j < 60; j++)
            {
                
            }

        }

        v[i] = rndNum

        
        printf("\nBingo? ");
        scanf("%s", str);
        cont++
    }
    

    
    

}