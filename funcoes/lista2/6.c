#include <stdio.h>

void calc(int anos, int *sal, char est)
{

    if ((anos > 5 && est == 'c') || (anos > 5 && est == 'C'))
    {
        *sal = (*sal / 100) * 110;
    }
    else
    {
        *sal = (*sal / 100) * 108;
    }


}


main()
{
    int anos, sal;
    char est;

    printf("\nDigite:");

    printf("Tempo na Empresa: ");
    scanf("%d", &anos);

    printf("Salario Atual: ");
    scanf("%d", &sal);

    printf("Estado Civil [s]Solterio [c]Casado: ");
    scanf(" %c", &est);


    calc(anos, &sal, est);

    printf("Novo Salario: %d", sal);
}