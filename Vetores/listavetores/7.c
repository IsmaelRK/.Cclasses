#include  <stdio.h>

main(){

    int a[5], b[5], s[5], i;

    for (i = 0; i < 5; i++){
        printf("Digite um Numero: ");
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 5; i++){
        printf("Digite um Numero: ");
        scanf("%d", &b[i]);
    }

    for (i = 0; i < 5; i++){
        s[i] = (a[i] + b[i]);
        printf("\n%d", s[i]);
    }

}