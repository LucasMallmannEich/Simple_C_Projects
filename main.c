#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, media;

    printf("Digite 3 notas entre 0 e 10: \n");
    printf("Nota 1: ");
    scanf("%f", &n1);
    printf("Nota 2: ");
    scanf("%f", &n2);
    printf("Nota 3: ");
    scanf("%f", &n3);

    if(n1>=0 && n1<=10 && n2>=0 && n2<=10 && n3>=0 && n3<=10){
        media=(n1+n2+n3)/3;
        if(media<6){
        printf(" Insuficiente.");
        }
        else if(media>=6 && media<8){
            printf(" Mediocre.");
        }
        else if(media>=8){
            printf(" Excelente.");
        }}
    else{
        printf(" Os valores das notas devem ser entre 0 e 10!");
    }

    return 0;
}
