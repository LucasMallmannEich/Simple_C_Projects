#include <stdio.h>
#include <stdlib.h>

#define COLUNA 20
#define LINHA 20

/*
Criar uma matriz 20x20;
1) Preencher essa matriz(origem) com números aleatórios menores que 100.
2) Criar duas outras matrizes, uma chamada par e outra impar e iniciá-las com zero.
3) Na matriz par, copiar os números pares da matriz origem nas mesmas posições que se encontram na matriz origem.
4) Na matriz ímpar, copiar os números ímpares da matriz origem nas mesmas posições que se encontram na matriz origem.
5) Exibir as três matrizes.
*/

int main()
{
    // Criar uma matriz 20x20:

    int matriz[20][20];

    // Preencher essa matriz(origem) com números aleatórios menores que 100:

    for(int i=0; i!=LINHA; i++){
        for(int j=0; j!=COLUNA; j++){
            matriz[i][j] = rand() % 100;
        }
    }

    // Criar duas outras matrizes, uma chamada par e outra ímpar e iniciá-las com zero.

    int par[20][20], impar[20][20];

    for(int i=0; i!=LINHA; i++){
        for(int j=0; j!=COLUNA; j++){
            par[i][j] = 0;
            impar[i][j] = 0;
        }
    }

    // Na matriz par, copiar os números pares da matriz origem nas mesmas posições que se encontram na matriz origem.

    for(int i=0; i!=LINHA; i++){
        for(int j=0; j!=COLUNA; j++){
            if(matriz[i][j]%2==0){
                par[i][j] = matriz[i][j];
            }
        }
    }

    // Na matriz ímpar, copiar os números ímpares da matriz origem nas mesmas posições que se encontram na matriz origem.

    for(int i=0; i!=LINHA; i++){
        for(int j=0; j!=COLUNA; j++){
            if(matriz[i][j]%2!=0){
                impar[i][j] = matriz[i][j];
            }
        }
    }

    // Exibir as três matrizes, seu nome e turma.

    printf(" Matriz Origem: \n\n");

    for(int i=0; i!=LINHA; i++){
        for(int j=0; j!=COLUNA; j++){
            printf("%02i  ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n Matriz Par: \n\n");

    for(int i=0; i!=LINHA; i++){
        for(int j=0; j!=COLUNA; j++){
            printf("%02i  ", par[i][j]);
        }
        printf("\n");
    }

    printf("\n Matriz Impar: \n\n");

    for(int i=0; i!=LINHA; i++){
        for(int j=0; j!=COLUNA; j++){
            printf("%02i  ", impar[i][j]);
        }
        printf("\n");
    }

    return 0;
}
