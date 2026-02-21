#include <stdio.h>
#include <stdlib.h>
#include <time.h>>

int main(){
int opcao,regras;
int numeroScreto,palpite;



printf("Menu Principal\n");
printf("1. Iniciar jogo\n");
printf("2. Ver regras\n");
printf("3.Saindo do Jogo\n");
printf("Escolha uma opção: ");
scanf("%d",&opcao);

switch (opcao)
{
case 1:
    srand(time(0));
    numeroScreto = rand() % 10;
    printf("Digite 1 numero de 0 a 9:\n");
    scanf("%d",&palpite);

    if (numeroScreto == palpite)
    {
       printf("VocÊ acertou!");
       printf("Numero Secreto %d\n",numeroScreto);
    }else{
       printf("VocÊ errrou!");
       printf("Numero Secreto %d\n",numeroScreto);
    }
break;

case 2:
    printf("As Regras são \n");
    printf("\n");

    printf("Digite a opção Relacionadas a Regras \n");
    scanf("%d",&regras);

    switch (regras)
    {
    case 1:
       printf("1. JOGO OPERA COM VALORES ALEATORIOS");
    break;

    case 2:
        printf("2.VocÊ tera 3 tentivas");
    break;

    default:
       printf("Opção invalida");
    break;
    }
break;

case 3:
    printf("Saindo do jogo");
break;

default:
  printf("Opção invalida");
break;
}



}