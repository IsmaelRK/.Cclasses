#include <stdio.h>

main(){

    int p[5], i[5], i_p=0, i_i=0, input, cont, whlcont=0;

    while (whlcont < 30)
    {
        printf("\nDigite o valor: ");
        scanf("%d", &input);

        if (input % 2 == 0)
        {
            p[i_p] = input;
            i_p++;
        }
        else{
            i[i_i] = input;
            i_i++;
        }
        

        if (i_p == 5)
        {
            for(cont = 0; cont < 5; cont++){
                printf("\nMostrando conjunto dos pares: %d", p[cont]);
            }
            i_p = 0;
            
        }

        if (i_i == 5)
        {
            for(cont = 0; cont < 5; cont++){
                printf("\nMostrando conjunto dos impares: %d", i[cont]);
            }
            i_i = 0;
            
        }

        whlcont++;
    }
    

}