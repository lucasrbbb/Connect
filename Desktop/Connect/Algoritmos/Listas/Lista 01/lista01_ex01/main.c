#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 1\n");

    float dimensao01;
    float dimensao02;

    printf("Digite a primeria dimensao em m:");
    scanf("%f", &dimensao01);

    printf("Digite a segunda dimensao em m:");
    scanf("%f", &dimensao02);

    printf("A area do terreno eh de %.2f m",dimensao01*dimensao02);

}

