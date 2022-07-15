#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 4\n");

    char nome[50];
    int idade;

    printf("Digite seu nome:");
    scanf("%s", nome);

    printf("Digite sua idade em anos completos:");
    scanf("%d", &idade);

    printf("%s voce viveu %d dias", nome, idade*365);
}
