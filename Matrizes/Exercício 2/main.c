#include <stdio.h>
#include <stdlib.h>

// Faça um programa que leia uma matriz mat 3 x 4 de inteiros.
// Substitua seus elementos negativos por 0.
// Ao final, imprima a matriz mat original e a modificada.

int main()
{
    // Incialização das variáveis.

    int mat[3][4], mat_modificada[3][4], i, j;

    // Leitura da matriz mat 3 X 4 de inteiros.

    for(i=0; i!=3; i++){
        for(j=0; j!=4; j++){
            printf("Digite um valor inteiro para a linha [%i] e coluna [%i]: ", i, j);
            scanf("%i", &mat[i][j]);
        }
    }

    // Substituição de seus elementos negativos por 0.

    for(i=0; i!=3; i++){
        for(j=0; j!=4; j++){
            if(mat[i][j]<0){
                mat_modificada[i][j] = 0;
            } else{
                mat_modificada[i][j] = mat[i][j];
            }
        }
    }

    // Impressão da matriz mat original.

    printf("\n");

    for(i=0; i!=3; i++){
        for(j=0; j!=4; j++){
            printf(" Matriz Original[%i][%i] = %i    ", i, j, mat[i][j]);
        }
        printf("\n");
    }

    // Impressão da matriz mat modificada.

    printf("\n");

    for(i=0; i!=3; i++){
        for(j=0; j!=4; j++){
            printf(" Matriz Modificada[%i][%i] = %i    ", i, j, mat_modificada[i][j]);
        }
        printf("\n");
    }

    return 0;
}
