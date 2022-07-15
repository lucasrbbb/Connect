#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 7\n");

    int dia, mes;

    printf("Insira o dia:\n");
    scanf("%d", &dia);

    printf("Insira o mes em numero:\n");
    scanf("%d", &mes);

    printf("Se passaram %d dias", mes*30+dia);
}
