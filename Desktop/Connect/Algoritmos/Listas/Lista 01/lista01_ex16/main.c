#include <stdio.h>

int main()
{
    printf("Exercicio 17\n");

    float temp;

    printf("Digite a temperatura em Celsius:");
    scanf("%f", &temp);

    temp = temp*1.8+32;

    printf("Temperatura em Fahrenheit: %.2f\n", temp);

    return 0;
}
