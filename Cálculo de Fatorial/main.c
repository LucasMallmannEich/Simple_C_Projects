#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, fatorial=1;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &num);

    if(num>0){
    for(num; num>0; num--){

        fatorial=fatorial*num;
    }
        printf("Este e o fatorial do numero digitado: %d", fatorial);
    }

    else{
        printf(" Voce digitou um numero que nao e positivo, logo, ele nao possui fatorial.");
    }
    return 0;
}
