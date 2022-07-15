#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 9\n");

    int cod_aluno;
    float nota1, nota2, nota3, not_med;

    printf("Digite o codigo do aluno:");
    scanf("%d",&cod_aluno);

    printf("Digite a primeira nota:");
    scanf("%f", &nota1);

    printf("Digite a segunda nota:");
    scanf("%f", &nota2);

    printf("Digite a terceira nota:");
    scanf("%f", &nota3);

    not_med = (nota1+nota2+nota3)/3;

    if(not_med < 6)
        printf("O aluno numero %d reprovou por nota.", cod_aluno);
    if(not_med >= 6)
        printf("O aluno numero %d foi aprovado por nota.", cod_aluno);

}
