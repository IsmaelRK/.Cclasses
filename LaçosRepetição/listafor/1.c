#include <stdio.h>

main(){
    int i, grade, higher = 0;

    for(i = 0; i < 10; i++){
        printf("\nDigite a Nota: ");
        scanf("%d", &grade);

        if(grade > higher || higher == 0){
            higher = grade;
        }
    }
    printf("\nMaior Nota: %d", higher);

}