# include <stdio.h>
#include <math.h>

int main() {

    int num1;
    printf("Digite um numero: \n");
    scanf("%d", &num1);

    if (num1 > 0){
        int x = sqrt(num1);
        printf("%d", x);
        }
    if (num1 < 0){
        int x = num1*num1;
        printf("%d", x);
        }

    return 0;
}
