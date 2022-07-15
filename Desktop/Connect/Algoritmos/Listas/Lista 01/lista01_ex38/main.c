#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 38\n");

    int ano_nasc, ano_atual;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nasc);

    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    printf("Idade em anos: %d \n", ano_atual-ano_nasc);
    printf("Idade em meses: %d \n", (ano_atual-ano_nasc)*12);
    printf("Idade em dias: %d \n", (ano_atual-ano_nasc)*12*30);
    printf("Idade em semanas: %d \n", (ano_atual-ano_nasc)*4);
}
