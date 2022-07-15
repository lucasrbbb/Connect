#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Exercicio 10\n");

    float cod_x1, cod_x2, cod_y1, cod_y2;

    printf("Insira a primeira coordenada em x:\n");
    scanf("%f", &cod_x1);

    printf("Insira a primeira coordenada em y:\n");
    scanf("%f", &cod_y1);

    printf("Insira a segunda coordenada em x:\n");
    scanf("%f", &cod_x2);

    printf("Insira a segunda coordenada em y:\n");
    scanf("%f", &cod_y2);

    float distancia = sqrt(pow(cod_x2-cod_x1,2) + pow(cod_y2-cod_y1,2));

    printf("A distancia eh de: %.2f", distancia);
}
