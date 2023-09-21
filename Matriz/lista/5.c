#include <stdio.h>

main(){

    int i, j;
    int m[10][10];

    for (i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++){
            printf("Digite um Numero: ");
            scanf("%d", &m[i][j]);
        }
    }
    

    for (i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++){
            if(i != j){printf("%02d ", m[i][j]);}
        }
        printf("\n");
    }
}