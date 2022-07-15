#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 24:\n");

    float suco, agua, suco_mar;

    printf("Digite a quantidade de suco em litros:\n");
    scanf("%f",&suco);

    agua=0.8*suco;
    suco_mar=0.2*suco;

    printf("Quantidade de agua: %.2f l.\n",agua);
    printf("Quantidade de suco de maracuja: %.2f l.\n",suco_mar);
}
