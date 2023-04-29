# include <stdio.h>

int main(){
    
    char estado[3];
    printf("Digite o Estado (maiuscula): \n");
    scanf("%s", estado);
    
    switch (estado[0]) {
        case 'S':
            printf("Paulista");
            break;
    
    
        case 'R': {
            printf("Carioca");
            break;

    }
        case 'M':{
            printf("Mineiro");
            break;
            
            default:
                printf("Outros Estados");
    }
}
}