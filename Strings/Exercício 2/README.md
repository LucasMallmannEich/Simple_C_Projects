Trabalhando com Strings em C

Proposta:

Escrever um programa que lê uma string s[30].  
Através de uma função, escreva cada palavra dessa string numa nova linha.

Resolução:
+ Função "int tamanho(char str_comp[])":
  + Essa função retorna um número inteiro.
  + Seu parâmetro é um vetor de caracteres (uma string).
  + Dentro dela, utilizei um "loop for" para verificar se o caractere em uma certa posição da string (passada como parâmetro), é igual à '\0'.
  + Se o caractere for '\0', ele encerra o "loop for"; se não, ele encrementa 1 à variável "counter", que definirá o tamanho da string.
  + Retorna essa variável "counter" (int).
+ Função "void leitura_str(char str[30])":
   + Essa função não retorna nada, ela imprime a cada palavra da string numa linha nova.
   + Seu parâmetro é um vetor de caracteres de 30 posições (uma string).
   + Nessa função, utilizei a função "int tamanho(char str_comp[])" para descobrir o tamanho da string e armazenar esse valor numa variável x (int).
   + Também declarei a variável "i" (int), com a finalidade de de utilizá-la como contador no "loop for".
   + Então, por meio de uma laço de repetição ("for"), defini que o "i" continuará sendo incrementado até que o valor de "i" seja igual ao valor de "x" (tamanho da string).
   + Dentro do laço, fiz o seguinte: se a string (passada como parâmetro) na posição "i" for igual à um espaço, pule uma linha (por meio do "\n"); se não, imprima o caractere da string na posição "i".
