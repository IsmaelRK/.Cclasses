#include <stdio.h>

main(){

    int num, qtdn, cont;
    cont = 0;
    qtdn = 0;

    do{
        printf("Digite Um número: ");
        scanf("%d", &num);

        if (num >= 30 && num <= 90){
            qtdn += 1;
        }

        cont += 1;

    }while(cont < 10);
        printf("Quantidade de números entre 30 e 90: %d", qtdn);

}
