Trabalhando com Estruturas (Structs) em Python

Proposta:

Crie uma estrutura representando os alunos do curso de Introdução à Programação.    
A estrutura deve conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da terceira prova.     
a. Permita ao usuário entrar com os dados de até 10 alunos;    
b. Exiba a matrícula, nome e nota do aluno com maior nota na primeira prova, na segunda prova e na terceira prova;    
c. Encontre e escreva o nome do aluno, sua notas e média para o aluno com maior média geral;      
d. Encontre e escreva o nome do aluno, sua notas e média para o aluno com menor média geral;                                    
e. Para cada aluno, escreva seu nome e média e informe se ele foi aprovado ou reprovado, considerando média 6 para aprovação.              

Resolução:

Em primeiro lugar, permiti ao usuário, por meio do primeiro "loop for" do código, informar todos os dados citados acima.  
Esses dados irão estar dentro da struct de cada aluno.  
Irá ter 10 alunos, logo, o tamanho do vetor "v1" (do tipo struct alunos) será 10. 
No segundo "loop for", identifico qual aluno possui a maior nota na primeira prova.   
Utilizo essa mesma estratégia para identificar qual aluno possui a maior nota na segunda e na terceira prova também.  
Utilizo outros "loop for" também para descobrir o aluno que detém a maior e menor média geral entre todos os alunos.   
Ao final do programa, utilizo outro "loop for" para verificar se a média de determinado aluno é maior ou igual à 6.  
Se ela for, é impresso que o aluno está aprovado.  
Se ela não for, é impresso que o aluno está reprovado. 
