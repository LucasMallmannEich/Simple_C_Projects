#include <stdio.h>
#include <stdlib.h>

#define COLUNA 10
#define LINHA 10

int main()
{
    // Declaração das variáveis:

    int matriz[LINHA][COLUNA], i, j, cont=0, soma_colunas[COLUNA], soma_c=0, soma_linhas[LINHA], soma_l=0;

    // Inicialização da matriz com números aleatórios (até 80):

    for(i=0; i!=LINHA; i++){
        for(j=0; j!=COLUNA; j++){
            matriz[i][j] = rand()%80;  // a função rand() gera números aleatórios
        }
    }

    // Impressão da matriz.

    for(i=0; i!=LINHA; i++){
        for(j=0; j!=COLUNA; j++){
            printf("%02i ", matriz[i][j]);
        }
    printf("\n");
    }
    printf("\n");


    // Calculando a soma dos elementos das colunas da matriz.

    while(cont!=COLUNA){
            for(i=0; i<LINHA; i++){
                for(j=0; j<COLUNA; j++){
                        if(j==cont){
                        soma_c = soma_c + matriz[i][j];
                }
            }
        }
        soma_colunas[cont] = soma_c;
        soma_c = 0;
        cont = cont + 1;
    }

    // Calculando a soma dos elementos das linhas da matriz.

    cont = 0;

    while(cont!=LINHA){
        for(i=0; i<LINHA; i++){
            for(j=0; j<COLUNA; j++){
                if(i==cont){
                    soma_l = soma_l + matriz[i][j];
                }
            }
        }
        soma_linhas[cont] = soma_l;
        soma_l = 0;
        cont = cont + 1;
    }

    // Escrevendo o vetor resultante.

    printf("\n");

    for(i=0; i!=LINHA; i++){
        printf(" A soma dos elementos da coluna %i resulta em %i.\n", i, soma_colunas[i]);
    }

    printf("\n");

    for(i=0; i!=COLUNA; i++){
        printf(" A soma dos elementos da linha %i resulta em %i.\n", i, soma_linhas[i]);
    }

    printf("\n");

    return 0;
}
