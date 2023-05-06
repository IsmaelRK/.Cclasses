#include <stdio.h>
#include <conio.h>

main(){
    int value0, value1, value2, dif;

    printf("\nDigite Um Valor Inteiro positivo");

    printf("\nDigite o primeiro Valor: ");
    scanf("%d", &value0);

    printf("\nDigite o segundo Valor: ");
    scanf("%d", &value1);

    printf("\nDigite o terceiro Valor: ");
    scanf("%d", &value2);


    if (value1 < value2){
        dif = value0 - value1;
        printf("O segundo possui a menor diferença, sendo de: %d", dif);
    }
    else{
        dif = value0 - value2;
        printf("O terceiro possui a menor diferença, sendo de: %d", dif);
    }
    

    getche();

}