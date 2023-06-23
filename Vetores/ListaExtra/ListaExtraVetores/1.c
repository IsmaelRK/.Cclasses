#include <stdio.h>

main(){

    int v[5], i, sum = 0, med;

    for(i = 0; i < 5; i++){

        printf("Digite um Numero: ");
        scanf("%d", &v[i]);

        sum += v[i];
    }

    med = sum/5;


    for(i = 0; i < 5; i++){

        if (v[i] > med){
            printf("Valor Superior a Media: %d", v[i]);
        }

    }
}
