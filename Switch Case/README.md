Trabalhando com o Switch Case

Proposta: 

Peça ao usuário para digitar três notas entre 0 e 10 e calcule a média delas (use somente a parte inteira do resultado).
Após isso, classifique a média usando a função switch-case.
Se a média for menor do que 6, imprima "insuficiente".
Se a média for maior ou igual a 6 e menor que 8, imprima "mediocre".
Se a média for maior ou igual a 8, imprima "excelente".

Resolução:

Declarei, primeiramente, três notas (n1, n2 e n3) como variáveis do tipo float, enquanto a "media" declarei como uma variável do tipo int.    
Após isso, pedi ao usuário para digitar as notas entre 0 e 10.          
Como quero exibir inicialmente o pedido ao usuário digitar as notas e sua respota, utilizei a estrutura "do while".                 
O usuário irá digitar a sua nota; se ela não estiver entre 0 e 10, irá aparecer em sua tela a seguinte mensagem: "Digite uma nota dentro do intervalo de 0 a 10:".            
Esse loop só será quebrado quando a nota digitada estiver entre 0 e 10.              
Dessa mesma forma se sucederá para as três notas.                                                                                                       
Ao final, calculei a média (soma das três notas divida por 3) e peguei apenas a parte inteira desse número, já que declarei a variável "media" como int.               
Usando o "switch case", classifiquei o aluno da seguinte forma:                                  
Em caso de sua media for 0, 1, 2, 3, 4 ou 5 ----- printf(" Insuficente.\n");                                          
Em caso de sua media for 6 ou 7 ----- printf(" Mediocre.\n");                                  
Em caso de sua media for 8, 9 ou 10 ----- printf(" Excelente.\n");                                 
