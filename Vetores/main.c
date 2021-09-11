#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Criar um vetor com 50 posições.
    Inicializar o vetor da seguinte maneira:
    Nas posições pares colocar o valor do índice da posição dividido por 2.
    Nas posições ímpares, colocar o valor que corresponde ao dobro do índice da posição.
    Ex:
        v[2]=1
        v[3]=6
    */

    int vetor[50], x=0;

    for(x; x<50; x++){
        if(x%2 == 0){
            vetor[x]=(x/2);
        }
        else if(x%2 == 1){
            vetor[x]=(x*2);
        }
    printf(" v[%i]=%i\n", x, vetor[x]);
    }

    return 0;
}
