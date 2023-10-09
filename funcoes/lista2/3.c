#include <stdio.h>


void vet(int *p, int *p2)
{
    int mv = 0;

    for (int i = 0; i < 4; i++)
    {
        if (p[i] > mv || mv == 0)
        {
            mv = p[i];
        }
    }
    *p2 = mv;


}


int main()
{
    int v[4], m;

    for (int i = 0; i < 4; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &v[i]);
    }

    vet(&v[0], &m);
    printf("%d", m);

}