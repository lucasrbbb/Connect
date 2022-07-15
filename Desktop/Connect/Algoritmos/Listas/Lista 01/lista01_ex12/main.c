#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 12\n");

    float salario;

    printf("Insira o salario:\n");
    scanf("%f", &salario);

    float salario_aumento = salario*1.15, salario_final = (salario*1.15)*0.92;

    printf("Salario inicial: %.2f\n", salario);
    printf("Salario com aumento: %.2f\n", salario_aumento);
    printf("Salario final: %.2f\n", salario_final);

}
