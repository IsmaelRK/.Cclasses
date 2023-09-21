#include <stdio.h>

main(){

    int i, sum, qtdn = 0, num;


    for(i = 0; i < 20; i++){

        printf("Digite um Número: ");
        scanf("%d", &num);


        if (num < 0){qtdn += 1;}
        if (num > 0 || num == 0){sum += num;}
    }

    printf("\nSoma dos Positivos é: %d", sum);
    printf("\nQuantidade de Negativos é: %d", qtdn);

}