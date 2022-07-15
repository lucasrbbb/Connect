#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 13\n");

    int valor;

    printf("Insira um valor inteiro de ate 3 digitos:\n");
    scanf("%d", &valor);

    int centena = valor/100;
    int dezena = (valor - centena*100)/10;
    int unidade = valor - centena*100 - dezena*10;

    printf("Centena: %d\n", centena);
    printf("Dezena: %d\n", dezena);
    printf("Unidade: %d\n", unidade);
}
