Trabalhando com Estruturas de Repetição (while e do while)

Proposta:

Elaborar um código onde é pedido ao usuário digitar o valor de três notas de um aluno qualquer informadas pelo usuário. O programa deve "aceitar" os valores informados apenas quando eles estiverem entre 0 e 10 (inclusos). Após isso, ele deve exibir a média do aluno. Se a média for inferior a 6 exibir a mensagem "Insuficiente" Se a média estiver entre 6 e menor que 8, exibir a mensagem "medíocre" E se a média for maior ou igual a 8 exibir a mensagem "excelente".

Resolução:

Declarei, primeiramente, três notas (n1, n2 e n3) e a média como variáveis do tipo float.  
Após isso, pedi ao usuário para digitar as notas entre 0 e 10.   
Como quero exibir inicialmente o pedido ao usuário digitar as notas e sua respota, utilizei a estrutura "do while".  
O usuário irá digitar a sua nota; se ela não estiver entre 0 e 10, irá aparecer em sua tela a seguinte mensagem: "Digite uma nota dentro do intervalo de 0 a 10:".  
Esse loop só será quebrado quando a nota digitada estiver entre 0 e 10.  
Dessa mesma forma se sucederá para as três notas.  
Ao final, calculei a média (soma das três notas divida por 3) e classifiquei o aluno de acordo com ela.
