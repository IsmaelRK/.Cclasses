#include <stdio.h>
#include <stdlib.h>


main(){

    int v[100], i;

    srand(357);

    for (i = 0; i < 100; i++){
        v[i] = rand();
        printf("%dA%d\n", v[i]);
    }
}

// aparentemente boa parte dos números não foram mostrados por limitações do windows, ao rodar na programiz (online compiller) tudo ocorreu bem