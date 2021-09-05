#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3;
    int media;

    printf("Digite 3 notas entre 0 e 10: \n");
    do{
        printf("Nota 1: ");
        scanf("%f", &n1);
        if(n1>10 || n1<0){
            printf(" Nota invalida. Tente novamente.\n");
            }
    } while (n1>10 || n1<0);

    do{
        printf("Nota 2: ");
        scanf("%f", &n2);
        if(n2>10 || n2<0){
            printf(" Nota invalida. Tente novamente.\n");
            }
    } while (n2>10 || n2<0);

    do{
        printf("Nota 3: ");
        scanf("%f", &n3);
        if(n3>10 || n3<0){
            printf(" Nota invalida. Tente novamente.\n");
            }
    } while (n3>10 || n3<0);

    media = (n1+n2+n3)/3;
    printf(" media = %i\n", media);
    switch(media){

    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf(" Insuficente.\n");
        break;
    case 6:
    case 7:
        printf(" Mediocre.\n");
        break;
    case 8:
    case 9:
    case 10:
        printf(" Excelente.\n");
        break;
    }

    return 0;
}
