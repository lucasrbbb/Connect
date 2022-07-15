#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 22\n");

    int c1, c5, c10, c25, c50, c100;

    printf("Digite o numero de moedas de 1 centavo:");
    scanf("%d", &c1);

    printf("Digite o numero de moedas de 5 centavo:");
    scanf("%d", &c5);

    printf("Digite o numero de moedas de 10 centavo:");
    scanf("%d", &c10);

    printf("Digite o numero de moedas de 25 centavo:");
    scanf("%d", &c25);

    printf("Digite o numero de moedas de 50 centavo:");
    scanf("%d", &c50);

    printf("Digite o numero de moedas de 1 real:");
    scanf("%d", &c100);

    printf("O valor economizado foi de %.2f reais", c1*0.01 + c5*0.05 + c10*0.10 + c25*0.25 + c50*0.5 + c100*1.00);
}
