#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 33\n");

    float base_maior, base_menor, altura;

    printf("Area trapezio\n");

    printf("Digite o tamanho da base maior: ");
    scanf("%f", &base_maior);

    printf("Digite o tamanho da base menor: ");
    scanf("%f", &base_menor);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Area trapezio: %.2f .\n", (base_maior+base_menor)*altura/2);
}

