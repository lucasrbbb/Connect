#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 3\n");

    int n_pao;
    int n_broa;

    printf("Digite o numero de paes vendidos:\n");
    scanf("%d", &n_pao);

    printf("Digite o numero de broas vendidas:\n");
    scanf("%d", &n_broa);

    float valor_total = n_pao*0.12 + n_broa*1.50;

    printf("O valor total da venda de paes e broas foi de: %.2f reais.\n",valor_total);
    printf("O valor para a poupanca eh de: %.2f reais.",0.1*valor_total);
}
