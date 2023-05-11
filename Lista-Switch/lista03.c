#include <stdio.h>

main(){

    int conta, opc;
    float saldo, value;

    saldo = 19800;

    printf("\nDigite sua Conta: ");
    scanf("%d", &conta);

    if (conta == 753159){
        printf("\nSeu saldo eh R$%f", saldo);

        printf("\nDeposito [1]");
        printf("\nRetirada [2]");

        printf("\nDigite a opção desejada: ");
        scanf("%d", &opc);

        printf("\nDigite o Valor: ");
        scanf("%f", &value);

        switch(opc){

            case 1:
                saldo = saldo + value;
                break;
            case 2:
                saldo = saldo - value;
                break;
        }

        printf("\n%.2f", saldo);
        }


    else{
        printf("Conta Inválido");
    }

    
}