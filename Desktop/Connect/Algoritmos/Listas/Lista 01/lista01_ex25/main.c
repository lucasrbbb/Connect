#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 25\n");

    float raio, alt, vol;

    printf("Digite o raio em metros:");
    scanf("%f",&raio);

    printf("Digite a altura em metros:");
    scanf("%f",&alt);

    vol = (3.14*(pow(raio,2)))*alt;

    printf("O volume da caixa d'agua eh de: %.2f m3",vol);
}
