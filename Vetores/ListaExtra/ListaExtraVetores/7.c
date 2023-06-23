#include <stdio.h>

main(){

    int v1[10], v2[10], v3[20], i;


    for(i = 0; i < 10; i++){
        printf("Digite um Numero: ");
        scanf("%d", &v1[i]);
    }

    for(i = 0; i < 10; i++){
        printf("Digite um Numero: ");
        scanf("%d", &v2[i]);
    }

    for(i = 0; i < 10; i++){
        if(i % 2 == 0){
            v3[i] = v1[i];
        }
    }

    for(i = 0; i < 10; i++){
        if(i % 2 != 0){
            v3[i + 10] = v2[i];
        }
    }


    for(i = 0; i < 10; i++){
        printf("\nNumero do primero vetor: %d", v1[i]);
    }
    
    for(i = 0; i < 10; i++){
        printf("\nNumero do segundo vetor: %d", v2[i]);
    }

    for(i = 0; i < 20; i++){
        printf("\nNumero do terceiro vetor: %d", v3[i]);
    }

}