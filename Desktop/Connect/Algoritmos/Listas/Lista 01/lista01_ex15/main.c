#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 15\n");

    float valor;

    printf("Digite o valor da conta:\n");
    scanf("%f", &valor);

    int valor_inteiro = valor/3;
    float valor_resto = valor-valor_inteiro*3;

    printf("Valor a ser pago:\n");
    printf("Carlos: %d.00 \n",valor_inteiro);
    printf("Andre: %d.00 \n", valor_inteiro);
    printf("Felipe: %.2f \n", valor_inteiro+valor_resto);
}
