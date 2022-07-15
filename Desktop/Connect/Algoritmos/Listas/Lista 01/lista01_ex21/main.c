#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 21\n");

    float n_lata, n_garrafa, n_2litros;

    printf("Digite o numero de latas compradas: ");
    scanf("%f", &n_lata);

    printf("Digite o numero de garrafas 600 ml compradas: ");
    scanf("%f", &n_garrafa);

    printf("Digite o numero de garrafas 2 litros compradas: ");
    scanf("%f", &n_2litros);

    printf("A quantidade de litros comprada foi de:%.2f\n", (n_lata*350+ n_garrafa*600+n_2litros*2000)/1000);

    return 0;
}
