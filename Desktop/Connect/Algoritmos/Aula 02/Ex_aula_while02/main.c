#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, i=1, resultado;

    printf("Digite o valor da base A:\n");
    scanf("%d", &a);

    resultado = a;

    printf("Digite o valor do expoente B:\n");
    scanf("%d", &b);

    while(i<b){
        resultado = resultado*a;
        i++;
    }
    printf("Resultado: %d", resultado);
}
