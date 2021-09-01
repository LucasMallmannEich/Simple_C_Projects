#include <stdio.h>
#include <stdlib.h>

int main()

// Utilizando o do while (primerio executa e depois testa):

{
    float n1, n2, n3, media;

    printf("Digite 3 notas entre 0 e 10: \n");

    do{
        printf("Nota 1: ");
        scanf("%f", &n1);

         if(n1<0 || n1>10){
            printf(" Digite uma nota dentro do intervalo de 0 a 10: \n");
         }
    } while(n1<0 || n1>10);

    do{
        printf("Nota 2: ");
        scanf("%f", &n2);

        if(n2<0 || n2>10){
            printf(" Digite uma nota dentro do intervalo de 0 a 10: \n");
        }
    } while(n2<0 || n2>10);

    do{
        printf("Nota 3: ");
        scanf("%f", &n3);

        if(n3<0 || n3>10){
            printf(" Digite uma nota dentro do intervalo de 0 a 10: \n");
        }
    } while(n3<0 || n3>10);

    media=(n1+n2+n3)/3;
    if(media<6){
    printf(" Insuficiente.");
    }
    else if(media>=6 && media<8){
        printf(" Mediocre.");
    }
    else if(media>=8){
        printf(" Excelente.");
    }

    return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>

int main()

// Utilizando o while (primeiro testa e depois executa):

{
    float n1=100, n2=100, n3=100, media;

    printf("Digite 3 notas entre 0 e 10: \n");

    while(n1<0 || n1>10){
         printf("Nota 1: ");
         scanf("%f", &n1);

         if(n1<0 || n1>10){
            printf(" Digite uma nota dentro do intervalo de 0 a 10: \n");
         }
    }

    while(n2<0 || n2>10){
        printf("Nota 2: ");
        scanf("%f", &n2);

        if(n2<0 || n2>10){
            printf(" Digite uma nota dentro do intervalo de 0 a 10: \n");
        }
    }

    while(n3<0 || n3>10){
        printf("Nota 3: ");
        scanf("%f", &n3);

        if(n3<0 || n3>10){
            printf(" Digite uma nota dentro do intervalo de 0 a 10: \n");
        }
    }

    media=(n1+n2+n3)/3;
    if(media<6){
    printf(" Insuficiente.");
    }
    else if(media>=6 && media<8){
        printf(" Mediocre.");
    }
    else if(media>=8){
        printf(" Excelente.");
    }

    return 0;
}

*/
