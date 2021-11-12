#include <stdio.h>
#include <stdlib.h>

// Fa�a uma matriz 30x30 que seja inicializada com zero em todas as suas posi��es.
// Imprima a matriz.
// Ap�s isso, preencha a sua borda com o n�mero 1.
// Imprima a matriz.

int main()
{
    // Declara��o das vari�veis:

    int matriz[30][30], i, j;

    // Inicializa��o da matriz com 0 em todas as suas posi��es:

    for(i=0; i!=30; i++){
        for(j=0; j!=30; j++){
            matriz[i][j] = 0;
        }
    }

    // Impress�o da matriz repleta de zeros.

    for(i=0; i!=30; i++){
        for(j=0; j!=30; j++){
            printf("Matriz [%i][%i] = %i\n", i, j, matriz[i][j]);
        }
    }

    // Substitui��o do 0 por 1, caso o n�mero esteja na borda da matriz 30x30.

    for(i=0; i!=30; i++){
        for(j=0; j!=30; j++){
            if(i==0 || i==29 || j==0 || j==29){
                matriz[i][j] = 1;
            }
        }
    }

    // Impress�o da matriz.

    for(i=0; i!=30; i++){
        for(j=0; j!=30; j++){
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
