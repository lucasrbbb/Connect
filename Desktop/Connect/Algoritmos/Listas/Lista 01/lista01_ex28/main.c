#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 28\n");

    float n1, n2;

    printf("Digite a primeira nota:");
    scanf("%f",&n1);

    printf("Digite a segundo nota:");
    scanf("%f",&n2);

    printf("A media ponderada eh de %.2f", (n1*2+n2*3)/5);
}
