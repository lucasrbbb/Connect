#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 11\n");

    int dia;

    printf("Insira o numero de dias sem acidentes:\n");
    scanf("%d", &dia);

    int ano = dia/360;
    int mes = (dia - ano*360)/30;6
    int dia_resto = dia - ano*360 - mes*30;

    printf("O tempo sem acidentes eh de %d ano(s), %d mese(s) e %d dia(s): ", ano, mes, dia_resto);
}
