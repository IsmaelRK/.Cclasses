#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[4][8], somalinha[4] = {0,0,0,0};
    int contl, contc, cnt = 0;
    
    
    for (contl=0; contl<4; contl++)
    {
        printf("Digite os elementos da %d. a linha: \n", contl+1);
        for (contc=0; contc<8; contc++)
        {
            printf("Digite os elementos da %d. a coluna: \n", contc+1);
            //scanf("%d", &matriz[contl][contc]);
            
            matriz[contl][contc] = cnt++;
        }

    printf("\n");
    
    }
    
    
    for (contl=0; contl<4; contl++){
        for (contc=0; contc<8; contc++){
            
            somalinha[contl] = somalinha[contl] + matriz[contl][contc];        
        }
        
    }
    
    

    for (contl=0; contl<4; contl++)
    {
        printf("\n");
        for (contc=0; contc<8; contc++)
        {
            printf("%02d ", matriz[contl][contc]);
        }
    }
    
    printf("\n\n");
    
    for (contl=0; contl<4; contl++){
        printf("Soma da linha %d: %d\n", contl+1, somalinha[contl]);        
    }

    getc;
}

// O programa recebe dados para uma matriz e devolve, como resultado a soma de suas linhas
