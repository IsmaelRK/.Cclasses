#include <stdio.h>

main(){

    int m[3][3], i, j, suml1 = 0, suml2 = 0, suml3 = 0;
    int sumcol1 = 0, sumcol2 = 0, sumcol3 = 0;
    int sumdp = 0, sumds = 0;
    int v[8], retorno = 0;


    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){

            printf("Digite um Valor: ");
            scanf("%d", &m[i][j]);

        }
    }


    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){

            if (i == 0){
                suml1 += m[i][j];
                v[0] = suml1;
            }

            if (i == 1){
                suml2 += m[i][j];
                v[1] = suml2;
            }

            if (i == 2){
                suml3 += m[i][j];
                v[2] = suml3;
            }

            

        }
    }


    for(j = 0; j < 3; j++){
        for(i = 0; i < 3; i++){

            if (j == 0){
                sumcol1 += m[i][j];
                v[3] = sumcol1;
            }

            if (j == 1){
                sumcol2 += m[i][j];
                v[4] = sumcol2;
            }

            if (j == 2){
                sumcol3 += m[i][j];
                v[5] = sumcol3;
            }

            

        }
    }

    for(j = 0; j < 3; j++){
        for(i = 0; i < 3; i++){

            if (i == j){
                sumdp += m[i][j];
                v[6] = sumdp;
            }

            if (j == (3 - 1 - i)){
                sumds += m[i][j];
                v[7] = sumds;
            }

        }
    }

    for (i = 0; i < 8; i++){

        if (v[0] != v[i]){
            retorno = 1;
        }

    }

    if (retorno == 1){
        printf("Não eh um Quadrado Magico!");
    }
    else{
        printf("Eh um Quadrado Magico!");
    }


}