#include <stdio.h>

main(){

    int cont = 0, fib, sum = 0, tam;
    int fiblist[20] = {1, 1};
    int i1 = 0, i2 = 1;

    while (cont < 20)
    {
        
        sum = fiblist[i1] + fiblist[i2];
        fiblist[i2 + 1] = sum;
        printf("\n%d", sum);

        i1++;
        i2++;
        cont++;
    }
    

}