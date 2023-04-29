#include <stdio.h>
main()
{
	int num, x;
	printf("Digite um número inteiro positivo: \n");
	scanf("%d", &num);
    
	if (num <= 0){
	   printf("O numero digitado não é positivo \n");
	}

    x = num % 2;
	if (x == 0){
		printf("É par");
	}
	else{
		printf("É impar");
	}
}