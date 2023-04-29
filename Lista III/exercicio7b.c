#include <stdio.h>
#include <locale.h>

main(){
    setlocale(LC_ALL, "portuguese");  // habilita acentos
    float grade1, grade2, grade3, calcm;
    printf("Digite as notas: \n");
    scanf("%f", &grade1);
    printf("\n");
    scanf("%f", &grade2);
    printf("\n");
    scanf("%f", &grade3);

    calcm = (grade1 + grade2 + grade3) / 3;

    if (calcm <= 4.9){
        float calc = 10 - calcm + 2;
        printf("Recuperação \n");
        printf("%f", calc);
    }

    if (calcm <= 6.9){
        float calc =  (10 - calcm);
        printf("Prova Final \n");
        printf("%.2f", calcm);
    }

    else{
        printf("Aprovado");
    }

}
