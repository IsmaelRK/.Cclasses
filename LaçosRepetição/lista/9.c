#include <stdio.h>

main(){

    int cont = 1;
    float usrn, tab;

    printf("Digite um Número: ");
    scanf("%f", &usrn);

    while (cont <= 10)
    {

        tab = usrn * cont;
        printf("\n%.2f", tab);
        cont++;
    }
}