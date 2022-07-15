#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 35\n");

    float diagonal_maior, diagonal_menor;

    printf("Area losangulo\n");

    printf("Digite o tamanho da diagonal maior: ");
    scanf("%f", &diagonal_maior);

    printf("Digite o tamanho da diagonal menor: ");
    scanf("%f", &diagonal_menor);

    printf("Area losangulo: %.2f .\n", (diagonal_maior*diagonal_menor)/2);
}
