#include <stdio.h>
#include <string.h>


main()
{

    int i, j, notas[3][4];
    char alunos[3][15];
    float mediaalunos, mediaturma = 0;


    for (i = 0; i < 3; i++){
        printf("Informe o nome do aluno: ");
        scanf("%s", alunos[i]);
        mediaalunos = 0;

        for (j = 0; j < 4; j++)
        {
            printf("Informe a nota dos alunos: ");
            scanf("%d", &notas[i][j]);
            mediaalunos = mediaturma + notas[i][j];
        }
        mediaturma = mediaturma + (mediaalunos/4);
    }
    mediaturma = mediaturma/3;

    printf("Seguem os alunos que tiveram a maior media geral");

    for (i = 0; i < 3; i++){
        j = 0;
        while (j<4){
            if (notas[i][j] > mediaturma){
                printf("\n %s %d", alunos[i], notas[i][j]);
                j = 3;
            }
            j += 1;
        }
        

        
    }
    getch();
}