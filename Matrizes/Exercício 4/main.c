#include <stdio.h>
#include <stdlib.h>

// Faça uma matriz 30x30 que seja inicializada com zero em todas as suas posições.
// Imprima a matriz.
// Após isso, preencha a sua borda com o número 1.
// Imprima a matriz.
// Após isso, substitua os elementos da diagonal principal por "x" e os elementos da diagonal por "y".

int main()
{
    // Declaração das variáveis:

    int matriz[30][30], i, j;

    // Inicialização da matriz com 0 em todas as suas posições:

    for(i=0; i!=30; i++){
        for(j=0; j!=30; j++){
            matriz[i][j] = 0;
        }
    }

    // Impressão da matriz repleta de zeros.

    for(i=0; i!=30; i++){
        for(j=0; j!=30; j++){
            printf("Matriz [%i][%i] = %i\n", i, j, matriz[i][j]);
        }
    }

    // Substituição do 0 por 1, caso o número esteja na borda da matriz 30x30.

    for(i=0; i!=30; i++){
        for(j=0; j!=30; j++){
            if(i==0 || i==29 || j==0 || j==29){
                matriz[i][j] = 1;
            }
        }
    }

    // Impressão da matriz.

    for(i=0; i!=30; i++){
        for(j=0; j!=30; j++){
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }

    // Alteração dos elementos da diagonal principal por "x".

    for(i=0; i!=30; i++){
        for(j=0; j!=30; j++){
            if(i==j){
                matriz[i][j] = 'x';
        }}
    }

    // Impressão da matriz alterada.

    for(i=0; i!=30; i++){
        for(j=0; j!=30; j++){
            if(i==j){
                printf("%c ", matriz[i][j]);
            }
            else{
                printf("%i ", matriz[i][j]);
        }}
        printf("\n");
    }

    // Alteração dos elementos da diagonal secundária por "y".

    for(i=0; i!=30; i++){
        for(j=0; j!=30; j++){
            if(i+j==29){
                matriz[i][j] = 'y';
        }}
    }

    // Impressão da matriz alterada.

    for(i=0; i!=30; i++){
        for(j=0; j!=30; j++){
            if(i==j || i+j==29){
                printf("%c ", matriz[i][j]);
            }
            else{
                printf("%i ", matriz[i][j]);
        }}
        printf("\n");
    }

    return 0;
}
