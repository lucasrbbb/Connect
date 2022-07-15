#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 19\n");

    float galinha;

    printf("Digite o numero de galinhas na granja: ");
    scanf("%f", &galinha);

    galinha = galinha*(1*4.50+2*3.50);

    printf("O gasto total eh: R$ %.2f\n", galinha);

    return 0;
}
