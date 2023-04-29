#include <stdio.h>

int main() {
    
    float n1, n2;
    printf("Insira a nota 1: \n");
    scanf("%f", &n1);
    
    
    printf("Insira a nota 2: \n");
    scanf("%f", &n2);
    
    float media = (n1 * 2 + n2 * 3) / 5;
    
    if (media >= 6) {
        printf("Aprovado");       
    }
    if (media < 6 & media >= 2) {
        printf("Recuperação");
    }
    
    if (media < 2) {    // um else servirira também
        printf("Reprovado");
    }
    
    
}