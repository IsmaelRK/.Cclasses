#include <stdio.h>

main(){
    int i, n, soma = 0;
    

    printf("Entre com o Número Final: ");
    scanf("%d", &n);

    for (i=3; i < n; i++){
        soma += (5*i) + 2;
        printf("\n Soma final é: %d", soma);
    }
}