#include <stdio.h>
#include <stdlib.h>
 /*
 int sinal(float *frequencia, float *periodo);

 Função : Calcula o parâmetro cujo valor é zero.
    Parâmetros : frequencia – ponteiro para o valor de frequencia do sinal
    periodo – ponteiro para o valor do periodo do sinal
    Retorno : 0 para função realizada,
     -1 para erro de parametro (os dois parametros em zero)
     -2 se os dois parâmetros forem diferentes e 0;
*/

int sinal(float *frequencia, float *periodo)
{
    if(*frequencia==0 && *periodo==0){
        printf("Ocorreu um erro de parametros, pois ambos os argumentos passados sao 0. \n");
        return -1;
    }
    else if(*frequencia!=0 && *periodo!=0){
        printf("Ocorreu um erro de parametros, pois ambos os argumentos passados sao diferentes de 0. \n");
        return -2;
    }
    else if(*frequencia==0 && *periodo!=0){
        *frequencia = 1/(*periodo);
        printf("Frequencia calculada: %.2f Hz \n", *frequencia);
        return 0;
    }
    else{
        *periodo = 1/(*frequencia);
        printf("Periodo calculado: %.2f s\n", *periodo);
        return 0;
    }
}

int main()
{
    printf("\n \t NOME: Lucas Mallmann Eich. \n\n");

    int resultado;
    float *frequencia, freq, *periodo, per;

    printf("Digite um valor para a frequencia, em Hz: ");
    scanf("%f", &freq);

    frequencia = &freq;

    printf("Digite um valor para o periodo, em segundos: ");
    scanf("%f", &per);

    periodo = &per;

    printf("Frequencia atual: %.2f Hz \t Periodo atual: %.2f s \n", *frequencia, *periodo);

    resultado = sinal(frequencia, periodo);
    printf("%i", resultado);

    printf("\n \t NOME: Lucas Mallmann Eich. \n");

    return 0;
}
