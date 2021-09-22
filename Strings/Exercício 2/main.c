#include <stdio.h>
#include <stdlib.h>

//  2. Escrever um programa que lê uma string s[30]. Uma função deve escrever cada palavra desta string numa nova linha.

int tamanho(char str_comp[]){
    int i=0, counter=0;

    for(i; str_comp[i]!='\0'; i++){
        counter = counter + 1;
    }

    return counter;
}

void leitura_str(char string[30]){
    int i=0, x=tamanho(string);

    for(i; i!=x; i++){
        if(string[i] == ' '){
            printf("\n");
        }
        else{
            printf("%c", string[i]);
        }
    }
}

int main()
{
    char str[30];

    printf("Digite uma string (limite de 29 caracteres): \n");
    gets(str);

    leitura_str(str);

    return 0;
}
