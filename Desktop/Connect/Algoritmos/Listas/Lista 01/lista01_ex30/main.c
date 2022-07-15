#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 30\n");

    float salario, vendas;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    printf("Digite o total de vendas do vendedor: ");
    scanf("%f", &vendas);

    printf("Comissao: %.2f reais.", vendas*0.04);
    printf("Salario + comissao: %.2f reais.", vendas*0.04+salario);

}
