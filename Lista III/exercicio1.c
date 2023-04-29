#include <stdio.h>
#include <math.h>

int main()
{
	float pi = 3.14, raio;

	printf("Digite o Raio do Circulo: \n");
	scanf("%f", &raio);

	if(raio > 0){
		float x = pow(raio, 2) * pi;
		printf("%f", x);
	}
	else{
		printf("O raio digitado é menor ou igual a 0");
	}
	
}