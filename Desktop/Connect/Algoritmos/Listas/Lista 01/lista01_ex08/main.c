#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 8\n");

    float n1, n2, n3;

    printf("Insira a nota 1:\n");
    scanf("%f", &n1);

    printf("Insira a nota 2:\n");
    scanf("%f", &n2);

    printf("Insira a nota 3:\n");
    scanf("%f", &n3);

    printf("A media ponderada das notas eh %.2f.", ((n1*1+n2*2+n3*3)/(6)));
}
