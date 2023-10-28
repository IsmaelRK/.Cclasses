# include <stdio.h>
# include <stdlib.h>
# include <time.h>
#include <string.h>

void main()
{

    char words[10][15] = {"Recursao", "quinquilharia", "programacao", "linguagem", "python", "java", "desenvolvimento", "interpretacao", "papibaquigrafo", "pindamonhangaba"};
    char l;

    int tent = 0;
    int erradas = 0;

    time_t tempo;
    srand((unsigned) time(&tempo));
    int esc = rand() % 8;

    char sorteada[15];

    strcpy(sorteada, words[esc]);

    strlwr(sorteada);

    char sorteada2[15];
    strcpy(sorteada2, sorteada);

    for(int i = 0; i < strlen(sorteada); i++)
    {
        sorteada[i] = '*';
    }


    while (tent < 6)
    {

        for(int i = 0; i < strlen(sorteada); i++)
        {
            printf(" %c", sorteada[i]);
        }
        printf("\n");

        printf("Digite uma letra: ");
        scanf(" %c", &l);
        tent++;

        for(int i = 0; i < strlen(sorteada); i++)
        {

            if (sorteada2[i] == l)
            {
                sorteada[i] = sorteada2[i];
                tent--;
            }

        }

        if (!strcmp(sorteada, sorteada2))
        {
            printf("Voce Ganhou, a Palavra era %s", sorteada2);
            break;
        }

    }

    if (tent > 5)
    {
        printf("\nVoce Perdeu, a Palavra era %s", sorteada2);
    }


}