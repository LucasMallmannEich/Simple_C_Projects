Trabalhando com Strings em C

Proposta:  

Escreva um programa que lê duas strings e informa o tamanho e a igualdade entre elas.      
No final, escreva as strings concatenadas.

Resolução:

+ Função "int tamanho(char str_tamanho[])":
  - Essa função retorna um número inteiro.
  - Seu parâmetro é um vetor de caracteres (uma string).
  - Dentro dela, utilizei um "loop for" para verificar se o caractere em uma certa posição da string (passada como parâmetro), é igual à '\0'.
  - Se o caractere for '\0', ele encerra o "loop for"; se não, ele encrementa 1 à variável "tam", que definirá o tamanho da string.
  - Retorna essa variável "tam" (int).

+ Função "void igualdade(int tam1, int tam2)":
  - Essa função não retorna nada, ela apenas imprime a diferença de tamanho entre duas strings.
  - Seus parâmetros são dois números inteiros (tamanho da primeira string e tamanho da segunda string).
  - Se o tam1 for maior do que o tam2, ele informa que a primeira string é maior do que a segunda.
  - Se o tam2 for maior do que o tam1, ele informa que a segunda string é maior do que a primeira.
  - Se ambas os parâmetros passados forem iguais, ele informa que ambas as strings possuem o mesmo tamanho.

+ Função "void concatenar(char s_1[], char s_2[])":
  - Essa função não retorna nada, ela apenas imprime as duas strings (passadas como parâmetros) concatenadas.
  - A variável "t"(int) representa os tamanhos de ambas as strings somados.
  - Em primeiro lugar, elaborei um laço "for", que parará quando o incremento atingir o valor do tamanho da primeira string (s_1) passada como parâmetro.
  - Até lá, a string concatenada (str_concatenar) receberá os elementos da primeria string informada.
  - Após esse primeiro laço "for", o código terá outro laço "for".
  - O segundo laço "for" irá parar quando o incremento for igual à variável "t", que define o tamanho da nova string que será formada (str_concatenar).
  - Enquanto isso, os elementos da nova string na posição do incremento serão iguais aos elementos da segunda string informada pelo usuário na posição de seu próprio incremento.
  - Por fim, o programa irá imprimir a string concatenada (nova string gerada).
