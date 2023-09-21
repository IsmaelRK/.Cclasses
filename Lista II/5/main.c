#include <stdio.h>
#include <math.h>

int main() {
    float weight, height;
    
    printf("Insira o peso(KG): \n");
    scanf("%f", &weight);
    
    printf("Insira a altura(M): \n");
    scanf("%f", &height);
    
    float imc = weight / pow(height, 2);
    printf("Seu IMC eh: %f", imc);
    
    
}