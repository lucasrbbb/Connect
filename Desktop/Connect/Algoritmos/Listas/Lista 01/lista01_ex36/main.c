#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 36\n");

    float salario, salario_min;

    printf("Digite o valor do salario: ");
    scanf("%f", &salario);

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salario_min);

    printf("Quantidade salario minimos: %.2f .\n", salario/salario_min);
}
