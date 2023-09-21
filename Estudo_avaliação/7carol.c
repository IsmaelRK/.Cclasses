#include <stdio.h>

int main () {

    int ordem = 4, m1[ordem][ordem], l, c;
    int rtn = 0;  // Criamos uma variável de retorno para auxiliar nosso IF


        for (l = 0; l < ordem; l++){
            for (c = 0; c < ordem; c++){

                printf ("Entre com os valores da matriz: ");
                scanf ("%d", &m1[l][c]);
            }
        }


        for (l = 0; l < ordem; l++){
            for (c = 0; c < ordem; c++){

                if (l > c){  // Confere se estamos abaixo da diagonal inferior
                    
                    if (m1[l][c] != 0){  // Somente se o valor abaixo da diagonal for diferente de zero ele irá alterar o valor para 1
                        rtn = 1;
                    }

                }

            }
        }

        if (rtn == 0){  // Se o valor for zero, não há nada diferente de 0 abaixo da diagonal
            printf("\nEh uma matriz triangular superior!");
        }
        else{  // Se o valor for um, há pelo menos um elemento diferente de zero abaixo da diagonal
            printf("Não eh");
        }
}
