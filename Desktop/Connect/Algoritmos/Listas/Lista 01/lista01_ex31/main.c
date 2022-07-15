#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 31\n");

    float peso;

    printf("Digite o peso em kgs: ");
    scanf("%f", &peso);

    printf("Engordou 15 por cento: %.2f kilos.\n", peso*1.15);
    printf("Emagreceu 20 por cento: %.2f kilos.", peso*0.80);

}
