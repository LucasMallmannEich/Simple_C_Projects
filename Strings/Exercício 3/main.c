#include <stdio.h>
#include <stdlib.h>

// 3. Escrever um programa que lê duas strings e informa o tamanho, a igualdade entre elas e no final escrever as strings concatenadas.

int tamanho(char str_tamanho[]){
    int i=0, tam=0;

    for(i; str_tamanho[i]!='\0'; i++){
        tam = tam + 1;
    }
    return tam;
}

void igualdade(int tam1, int tam2){
    if (tam1 > tam2){
        printf(" A primeira string apresenta-se maior do que a segunda string, logo, sao diferentes.\n");
    }
    else if (tam2 > tam1){
        printf(" A segunda string apresenta-se maior do que a primeira string, logo, sao diferentes.\n");
    }
    else{
        printf(" As duas strings apresentam o mesmo tamanho, logo, sao iguais.\n");
    }
}

void concatenar(char s_1[], char s_2[]){
    char str_concatenar[10000];
    int i=0, a=0, t1=tamanho(s_1), t2=tamanho(s_2), t=t1+t2;

    for(i; i<t1; i++){
        str_concatenar[i] = s_1[i];
    }

    for(i=t1; i!=t; i++){
        str_concatenar[i] = s_2[a];
        a = a + 1;
    }

    printf(" String concatenada: %s", str_concatenar);
}

int main()
{
    char s1[10000], s2[10000];

    printf(" Digite a primeira string: \n");
    gets(s1);
    printf(" Digite a segunda string: \n");
    gets(s2);

    int tam1 = tamanho(s1), tam2 = tamanho(s2);

    printf(" Tamanho da primeria string: %i.\n", tam1);
    printf(" Tamanho da segunda string: %i.\n", tam2);

    igualdade(tam1, tam2);

    concatenar(s1, s2);

    return 0;
}
