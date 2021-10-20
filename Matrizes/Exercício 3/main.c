#include <stdio.h>
#include <stdlib.h>

// NOME: Lucas Mallmann Eich.

// A partir de uma matriz 5x5, criar a matriz transposta.
// Matriz transposta: as linhas passam a ser as colunas e colunas as linhas.
// Exibir a matriz original e a matriz transposta.

int main()
{
    printf("Nome: Lucas Mallmann Eich.");

    printf("\n");

    // Incialização das variáveis.

    int mat[5][5], mat_modificada[5][5], i, j;

    // Leitura da matriz mat 5 X 5 de inteiros.

    for(i=0; i!=5; i++){
        for(j=0; j!=5; j++){
            printf("Digite um valor inteiro para a matriz na linha %i e coluna %i: ", i, j);
            scanf("%i", &mat[i][j]);
        }
    }

    // Substituição das linhas pelas colunas.

    for(i=0; i!=5; i++){
        for(j=0; j!=5; j++){
            mat_modificada[i][j] = mat[j][i];
        }
    }

    // Impressão da matriz mat original.

    printf("\n");

    for(i=0; i!=5; i++){
        for(j=0; j!=5; j++){
            printf(" Matriz Original[%i][%i] = %i    ", i, j, mat[i][j]);
        }
        printf("\n");
    }

    // Impressão da matriz mat modificada.

    printf("\n");

    for(i=0; i!=5; i++){
        for(j=0; j!=5; j++){
            printf(" Matriz Modificada[%i][%i] = %i    ", i, j, mat_modificada[i][j]);
        }
        printf("\n");
    }

    printf("Nome: Lucas Mallmann Eich.");

    return 0;
}
