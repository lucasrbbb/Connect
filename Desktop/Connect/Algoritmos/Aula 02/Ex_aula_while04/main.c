#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;

    printf("Digite o valor de n:");
    scanf("%d", &n);

    for (i=2; i<=n; i++){
        if(n%i ==0)
            printf("%d \n",i);
    }
}
