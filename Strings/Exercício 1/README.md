Trabalhando com Strings em C   

Proposta:

Escrever um programa que lê uma string e a escreve.   
Através de uma função, escrever a mesma string em ordem inversa.

Resolução:

- Função "int tamanho(char str[])":
  + Essa função retorna um número inteiro.
  + Seu parâmetro é um vetor de caracteres (uma string).
  + Dentro dela, utilizei um "loop for" para verificar se o caractere em uma certa posição da string (passada como parâmetro), é igual à '\0'.
  + Se o caractere for '\0', ele encerra o "loop for"; se não, ele encrementa 1 à variável "tamanho", que definirá o tamanho da string.]
  + Retorna essa variável "tamanho" (int).

- Função "void inverte_string(char str[])":
  + Essa função não retorna nada, ela imprime a string inversa.
  + Seu parâmetro é um vetor de caracteres (uma string).
  + Nessa função, declarei a string "str_inversa", para utilizar posteriormente.
  + Também declarei a variável "t" (int) e utilizei a função "tamanho" para captar o tamanho da string (em número de caracteres). 
  + Por meio de um laço de repetição, codifiquei a "str_inversa", na posição "i", para ser igual à string original, na posição "t-i-1" (afinal, se a string original tiver 5 caracteres, a string inversa na posição 0, será igual à string original na posição 5-0-1, ou seja, na posição 4). 
  + Ex.: string original - 'poder'; string inversa - 'redop'. string inversa (posição 0) - 'r' vai ser igual à string original (posição 5-0-1 = 4), o que corresponde à 'r'.
  + Imprime a nova string "str_inversa".
