/*
    Este código permite criptografarmos uma determinada mensagem.
    A sua lógica segue a lógica da "Cifra de César".
    Elaborei uma função chamada "criptografia" que contém a lógica do programa.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Protótipo da função "criptografia".
void criptografia(int k, char mensagem[100]);

// Função "criptografia".
void criptografia(int k, char mensagem[100]){
    for(int i=0; i!=strlen(mensagem); i++){
        // A função desse loop é percorrer todos os caracteres de uma mensagem.

        // Declaração das variáveis.
        int numero;
        char caractere;

        caractere = (char)mensagem[i];
        numero = (int)caractere;

        if(65 <= numero && numero <= 90){
            // É uma letra maiúscula.

            // Caso k seja maior do que 26.
            k = k % 26;

            // Adiciona a chave do usuário ao número do caractere na ASCII.
            numero = numero + k;

            if(numero > 90){
                // Caso o numero passe de 90 ele irá voltar 26 unidades.
                // Como se o alfabeto reiniciasse.
                numero = numero - 26;
            }
        }
        else if(97 <= numero && numero <= 122){
            // É uma letra minúscula.

            // Caso k seja maior do que 26.
            k = k % 26;

            // Adiciona a chave do usuário ao número do caractere na ASCII.
            numero = numero + k;

            if(numero > 122){
                // Caso o numero passe de 122 ele irá voltar 26 unidades.
                // Como se o alfabeto reiniciasse.
                numero = numero - 26;
            }
        }

        // O novo valor do caractere será a conversão do novo número.
        caractere = (char)numero;

        // Esse novo valor será passado para a string.
        // A string mudará o valor de seus caracteres ao final de cada loop.
        mensagem[i] = caractere;
    }

    // Imprime a string formatada.
    printf("%s", mensagem);
}

int main()
{

    // Declaração da variável que será a chave do usuário.
    int key;

    // Pede ao usuário digitar um número que será a chave para a criptografia.
    printf("Digite um numero inteiro nao negativo: ");
    scanf("%i", &key);

    if(key <= 0){
        // O número deve ser maior do que zero.
        printf("Voce deveria ter digitado um numero maior do que zero.");
        return 1;
    }

    // Declaração da variável que será a mensagem que o usuário digitará.
    char menssagem_usuario[100];

    // Pede ao usuário digitar a mensagem a ser encriptografada.
    printf("Digite uma mensagem: \n");
    fflush(stdin);
    gets(menssagem_usuario);

    // Executa a função "criptografia" com os dados fornecidos pelo usuário.
    criptografia(key, menssagem_usuario);

    return 0;
}
