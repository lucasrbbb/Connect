#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Exercicio 14\n");

    float raio;

    printf("Insira o raio da pizza:\n");
    scanf("%f", &raio);

    float area = 3.14*pow(raio,2);

    printf("A area da pizza eh de: %.2f\n", area);
}
