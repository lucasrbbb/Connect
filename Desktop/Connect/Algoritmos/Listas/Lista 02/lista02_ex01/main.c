#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b;

    printf("Digite o valor de A:\n");
    scanf("%f",&a);

    printf("Digite o valor de B:\n");
    scanf("%f",&b);

    if (a == b)
        printf("O valor de A %.2f eh igual ao de B %.2f",a,b);
    else if (a > b)
        printf("O maior valor eh o de A com %.2f",a);
    else
        printf("O maior valor eh o de B com %.2f",b);
}
