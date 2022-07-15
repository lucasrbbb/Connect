#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 39\n");

    float salario, C1, C2;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    printf("Digite o valor da conta 1: ");
    scanf("%f", &C1);

    printf("Digite o valor da conta 2: ");
    scanf("%f", &C2);

    printf("Valor restante: %.2f reais \n", salario-(C1+C2)*1.02);
}
