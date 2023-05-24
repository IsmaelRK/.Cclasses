#include <stdio.h>

main(){

    int cont, soma;
    cont = 100;
    soma = 0;

do
{
    if (cont%2 == 0){
        soma = soma+cont;
        }

    cont = cont+1;

}while(cont <= 200);

    printf("\n A soma dos números pares de 100 até 200: %d", soma);
}
