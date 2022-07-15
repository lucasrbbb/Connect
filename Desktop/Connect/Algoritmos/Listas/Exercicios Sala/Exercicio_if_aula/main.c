#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Digite um numero inteiro:");
    scanf("%d",&num);

    if(num%2 == 0 && num>10||num%2 != 0 && num<50){
        printf("SIM");
    } else {
        printf("NAO");
    }
}
