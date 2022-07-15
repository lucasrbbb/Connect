#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, soma = 0;

    printf("Digite o valor de n:");
    scanf("%d", &n);

    for(int j=1; j<=n;j++){
        soma =soma + j;
        printf("soma total de 1 ate %d = %d \n", j, soma);
        }
    }
