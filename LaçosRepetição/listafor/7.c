#include <stdio.h>

main(){
    int usrcont, cont = 0, num, higher = 0;

    
    printf("Digite Quantos Números Quer Inserir: ");
    scanf("%d", &usrcont);


    while(cont < usrcont){

        printf("Entro Com o Número: ");
        scanf("%d", &num);

        if (higher < num || num == 0){
            higher = num;
        }

        cont++;
    }

    printf("Maior Número é: %d", higher);



}