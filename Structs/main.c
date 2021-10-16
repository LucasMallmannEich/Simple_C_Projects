#include <stdio.h>
#include <stdlib.h>

/* Crie uma estrutura representando os alunos do curso de Introdução à Programação. A estrutura deve conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da terceira prova.
a. Permita ao usuário entrar com os dados de até 10 alunos;
b. Exiba a matrícula, nome e nota do aluno com maior nota na primeira prova, na segunda prova e na terceira prova;
c. Encontre e escreva o nome do aluno, sua notas e média para o aluno com maior média geral;
d. Encontre e escreva o nome do aluno, sua notas e média para o aluno com menor média geral;
e. Para cada aluno, escreva seu nome e média e informe se ele foi aprovado ou reprovado, considerando média 6 para aprovação.
*/

int main()
{
    int i = 0, j;
    float maior_n1, maior_n2, maior_n3, maior_media = -1;
    float menor_media = 11;

    printf("Digite o numero de alunos (no maximo 10): ");
    scanf("%i", &j);

    struct alunos{
        int matricula;
        char nome[50];
        float n1, n2, n3, media;
    };

    struct alunos v1[10];

    for(i; i<j; i++){
        getchar();
        printf("Digite o nome do aluno %i: ", i+1);
        gets(v1[i].nome);
        printf("Digite o numero de matricula do aluno %i: ", i+1);
        scanf("%i", &v1[i].matricula);
        printf("Digite a nota do aluno %i na primeira prova: ", i+1);
        scanf("%f", &v1[i].n1);
        printf("Digite a nota do aluno %i na segunda prova: ", i+1);
        scanf("%f", &v1[i].n2);
        printf("Digite a nota do aluno %i na terceira prova: ", i+1);
        scanf("%f", &v1[i].n3);
    }

    for(i=0; i<j; i++){
        if(v1[i].n1>maior_n1){
            maior_n1 = v1[i].n1;
        }
    }

    for(i=0; i<j; i++){
        if(v1[i].n1 == maior_n1){
            printf(" O(A) aluno(a) %s, matricula %i, obteve a maior nota - %.2f - na primeira prova.\n", v1[i].nome, v1[i].matricula, maior_n1);
            break;
        }
    }

    for(i=0; i<j; i++){
        if(v1[i].n2>maior_n2){
            maior_n2 = v1[i].n2;
        }
    }

    for(i=0; i<j; i++){
        if(v1[i].n2 == maior_n2){
            printf(" O(A) aluno(a) %s, matricula %i, obteve a maior nota - %.2f - na segunda prova.\n", v1[i].nome, v1[i].matricula, maior_n2);
            break;
        }
    }

    for(i=0; i<j; i++){
        if(v1[i].n3>maior_n3){
            maior_n3 = v1[i].n3;
        }
    }

    for(i=0; i<j; i++){
        if(v1[i].n3 == maior_n3){
            printf(" O(A) aluno(a) %s, matricula %i, obteve a maior nota - %.2f - na terceira prova.\n", v1[i].nome, v1[i].matricula, maior_n3);
            break;
        }
    }

    for(i=0; i<j; i++){
        v1[i].media = (v1[i].n1 + v1[i].n2 + v1[i].n3)/3;
    }

    for(i=0; i<j; i++){
        if(v1[i].media > maior_media){
            maior_media = v1[i].media;
        }
    }

    for(i=0; i<j; i++){
        if(v1[i].media == maior_media){
            printf(" O(A) aluno(a) %s obteve a maior media geral: %.2f.",  v1[i].nome,  v1[i].media);
            printf(" As suas notas foram: nota 1 - %.2f; nota 2 - %.2f; nota 3 - %.2f.\n", v1[i].n1, v1[i].n2, v1[i].n3);
            break;
        }
    }

    for(i=0; i<j; i++){
        if(v1[i].media < menor_media){
            menor_media = v1[i].media;
        }
    }

    for(i=0; i<j; i++){
        if(v1[i].media == menor_media){
            printf(" O(A) aluno(a) %s obteve a menor media geral: %.2f.",  v1[i].nome,  v1[i].media);
            printf(" As suas notas foram: nota 1 - %.2f; nota 2 - %.2f; nota 3 - %.2f.\n", v1[i].n1, v1[i].n2, v1[i].n3);
            break;
        }
    }

    for(i=0; i<j; i++){
        if(v1[i].media<6){
            printf(" Nome do(a) aluno(a): %s. Sua media: %.2f. Esse(a) aluno(a) foi REPROVADO(A).\n", v1[i].nome, v1[i].media);
        }
        else{
            printf(" Nome do(a) aluno(a): %s. Sua media: %.2f. Esse(a) aluno(a) foi APROVADO(A).\n", v1[i].nome, v1[i].media);
        }
    }


    return 0;
}
