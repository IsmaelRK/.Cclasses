#include <stdio.h>

main(){

    int i, num[15];

    for(i = 0; i < 15; i++){

        printf("Digite um numero: ");
        scanf("%d", &num[i]);

    }

    for(i = 0; i < 15; i++){

        if (num[i] % 2 == 0)
            printf("\nExibindo: %d) numero: %d, par", i+1, num[i]);
        else{
            printf("\nExibindo: %d) numero: %d, impar", i+1, num[i]);
        }

    }

}