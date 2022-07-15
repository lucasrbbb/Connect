#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 18\n");

    float hora_normal, hora_extra, salario_bruto, salario_liquido;

    printf("Digite as horas trabalhadas no mes:");
    scanf("%f", &hora_normal);

    printf("Digite as horas extras trabalhadas no mes:");
    scanf("%f", &hora_extra);

    salario_bruto = hora_normal*10 + hora_extra*15;
    salario_liquido = salario_bruto*0.9;

    printf("Salario bruto: R$ %.2f\n", salario_bruto);
    printf("Salario liquido: R$ %.2f\n", salario_liquido);
    return 0;
}
