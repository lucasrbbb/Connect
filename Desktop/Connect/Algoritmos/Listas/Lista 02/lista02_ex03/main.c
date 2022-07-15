#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;

    printf("Digite o valor de A:\n");
    scanf("%f",&a);

    printf("Digite o valor de B:\n");
    scanf("%f",&b);

    if (a == b)
        c = a + b;
    else
        c = a*b;

    printf("Valor: %.2f.",c);
}
