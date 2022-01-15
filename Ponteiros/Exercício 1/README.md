Trabalhando com Ponteiros

Proposta:

int sinal(float *frequencia, float *periodo);           

Função: Calcula o parâmetro cujo valor é zero.             
Parâmetros : frequencia – ponteiro para o valor de frequencia do sinal          
periodo – ponteiro para o valor do periodo do sinal          
Retorno : 0 para função realizada,            
-1 para erro de parametro (os dois parametros em zero)              
-2 se os dois parâmetros forem diferentes e 0;              


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
