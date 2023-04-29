#include <stdio.h>
#include <locale.h> //Deixar acentuação "menos bugada"

int main(){

    setlocale(LC_ALL, "Portuguese"); //Deixar acentuação "menos bugada"

    char name;
    float incrase, cash, x, y, z;
    printf("Digite o nome: \n");
    scanf("%c", &name);

    printf("Salário atual: \n");
    scanf("%f", &cash);

    printf("Digite o aumento em porcentagem: \n");
    scanf("%f", &incrase);

    x = cash/100;
    y = 100 + incrase;
    z = y * x;


    printf("Nome: %c", name);
    printf("\n");
    printf("Salário Atual: %f", cash);
    printf("\n");
    printf("Aumento: %f", incrase);
    printf("\n");
    printf("Novo Salário: %f", z);

}