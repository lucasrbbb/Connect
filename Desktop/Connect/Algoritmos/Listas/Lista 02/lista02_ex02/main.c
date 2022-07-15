#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Informe o numero:\n");
    scanf("%d", &num);

    num = num%2;

    if (num == 0)
        printf("O numero eh par.");
    else if (num != 0)
        printf("O numero eh impar.");
}
