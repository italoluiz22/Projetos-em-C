#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){

    int numeroJogador,numeroComputador,Resultado;
    char tipocomparacao;



    //Gerar Numero Aleatorio
    srand(time(0));
    numeroComputador = rand() % 100 + 1; //Numero entre 1 e 100

    printf("Bem vindo ao Jogoar Maior,Menor ou Igual\n");
    printf("VocÊ deve escolher um numero e o tipo de comparação: \n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha a comparação:");
    scanf("%c",&tipocomparacao);

    printf("Digite Seu numero (entre 1 a 100): ");
    scanf("%d",&numeroJogador);



    switch (tipocomparacao)
    {
     case 'M':
     case 'm':
       printf("Voce escolheu a opção maior\n");
       Resultado = numeroJogador > numeroComputador ? 1 : 0;
       printf("O numero do Jogador é: %d\n",numeroJogador);
       printf("O numero do computador é: %d\n",numeroComputador);
        
     break;

     case 'N':
     case 'n':
        printf("Voce escolheu a opção menor\n");
        Resultado = numeroJogador < numeroComputador ? 1 : 0;
         printf("O numero do Jogador é: %d\n",numeroJogador);
         printf("O numero do computador é: %d\n",numeroComputador);
        
     break;

     case 'I':
     case 'i':
       printf("Voce escolheu a opção Igual\n");
       Resultado = numeroJogador == numeroComputador ? 1 : 0;
       printf("O numero do Jogador é: %d\n",numeroJogador);
       printf("O numero do computador é: %d\n",numeroComputador);
     break;

     default:
     printf("Opção invalida!");
     break;
    }


if (Resultado == 1 )
{
    printf("VocÊ venceu");
}else{
    printf("Voce perdeu");
}




}