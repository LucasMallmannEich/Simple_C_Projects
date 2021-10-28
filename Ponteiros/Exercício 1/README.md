Trabalhando com Ponteiros

Proposta:

A proposta do desafio já está inserida, na forma de comentário, no topo do código.

Resolução:

Em primeiro lugar, criei a função "sinal", que retorna um número inteiro e tem como parâmetro dois ponteiros.   
A função utiliza, obviamente, os valores para quais os ponteiros estão "apontando".   
Após isso, há um bloco de estruturas condicionais, logo, a função retorna:
+ -1, caso ambos os números que se encontram no endereço contido nos ponteiros sejam zero;
+ -2, caso ambos os números que se encontram no enderço contido nos ponteiros sejam diferentes de zero;   
+ 0, caso o número contido no endereço de um dos ponteiros seja zero e o número contido no endereço do outro ponteiro seja diferente de zero.   

Em segundo lugar, agora já na função "main", o usuário irá digitar o valor do tipo "float" em duas variáveis diferentes.   
Os dois ponteiros irão receber os endereços de suas determinadas variáveis informadas pelo usuário.    
Por fim, é passado os dois ponteiros como parâmetros da função "sinal", que retornará os valores determinados na proposta.               
