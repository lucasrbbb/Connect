#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 40\n");

    float cateto1, cateto2, hip;

    printf("Digite o tamanho do cateto 1: ");
    scanf("%f", &cateto1);

    printf("Digite o tamanho do cateto 2: ");
    scanf("%f", &cateto2);

    hip = sqrt(pow(cateto1,2) + pow(cateto2,2));

    printf("Hipotenus: %.2f \n", hip);
}
