#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b;

    printf("Digite o primeiro numero: ");
    scanf("%lf", &a);
    printf("Digite o segundo numero: ");
    scanf("%lf", &b);

    printf("\n\n soma: %.2lf\n", a+b);
    printf("\n\n diferenca: %.2lf\n", a-b);
    printf("\n\n multiplicacao: %.2lf\n", a*b);
    printf("\n\n divisao: %.2lf\n", a/b);
}
