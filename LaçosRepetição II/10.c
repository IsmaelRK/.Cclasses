#include <stdio.h>

main(){

    char usra = 's';
    int innum, sumpar = 0, prod = 0, mult1 = 0;

    while (usra == 's')
    {
        printf("Deseja Continuar? [s/n]: ");
        scanf("\n%c", &usra);

        if (usra == 's')
        {
            printf("\nDigite Números Inteiros Positivos: ");
            scanf("%d", &innum);

            if (innum % 2 == 0)
            {
                sumpar += innum;
            }
            else{

                if (mult1 == 0){
                    mult1 = 1;
                    prod += mult1 * innum;
                }
                else{
                    prod = innum * prod;
                }
                
                

            }

        }
        
    }
    
    printf("\nSoma dos Números Pares: %d", sumpar);
    printf("\nProduto dos Números Ímpares: %d", prod);


}