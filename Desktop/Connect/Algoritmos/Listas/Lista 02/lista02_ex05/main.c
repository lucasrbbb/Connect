#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, resto;


    printf("Informe o numero:\n");
    scanf("%d", &num);

    resto = num%2;

    if (resto == 0)
        num = num + 5;
    else if (resto != 0)
        num = num + 8;

    printf("O resultado eh: %d", num);
}
