/*
    Esse programa tem a finalidade de captar dados fornecidos pelo usu�rio.
    Ele se baseia em um site onde homens declaram terem avistados mulheres ou
vice-versa.
    O usu�rio ir� digitar a quantidade de casos em que cada uma das quatro poss�veis
ocasi�es ocorre: homem procurar mulher, mulher procurar homem, homem procurar homem ou
mulher procurar mulher.
    No final do processo do programa, aparece na tela uma esp�cie de barra utilizando "#",
simbolizando a porcentagem de casos em que cada ocasi�o acontece, baseado nos dados
enviados pelo usu�rio.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Armazena as vari�veis necess�rias ao programa.
    int m_to_f, f_to_m, m_to_m, f_to_f;

    // Pede ao usu�rio enviar os 4 dados estat�sticos.
    do {
        printf("Digite quantos homens procuraram mulheres: \n");
        scanf("%i", &m_to_f);
    }
    while(m_to_f < 0);

    do {
        printf("Digite quantas mulheres procuraram homens: \n");
        scanf("%i", &f_to_m);
    }
    while(f_to_m < 0);

    do {
        printf("Digite quantos homens procuraram homens: \n");
        scanf("%i", &m_to_m);
    }
    while(m_to_m < 0);

    do {
        printf("Digite quantas mulheres procuraram mulheres: \n");
        scanf("%i", &f_to_f);
    }
    while(f_to_f < 0);

    // Verifica��o da porcentagem dos casos.
    int total = m_to_f + f_to_m + m_to_m + f_to_f;

    // Declara��o dos contadores de casos.
    int cont1=0, cont2=0, cont3=0, cont4=0;

    cont1 = (float)80/(float)total * m_to_f;
    cont2 = (float)80/(float)total * f_to_m;
    cont3 = (float)80/(float)total * m_to_m;
    cont4 = (float)80/(float)total * f_to_f;

    // Impress�o dos dados.
    printf("\n\n\nM procurando F \n");

    for(int i=0; i!=cont1; i++){
        printf("#");
    }

    printf("\n\n\nF procurando M \n");

    for(int i=0; i!=cont2; i++){
        printf("#");
    }

    printf("\n\n\nM procurando M \n");

    for(int i=0; i!=cont3; i++){
        printf("#");
    }

    printf("\n\n\nF procurando F \n");

    for(int i=0; i!=cont4; i++){
        printf("#");
    }

    printf("\n\n\n");

    return 0;
}
