#include <stdio.h>
#include <stdlib.h>

// Elabore um programa que lê valores inteiros para uma matriz a[6][6].
// Calcule, a seguir, a soma dos elementos das colunas e linhas, escrevendo esses resultados num vetor.
// Escreva o vetor resultante.

int main()
{
    // Inicializando as variáveis.

    int matriz_a[6][6], i, j, cont=0, soma_colunas[6], soma_c=0, soma_linhas[6], soma_l=0;

    // Recebendo os valores inteiros para a matriz.

    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            printf("Digite um valor inteiro para a linha %i e coluna %i: ", i, j);
            scanf("%i", &matriz_a[i][j]);
        }
    }

    // Exibindo a matriz.

    printf("\n");

    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            printf(" Matriz[%i][%i] = %i  ", i, j, matriz_a[i][j]);
        }
        printf("\n");
    }

    // Calculando a soma dos elementos das colunas da matriz.

    while(cont!=6){
            for(i=0; i<6; i++){
                for(j=0; j<6; j++){
                        if(j==cont){
                        soma_c = soma_c + matriz_a[i][j];
                }
            }
        }
        soma_colunas[cont] = soma_c;
        soma_c = 0;
        cont = cont + 1;
    }

    // Calculando a soma dos elementos das linhas da matriz.

    cont = 0;

    while(cont!=6){
        for(i=0; i<6; i++){
            for(j=0; j<6; j++){
                if(i==cont){
                    soma_l = soma_l + matriz_a[i][j];
                }
            }
        }
        soma_linhas[cont] = soma_l;
        soma_l = 0;
        cont = cont + 1;
    }

    // Escrevendo o vetor resultante.

    printf("\n");

    for(i=0; i!=6; i++){
        printf(" A soma dos elementos da coluna %i resulta em %i.\n", i, soma_colunas[i]);
    }

    printf("\n");

    for(i=0; i!=6; i++){
        printf(" A soma dos elementos da linha %i resulta em %i.\n", i, soma_linhas[i]);
    }

    return 0;
}
