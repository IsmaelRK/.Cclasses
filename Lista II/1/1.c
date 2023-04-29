# include <stdio.h>

int main (){
    int num, num2;

    printf("Digite um Número \n");
    scanf("%d", &num);

    printf("Digite mais um Número \n");
    scanf("%d", &num2);

    int soma = num + num2;

    if (soma >= 10)
        printf("A soma eh: %d\n", soma);

    return 0;

}
