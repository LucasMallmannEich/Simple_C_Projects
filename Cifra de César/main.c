/*
    Este c�digo permite criptografarmos uma determinada mensagem.
    A sua l�gica segue a l�gica da "Cifra de C�sar".
    Elaborei uma fun��o chamada "criptografia" que cont�m a l�gica do programa.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Prot�tipo da fun��o "criptografia".
void criptografia(int k, char mensagem[100]);

// Fun��o "criptografia".
void criptografia(int k, char mensagem[100]){
    for(int i=0; i!=strlen(mensagem); i++){
        // A fun��o desse loop � percorrer todos os caracteres de uma mensagem.

        // Declara��o das vari�veis.
        int numero;
        char caractere;

        caractere = (char)mensagem[i];
        numero = (int)caractere;

        if(65 <= numero && numero <= 90){
            // � uma letra mai�scula.

            // Caso k seja maior do que 26.
            k = k % 26;

            // Adiciona a chave do usu�rio ao n�mero do caractere na ASCII.
            numero = numero + k;

            if(numero > 90){
                // Caso o numero passe de 90 ele ir� voltar 26 unidades.
                // Como se o alfabeto reiniciasse.
                numero = numero - 26;
            }
        }
        else if(97 <= numero && numero <= 122){
            // � uma letra min�scula.

            // Caso k seja maior do que 26.
            k = k % 26;

            // Adiciona a chave do usu�rio ao n�mero do caractere na ASCII.
            numero = numero + k;

            if(numero > 122){
                // Caso o numero passe de 122 ele ir� voltar 26 unidades.
                // Como se o alfabeto reiniciasse.
                numero = numero - 26;
            }
        }

        // O novo valor do caractere ser� a convers�o do novo n�mero.
        caractere = (char)numero;

        // Esse novo valor ser� passado para a string.
        // A string mudar� o valor de seus caracteres ao final de cada loop.
        mensagem[i] = caractere;
    }

    // Imprime a string formatada.
    printf("%s", mensagem);
}

int main()
{

    // Declara��o da vari�vel que ser� a chave do usu�rio.
    int key;

    // Pede ao usu�rio digitar um n�mero que ser� a chave para a criptografia.
    printf("Digite um numero inteiro nao negativo: ");
    scanf("%i", &key);

    if(key <= 0){
        // O n�mero deve ser maior do que zero.
        printf("Voce deveria ter digitado um numero maior do que zero.");
        return 1;
    }

    // Declara��o da vari�vel que ser� a mensagem que o usu�rio digitar�.
    char menssagem_usuario[100];

    // Pede ao usu�rio digitar a mensagem a ser encriptografada.
    printf("Digite uma mensagem: \n");
    fflush(stdin);
    gets(menssagem_usuario);

    // Executa a fun��o "criptografia" com os dados fornecidos pelo usu�rio.
    criptografia(key, menssagem_usuario);

    return 0;
}
