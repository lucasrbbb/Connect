#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 23:\n");

    float comp_sombra_pessoa, comp_sombra_predio, comp_pessoa, comp_predio;

    printf("Digite o comprimento de sua sombra:\n");
    scanf("%f",&comp_sombra_pessoa);

    printf("Digite sua altura:\n");
    scanf("%f",&comp_pessoa);

    printf("Digite o comprimento da sombra do predio:\n");
    scanf("%f",&comp_sombra_predio);

    comp_predio = comp_pessoa*(comp_sombra_predio/comp_sombra_pessoa);

    printf("A altura do predio eh de %f", comp_predio);
}
