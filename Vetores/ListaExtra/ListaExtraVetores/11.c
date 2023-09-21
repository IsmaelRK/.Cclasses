#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){

    int al_num, usrin, i, v[10], resp_sys = 0, sv_i;

    srand(time(NULL)); // Inicializa

    for (i = 0; i < 10; i++)
    {
        al_num = rand() % 10;  // Gera numeros de 0 a 9    
        v[i] = al_num;
    }
    
    printf("Digite um Numero: ");
    scanf("%d", &usrin);
    
    for (i = 0; i < 10; i++)
    {
        if(v[i] == usrin){
            resp_sys = 1;
            sv_i = i;
        }
    }

    if(resp_sys == 1){
        printf("Você Acertou! O numero esta na posicao %d do Vetor!", sv_i);
    }
    else{
        printf("Você Errou!");
    }

}