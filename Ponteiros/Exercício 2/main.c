#include <stdio.h>
#include <stdlib.h>

// int ordena(int *n1, int *n2, int *n3, char ordem);
// Função: ordena os valores passados em ordem crescente ou decrescente.
// Parâmetros: n1, n2 e n3 (ponteiros com valores a serem ordenados):
// Ordem: ‘c’ para ordenamento crescente e ‘d’ para ordenamento decrescente.
// Pode ser maiúsculo ou minúsculo.
// Retorno : 0 para função realizada; -1 para erro de parâmetro.

int ordena(int *n1, int *n2, int *n3, char ordem){
    int maior = -999999999, medio = *n2, menor = 9999999999;
    int vetor[]={*n1, *n2, *n3};
    int big, small;
    for(int i=0; i!=3; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
            big = i;
        }
        if(vetor[i] < menor){
            menor = vetor[i];
            small = i;
        }
    }
    for(int i=0; i!=3; i++){
        if(i != big && i != small){
            medio = vetor[i];
        }
    }
    if(ordem=='d' || ordem=='D'){
        printf("Ordem decrescente: %i, %i e %i.\n", maior, medio, menor);
        return 0;
    }
    else if(ordem=='c' || ordem=='C'){
        printf("Ordem crescente: %i, %i e %i.\n", menor, medio, maior);
        return 0;
    }
    else{
        printf("Ocorreu um erro de parametro.\n");
        return -1;
    }
}

int main()
{
    printf("\n \t NOME: Lucas Mallmann Eich. \n\n");

    int *n1, num1, *n2, num2, *n3, num3;
    char ordem;

    printf("Digite o primeiro valor: \n");
    scanf("%i", &num1);

    n1 = &num1;

    printf("Digite o segundo valor: \n");
    scanf("%i", &num2);

    n2 = &num2;

    printf("Digite o terceiro valor: \n");
    scanf("%i", &num3);

    n3 = &num3;

    fflush(stdin);

    printf("Digite um caractere ('c' para crescente ou 'd' para descrescente): ");
    ordem = getchar();

    int ordenamento = ordena(n1, n2, n3, ordem);

    printf("%i", ordenamento);

    printf("\n \t NOME: Lucas Mallmann Eich. \n\n");

}
