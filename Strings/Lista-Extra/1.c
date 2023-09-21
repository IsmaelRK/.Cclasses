#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

main(){
    printf("\n\nDigite [ctrl + c] para Finalizar a Execução");

    printf("\n[a] Ler uma string S1");
    printf("\n[b] Imprimir o tamanho da string S1");
    printf("\n[c] Comparar a string S1 com uma nova string S2 fornecida pelo usuario e imprimir o resultado da comparacao");
    printf("\n[d] Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenacao");
    printf("\n[e] Imprimir a string S1 de forma reversa");
    printf("\n[f] Contar  quantas  vezes  um  dado  caractere  aparece  na  string  S1.  Esse  caractere  deve  ser informado pelo usuario");
    printf("\n[g] Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2. Os caracteres C1 e C2 serão lidos pelo usuário");

    char s1[20], s2[20], qst, s1_Rev[20], chr, c1, c2, conc[40];
    int ans = 0, cmp, len, cont = 0;

    while (ans == 0)
    {
        printf("\nDigite a opcao desejada: ");
        scanf(" %c", &qst);

        switch(qst)
        {
        
            case 'a':

                printf("\nDigite o valor para s1: ");
                getchar();
                gets(s1);
                break;

            case 'b':

                len = strlen(s1);
                printf("\nTamanho da String: %d", len);
                break;

            case 'c':

                printf("\nDigite o valor para s2: ");
                getchar();
                gets(s2);
                cmp = strcmp(s1, s2);
                printf("%d", cmp);
                break;
                
            case 'd':
                strcpy(conc, s1);
                strcat(conc, s2);
                puts(conc);
                break;

            case 'e':

                strrev(s1);
                puts(s1);
                strrev(s1);
                break;

            case 'f':

                printf("\nDigite o Caracter: ");
                scanf(" %c", &chr);
                for (int i = 0; i < strlen(s1); i++)
                {
                    if (s1[i] == chr)
                    {
                        cont++;
                    }
                }
                printf("Aparece: %dx", cont);
                cont = 0;
                break;

            case 'g':

                printf("\nDigite um valor para c1: ");
                scanf(" %c", &c1);
                printf("\nDigite um valor para c2: ");
                scanf(" %c", &c2);
                for (int i = 0; i < strlen(s1); i++)
                {

                    if (s1[i] == c1){
                        s1[i] = c2;
                        i = strlen(s1);
                    }

                }
                puts(s1);
                break;
    }
    }    
}