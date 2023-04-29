# include <stdio.h>

 int main(){
    int faltas;
    float media;
    
    printf("Digite o número de faltas: ");
    scanf("%d", &faltas);
    
    printf("Digite a média: ");
    scanf("%f", &media);
    
    if (media >= 7 & faltas < 20) {
        printf("APROVADO");
    }
    else
        printf("REPROVADO");
    
    }