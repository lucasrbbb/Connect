#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 26\n");

    float n1, n2, n3;

    printf("Digite o primeiro numero:");
    scanf("%f",&n1);

    printf("Digite o segundo numero:");
    scanf("%f",&n2);

    printf("Digite o terceiro numero:");
    scanf("%f",&n3);

    printf("A multiplicação de %.2f x %.2f x %.2f = %.2f", n1, n2, n3, n1*n2*n3);
}
