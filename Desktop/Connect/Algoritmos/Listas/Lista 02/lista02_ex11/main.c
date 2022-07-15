#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 11\n");

    int opcao, horas;

    printf("Digite a quantidade de horas/aula por semana:");
    scanf("%d", &horas);

    printf("Digite 1: Professor Nivel 1 R$12,00 por hora/aula. \n");
    printf("Digite 1: Professor Nivel 2 R$17,00 por hora/aula. \n");
    printf("Digite 3: Professor Nivel 3 R$25,00 por hora/aula. \n");
    scanf("%d", &opcao);

    if(opcao == 1)
        printf("O salario do Professor Nivel %d sera de %.2f", opcao, horas*12.0);
    else if(opcao == 2)
        printf("O salario do Professor Nivel %d sera de %.2f", opcao, horas*17.0);
    else if(opcao == 3)
        printf("O salario do Professor Nivel %d sera de %.2f", opcao, horas*25.0);
    else
        printf("Opcao invalida");
}
