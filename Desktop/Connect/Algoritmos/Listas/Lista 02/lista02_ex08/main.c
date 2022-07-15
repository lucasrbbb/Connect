#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 8\n");

    float valor;
    char cod;

    printf("Digite o valor da etiqueta:");
    scanf("%f",&valor);

    printf("Digite 'a' para pagamento a vista ou no cheque, desconto de 10.\n");
    printf("Digite 'b' para pagamento a vista no cartao de credito, desconto de 15.\n");
    printf("Digite 'c' para pagamento em duas vezes, preço normal de etiqueta sem juros.\n");
    printf("Digite 'd' para pagamento em duas vezes, preço normal de etiqueta mais juros de 10.\n");

    fflush(stdin);

    scanf("%c",&cod);

    if(cod =='a'){
        valor = valor*0.90;
        printf("Valor a ser pago: %.2f",valor);
    }else if(cod == 'b'){
        valor = valor*0.85;
        printf("Valor a ser pago: %.2f",valor);
    }else if(cod == 'c'){
        valor = valor/2;
        printf("Valor a ser pago: %.2f",valor);
    }else if(cod == 'd'){
        valor = valor*1.10/2;
        printf("Valor a ser pago: %.2f",valor);
    }else
        printf("Valor invalido.");
}
