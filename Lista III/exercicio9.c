#include <stdio.h>
#include <locale.h>

main(){
    setlocale(LC_ALL, "portuguese");
    char name, catg;
    float cash, ncash;

    printf("Nome: ");
    scanf(" %c", &name);

    printf("Categoria: ");
    scanf(" %c", &catg);

    printf("Salário Atual: ");
    scanf(" %f", &cash);


    if (catg == 'A' || catg == 'C' || catg == 'F' || catg == 'H'){
        ncash = (cash / 100) * 110;

        printf("Nome: %c \n", name);
        printf("Categoria: %c \n", catg);
        printf("Novo Salário: %.2f \n", ncash);
    }

    if (catg == 'B' || catg == 'D' || catg == 'E' || catg == 'I' || catg == 'J' || catg == 'T'){
        ncash = (cash / 100) * 115;

        printf("Nome: %c \n", name);
        printf("Categoria: %c \n", catg);
        printf("Novo Salário: %.2f \n", ncash);
    }

    if (catg == 'K' || catg == 'R'){
        ncash = (cash / 100) * 125;

        printf("Nome: %c \n", name);
        printf("Categoria: %c \n", catg);
        printf("Novo Salário: %.2f \n", ncash);
    }

    if (catg == 'L' || catg == 'M' || catg == 'N' || catg == 'O' || catg == 'P' || catg == 'Q' || catg == 'S'){
        ncash = (cash / 100) * 135;

        printf("Nome: %c \n", name);
        printf("Categoria: %c \n", catg);
        printf("Novo Salário: %.2f \n", ncash);
    }

    if (catg == 'U' || catg == 'V' || catg == 'X' || catg == 'Y' || catg == 'W' || catg == 'Z'){
        ncash = (cash / 100) * 150;

        printf("Nome: %c \n", name);
        printf("Categoria: %c \n", catg);
        printf("Novo Salário: %.2f \n", ncash);
    }

}
