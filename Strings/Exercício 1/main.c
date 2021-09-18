#include <stdio.h>
#include <stdlib.h>

// 1. Escrever um programa que lê uma string e a escreve. Através de uma função, escrever a mesma string em ordem inversa.

int tamanho(char str[])
{
    int i=0, tam=0;

    for(i; i<10000; i++){
        if(str[i] == '\0'){
            break;
        }
        else{
            tam = tam + 1;
        }
    }

    return tam;
}

void inverte_string(char str[]){

    char str_inversa[10000];
    int i=0, t=0;

    t = tamanho(str);

    for(i; i!=t; i++){
        str_inversa[i] = str[t-i-1];
    }

    printf(" String inversa: \"%s\".", str_inversa);
}


int main()
{
    char string1[10000];

    printf("Digite uma string: \n");
    gets(string1);

    printf(" String digitada: \"%s\".\n", string1);

    inverte_string(string1);

    return 0;
}
