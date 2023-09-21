#include <stdio.h>

main(){

    int i = 0;
    float v[10];

    while(i<10){

        printf("Digite a Nota: ");
        scanf("%f", &v[i++]);
        // i++;

    }

    for(i=0; i < 10; i++){

        printf("\nA Nota eh: %.2f", v[i]);

    }
    printf("\nA Primeira Nota eh: %.2f", v[0]);
    printf("\nA Ultima Nota eh: %.2f", v[9]);

}

// #include <stdio.h> cod da Prof.

// main(){

//     int v[10], i;


//     for(i=0; i < 10; i++){

//         printf("\nEntre com as Notas: ");
//         scanf("%d", &v[i])

//     }

//     for(i=0; i < 10; i++){

//         printf("\nA nota eh: %.2f", v[i]);

//     }
    // printf("\n A primeira nota: %d, v[0]");
    // printf("\n A ultima nota: %d, v[9]");

// }