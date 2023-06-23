#include <stdio.h>

main(){

    int v[50], i, sum = 0, mr = 0, mn = 0, med;

    for(i = 0; i < 50; i++){

        printf("Digite um Valor: ");
        scanf("%d", &v[i]);

        if (v[i] > mr || mr == 0){
            mr = v[i];
        }

        if (v[i] < mn || mn == 0){
            mn = v[i];
        }

        sum += v[i];
    }

    med  = sum/50;


    printf("\nMaior: %d", mr);
    printf("\nMenor: %d", mn);
    printf("\nMedia: %d", med);

}
