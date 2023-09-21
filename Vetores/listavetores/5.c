#include <stdio.h>

main(){

    int v[10], i, vB[10], temp, i2 = 0;

    for (i = 0; i < 10; i++){

        printf("Digite um Numero: ");
        scanf("%d", &temp);

        if (temp >= 0){
            v[i] = temp;
            i2++;
        }
        else{
            i = 10;
        }
    }

    for (i = 0; i < i2; i++){
        
        vB[i] = (v[i] * (-1));
        printf("\nO Inverso eh: %d", vB[i]);
    }

}