#include <stdio.h>
#include <stdlib.h>

/*
Criar duas matrizes 15x15;
Na primeira matriz, iniciar com números aleatórios menores que 80 (usando ponteiros);
Usando ponteiros, copiar os números da  primeira matriz para a segunda matriz observando a seguinte ordem:
O último elemento da matriz de origem deverá ser o primeiro elemento da segunda matriz.
O Penúltimo elemento da matiz origem deverá ser o segundo elemento da segunda matriz...
E assim com os demais elementos.
Exibir as duas matizes  fazendo o uso de ponteiros e no máximo um laço for para cada matriz.
*/

int main()
{
    // Criar duas matrizes 15x15:

    int mat1[15][15], mat2[15][15];

    // Na primeira matriz, iniciar com números aleatórios menores que 80 (usando ponteiros):

    int *pointer1;

    pointer1 = &mat1;

    for(int i=0; i<225; i++){
        *pointer1 = rand() % 80;
        if(i!=224){  // Isso é para que o ponteiro não acrescente uma posição a mais, afinal, a matriz já estará completa.
        pointer1++;
        }
    }

    // Usando ponteiros, copiar os números da  primeira matriz para a segunda matriz observando a seguinte ordem:
    // O último elemento da matriz de origem deverá ser o primeiro elemento da segunda matriz.
    // O Penúltimo elemento da matiz origem deverá ser o segundo elemento da segunda matriz...
    // E assim com os demais elementos.

    int *pointer2;

    pointer2 = &mat2;

    for(int i=0; i!=225; i++){
        *pointer2 = *pointer1;
        pointer1--;
        pointer2++;
    }

    // Exibir as duas matizes  fazendo o uso de ponteiros e no máximo um laço for para cada matriz:

    int *ptr1, *ptr2;

    // Matriz 1:

    int j1=0;

    ptr1 = &mat1;

    for(int i=0; i!=225; i++){
        j1++;
        printf("%02i   ", *ptr1);
        ptr1++;
        if(j1==15){
            printf("\n");
            j1=0;
        }
    }

    printf("\n\n\n\n\n\n");

    // Matriz 2:

    int j2=0;

    ptr2 = &mat2;

    for(int i=0; i!=225; i++){
        j2++;
        printf("%02i   ", *ptr2);
        ptr2++;
        if(j2==15){
            printf("\n");
            j2=0;
        }
    }

    printf("\n NOME: Lucas Mallmann Eich");
    printf("\n TURMA: 4211\n");

    return 0;
}
