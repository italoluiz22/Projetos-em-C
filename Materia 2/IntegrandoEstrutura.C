#include <stdio.h>




int main(){
    int opçao;
    float nota1,nota2,media;


    printf("Menu de gereciamento de Estudande\n");
    printf("1. Calcular Media\n");
    printf("2. Determinar Status\n");
    printf("3. Sair\n");
    printf("Escolha uma Opção ");
    scanf("%d",&opçao);


    switch (opçao)
    {
    case 1:
     printf("Calcular Media \n");
     printf("Digite a primeira nota\n");
     scanf("%f",&nota1);

     printf("Calcular Media \n");
     printf("Digite a Segunda nota\n");
     scanf("%f",&nota2);

     if ((nota1 >= 0 && nota1 <= 10) && (nota1 >= 0 && nota2 <= 10))
     {
      media = (nota1 + nota2) / 2;
      printf("A media é :%.2f",media);
     }else{
        printf("Entrada com valores errados");
     }
    
     break;

    case 2:
    printf("Determinar Status \n");
    printf("Entrar com a media: \n");
    scanf("%f",&media);

    //media >= 5? printf("Aprovado!\n") : printf("Reprovado\n");
     
    if (media >= 7)
    {
        printf("Aprovado \n");
    }else if (media>= 5){
        printf("Recuperação\n");
    }else{
        printf("Reprovado\n");
    }
    
    break;

    case 3:
    printf("Saindo do Programa....\n");
    
    default:
     printf("Opção invalida\n");
        break;
    }














}