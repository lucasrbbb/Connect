#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3;
    int menor, medio, maior;

    printf("Digite o primeiro numero:");
    scanf("%d",&num1);

    printf("Digite o segundo numero:");
    scanf("%d",&num2);

    printf("Digite o terceiro numero:");
    scanf("%d",&num3);

    //maior

    if (num1 >= num2 && num1 >= num3)
        maior = num1;

    if (num2 >= num1 && num2 >= num3)
        maior = num2;

    if (num3 >= num2 && num3 >= num1)
        maior = num3;

    //medio

    if (num1 >= num2 && num1 <= num3 || num1 <= num2 && num1 >= num3)
        medio = num1;


    if (num2 >= num1 && num2 <= num3 || num2 <= num1 && num2 >= num3)
        medio = num2;

    if (num3 >= num2 && num3 <= num1 || num3 <= num2 && num3 >= num1)
        medio = num3;

    //menor

    if (num1 <= num2 && num1 <= num3)
        menor = num1;

    if (num2 <= num1 && num2 <= num3)
        menor = num2;

    if (num3 <= num2 && num3 <= num1)
        menor = num3;

    printf("%d,%d,%d", maior, medio, menor);
}
