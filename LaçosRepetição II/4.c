#include <stdio.h>

main(){

    int nufn, cont = 0;
    float sal, sum = 0, med;

    printf("\nNúmero de Funcionários: ");
    scanf("%d", &nufn);

    while (cont < nufn)
    {
        printf("\nSalário: R$ ");
        scanf("%f", &sal);
        sum += sal;

        cont++;
    }

    med = sum/nufn;
    printf("\nA média salárial é: R$ %.2f", med);

}