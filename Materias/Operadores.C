#include <stdio.h>

int main(){

    int numero01,numero02;
    int soma, sobutracao,multiplicacao,divisao;

    printf("Digite o Primeiro Valor: ");
     scanf("%d",&numero01);

    printf("Digite o Segundo Valor: ");
     scanf("%d",&numero02);

    soma  = numero01 + numero02;

    sobutracao = numero01 - numero02;

    multiplicacao = numero01 * numero02;

    divisao = numero01 / numero02 ;


    printf("A soma é : %d""\n",soma);
    printf("A subtração  é : %d""\n",sobutracao);
    printf("A Multiplicação é : %d""\n",multiplicacao);
    printf("A Divisão é : %d""\n",divisao);

    return 0;

}