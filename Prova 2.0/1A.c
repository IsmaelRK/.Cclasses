# include <stdio.h>

main(){

    int m[3][3], v[3];
    int i, j;
    int var, var1, var2;

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("Digite o Valor: ");
            scanf("%d", &m[i][j]);
        }
    }

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            if (j == 0){
                var = m[i][j];
            }

            if (j == 1){
                var1 = m[i][j];
            }

            if (j == 2){
                var2 = m[i][j];
            }
        }
        v[i] = (var * var1 * var2);
    }

    for (i = 0; i < 3; i++){
            printf("%d ", v[i]);
    }

    printf("\n\n ###############\n");

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("%02d ", m[i][j]);
        }
        printf("\n");
    }
}
