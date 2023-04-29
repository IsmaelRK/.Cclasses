# include <stdio.h>

int main() {
    
    int num1;
    printf("Digite um Numero: ");
    scanf("%d", &num1);
    
    if (num1 % 2 == 0){
        printf("eh par");
    }
    else {
        printf("eh impar");
    }
    
}