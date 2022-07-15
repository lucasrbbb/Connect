#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 5\n");

    float custo_litro;
    float valor;

    printf("Digite o custo por litro de gasolina:\n");
    scanf("%f", &custo_litro);

    printf("Digite o valor a ser abastecido:\n");
    scanf("%f", &valor);

    float litros_abast = valor/custo_litro;

    printf("Foi abastecido %.2f litros.",litros_abast);

}
