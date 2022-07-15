#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 10\n");

    int n1, n2, n3;

    printf("Digite o primeiro numero:");
    scanf("%d",&n1);

    printf("Digite o segundo numero:");
    scanf("%d",&n2);

    if(n1 > n2){
        n3 = n1 - n2;
        printf("A diferenca eh de: %d", n3);
    }else if(n2 > n1){
        n3 = n2 - n1;
        printf("A diferenca eh de: %d", n3);
    }else if(n2 == n1)
        printf("Valores iguais");
    else
        printf("Valores invalidos");

}
