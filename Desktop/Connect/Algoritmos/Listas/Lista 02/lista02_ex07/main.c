#include <stdio.h>
#include <stdlib.h>

int main()
{
    float alt, peso;
    char sexo;

    printf("Digite o sexo, M para masculino e F para feminino\n");
    scanf("%c",&sexo);

    printf("Digite a altura em metros:\n");
    scanf("%f",&alt);

    if(sexo == 'M' || sexo == 'm'){
        peso = (72.7*alt)-58;
        printf("Peso ideal: %.2f\n", peso);
    } else if(sexo == 'F' || sexo == 'f') {
        peso = (62.1*alt)-44.7;
        printf("Peso ideal: %.2f\n", peso);
    } else {
        printf("Valor de genero invalido");
    }
}
