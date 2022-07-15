#include <stdio.h>
#include <stdlib.h>

int main()
{
    double valor;

    printf("Digite o valor em reais:\n");
    scanf("%lf", &valor);

    if(valor <= (39-30)/0.017)
        valor = 39;
    else if(valor < 2500)
        valor = 30 + valor*0.017;
    else if(valor < 6250)
        valor = 56 + valor*0.0066;
    else if(valor < 20000)
        valor = 76 + valor*0.0034;
    else if(valor < 50000)
        valor = 100 + valor*0.0022;
    else if(valor < 500000)
        valor = 155 + valor*0.0011;
    else if(valor >= 500000)
        valor = 255 + valor*0.0009;

    printf("O valor da comissao: R$ %.2lf", valor);
}
