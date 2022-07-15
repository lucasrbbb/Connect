#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;

    printf("Informe o numero:\n");
    scanf("%f", &num);

    if (num < 0)
        printf("Seu triplo eh: %.2f.",num*3);
    else if (num > 0)
        printf("Seu dobro eh: %.2f.",num*2);
    else
        printf("Valor invalido.");
}
