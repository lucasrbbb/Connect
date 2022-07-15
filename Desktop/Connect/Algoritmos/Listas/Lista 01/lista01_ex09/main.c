#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 9\n");

    int p, m, g;

    printf("Insira o numero de camisas P vendidas:\n");
    scanf("%d", &p);

    printf("Insira o numero de camisas M vendidas:\n");
    scanf("%d", &m);

    printf("Insira o numero de camisas G vendidas:\n");
    scanf("%d", &g);

    float valor_total = p*10 + p*12 + p*15;

    printf("O valor total arecadado com a vendas de camisas foi de %.2f.", valor_total);
}
