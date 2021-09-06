#include <stdio.h>
#include <stdlib.h>

float soma(float v1, float v2){
    return v1 + v2;
}

float subtracao(float v1, float v2){
    return v1 - v2;
}

float multiplicacao(float v1, float v2){
    return v1 * v2;
}

float divisao(float v1, float v2){
    return v1 / v2;
}

int main()
{
    float v1, v2, x;
    char valor;

    printf(" Digite o primeiro valor: \n");
    scanf("%f", &v1);
    printf("\n Digite o segundo valor: \n");
    scanf("%f", &v2);

    printf(" Digite qual operacao matematica voce deseja efetuar com esses dois numeros: \n");
    printf(" Digite:\n '+' -> SOMA\n '-' -> SUBTRACAO\n '*' -> MULTIPLICACAO\n '/' -> DIVISAO\n");
    scanf("%s", &valor);

    switch(valor){

    case '+':
        x = soma(v1, v2);
        printf(" Soma: %.2f", x);
        break;

    case '-':
        x = subtracao(v1, v2);
        printf(" Subtracao: %.2f", x);
        break;

    case '*':
        x = multiplicacao(v1, v2);
        printf(" Multiplicacao: %.2f", x);
        break;

    case '/':
        x = divisao(v1, v2);
        printf(" Divisao: %.2f", x);
        break;

    default:
        printf(" Voce nao digitou nenhuma das 4 operacoes aritmeticas. \n");
        break;
    }

    return 0;
}
