#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 20\n");

    int n_blusa;
    float n_novelo;

    printf("Digite o numero de blusas produzidas: ");
    scanf("%d", &n_blusa);

    printf("Digite o numero de novelos usados: ");
    scanf("%f", &n_novelo);

    printf("O numero de novelos usados por blusa foi de:%.2f\n", n_novelo/n_blusa);

    return 0;
}
