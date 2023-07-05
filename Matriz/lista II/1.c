#include <stdio.h>

main(){

    float a[5][10], v[5], mh = 0;
    int i, j;

    for(i = 0; i < 5; i++){

        for(j= 0; j < 10; j++){
            printf("Digite a Altura: ");
            scanf("%d", &a[i][j]);
        }


        for(j= 0; j < 10; j++){
            if (mh < a[i][j]){
                mh = a[i][j];
            }

            v[i] = mh;
        }
        mh = 0;
    }

    for(i = 0; i < 5; i++){
        printf("\nMaior Altura da Delegação %d: %d", i+1, v[i]);
    }

}