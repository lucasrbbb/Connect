#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Exercicio 12 \n");

    float lado1, lado2, lado3;

    printf("Digite o comprimento 1:");
    scanf("%f", &lado1);

    printf("Digite o comprimento 2:");
    scanf("%f", &lado2);

    printf("Digite o comprimento 3:");
    scanf("%f", &lado3);

    if( lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1 + lado2 )
    {
        if(lado1 == lado2 && lado1 == lado3 && lado2 == lado3)
            printf("Triangulo Equilatero");

        else if(lado1 == lado2 && lado3 != lado1 && lado3 != lado2 || lado1 == lado3 && lado2 != lado1 && lado2 != lado3 || lado2 == lado3 && lado3 != lado1 && lado3 != lado2)
            printf("Triangulo Isosceles");

        else if(lado1 != lado2 && lado1 != lado3 && lado2 != lado3 )
            printf("Triangulo Escaleno");
    }
    else
        printf("Nao eh um triangulo");
}
