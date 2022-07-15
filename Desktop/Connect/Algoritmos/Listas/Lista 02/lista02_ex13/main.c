#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 13\n");

    float valor, centavos;
    int resto, nota100=0, nota50=0, nota10=0, nota5=0, nota1=0;

    printf("Digite o valor em reais:");
    scanf("%f",&valor);

    resto = valor;

    if(resto >= 100)
    {
        nota100 = resto/100;
        resto = resto - nota100*100;
        printf("Notas de 100: %d\n", nota100);
    }
    if(resto >= 50)
    {
        nota50 = resto/50;
        resto = resto - nota50*50;
        printf("Notas de 50: %d\n", nota50);
    }
    if(resto >= 10)
    {
        nota10 = resto/10;
        resto = resto - nota10*10;
        printf("Notas de 10: %d\n", nota10);
    }
    if(resto >= 5)
    {
        nota5 = resto/5;
        resto = resto - nota5*5;
        printf("Notas de 5: %d\n", nota5);
    }
    if(resto >= 1)
    {
        nota1 = resto/1;
        resto = resto - nota1*1;
        printf("Notas de 1: %d\n", nota1);
    }
    if(valor - nota100*100-nota50*50-nota10*10-nota5*5-nota1*1 > 0.1)
    {
        centavos = valor - nota100*100-nota50*50-nota10*10-nota5*5-nota1*1;
        printf("Centavos: %.2f", centavos);
    }
}
