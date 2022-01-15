Trabalhando com Ponteiros

Proposta:

Faça a seguinte função:             

int ordena(int *n1, int *n2, int *n3, char ordem);                         

Função: ordena os valores passados em ordem crescente ou decrescente.        
Parâmetros: n1, n2 e n3 (ponteiros com valores a serem ordenados):          
Ordem: ‘c’ para ordenamento crescente e ‘d’ para ordenamento decrescente.            
Pode ser maiúsculo ou minúsculo.                                           
Retorno : 0 para função realizada; -1 para erro de parâmetro.            

Resolução:

Criei a função "ordena", que recebe três ponteiros (e irá captar os números que estão dentro do endereço indicados por eles) e um caractere como parâmetros.  
Essa função irá imprimir a ordem crescente ou descrescente dos números postos como parâmetros, de acordo com o caractere digitado.  
O usuário irá, já na função "main", digitar os três números inteiros (variáveis do tipo int) e o caractere que irá ser influente para a escolha da organização por ordem crescente ou descrescente.     
Por fim, o programa irá imprimir os números na ordem desejada pelo usuário, além de retornar 0, para função realizada com sucesso, ou -1, para função não realizada (erro de parâmetros).
