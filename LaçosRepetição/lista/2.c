#include <stdio.h>

main(){
    int age = 1, sum = 0, cont = -1, med;

    printf("Pressione [0] Para Finalizar\n");
    do{
        printf("Digita sua Idade: ");
        scanf("%d", &age);

        sum += age;
        cont += 1;
    }while(age != 0);{
        med = sum/cont;
        printf("%d", med);

    }}