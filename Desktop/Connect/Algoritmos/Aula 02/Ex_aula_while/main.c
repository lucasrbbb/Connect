#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i =0;

    printf("Digite os numero para selecionar o prato e 5 para sair:\n");
    printf("1 - Panqueca.\n");
    printf("2 - Cachorro Quente.\n");
    printf("3 - Polenta com carne.\n");
    printf("4 - Beijinho.\n");
    printf("5 - Sair.\n");

    while (i != 5 )
    {

        printf("Digite a opcao: ");
        scanf("%d",&i);

        if(i>5)
            printf("Valor invalido.\n");

        switch(i)
        {
        case 1:
            printf("O prato escolhido foi panqueca.\n");
            break;
        case 2:
            printf("O prato escolhido foi cachorro quente.\n");
            break;
        case 3:
            printf("O prato escolhido foi polenta com carne.\n");
            break;
        case 4:
            printf("O prato escolhido foi beijinho.\n");
            break;
        }
    }



}

