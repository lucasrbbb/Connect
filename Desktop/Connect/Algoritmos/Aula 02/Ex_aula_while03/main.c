#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, soma = 0;

    printf("Calculo somatorio\n");

    printf("Digite o valor de n:");
    scanf("%d", &n);

    for(i=0; i<=n;i++){
        soma =soma + i;
    }
    printf("O somatorio tem valor de %d", soma);
}
