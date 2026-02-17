#include <stdio.h>

int main (){
  char estado1,estado2;
  char codigo1[10],codigo2[10];
  char cidade1[20],cidade2[20];
  int populaçao1,populaçao2;
  float area1,area2;
  float PIB1,PIB2;
  int NPT1,NPT2;
  float percapita1,percapita2,densidade1,densidade2 = 0;

 printf("Digite os dados da primeira carta:\n");
  scanf(" %c",&estado1);
  scanf("%s",&codigo1);
  getchar();
  fgets(cidade1,sizeof(cidade1),stdin);
  scanf("%d",&populaçao1);
  scanf("%f",&area1);
  scanf ("%f",&PIB1);
  scanf("%d",&NPT1);

  densidade1 = (float)populaçao1/area1;
  percapita1 =PIB1/populaçao1;

  printf("Digite os dados da segunda carta:\n");
  scanf(" %c",&estado2);
  scanf("%s",&codigo2);
  getchar();
  fgets(cidade2,sizeof(cidade2),stdin);
  scanf("%d",&populaçao2);
  scanf("%f",&area2);
  scanf ("%f",&PIB2);
  scanf("%d",&NPT2);

  densidade2 = (float)populaçao2/area2;
  percapita2 =PIB2/populaçao2;

  
  printf("\n");

printf("Carta 01 : \n");
printf("Estado :%c\n",estado1);
printf("Codigo :%s\n",codigo1);
printf("Nome da cidade: %s",cidade1);
printf("População: %d\n",populaçao1);
printf("Area:%f km²\n",area1);
printf("Pib:%f bilhões de reais\n",PIB1);
printf("Número de Pontos Turísticos: %d\n",NPT1);
printf("Densidade Populacional: %.2f\n",densidade1);
printf("PIB per Capita: %f\n",percapita1);

printf("\n");

printf("Carta 02 : \n");
printf("Estado :%c\n",estado2);
printf("Codigo :%s\n",codigo2);
printf("Nome da cidade:%s",cidade2);
printf("População: %d\n",populaçao2);
printf("Area:%f km²\n",area2);
printf("Pib:%f bilhões de reais\n",PIB2);
printf("Número de Pontos Turísticos: %d\n",NPT2);
printf("Densidade Populacional: %.2f\n",densidade2);
printf("PIB per Capita: %f\n",percapita2);




  return 0 ;
};




