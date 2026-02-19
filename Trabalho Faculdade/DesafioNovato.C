#include <stdio.h>
#include <string.h>

int main (){
  char estado1, estado2;
  char codigo1[10], codigo2[10];
  char cidade1[20], cidade2[20];
  unsigned long populacao1, populacao2;
  float area1, area2;
  float PIB1, PIB2;
  int NPT1, NPT2;
  float percapita1, percapita2, densidade1, densidade2;

 printf("Digite os dados da primeira carta:\n");
 scanf(" %c",&estado1);
 scanf("%s",codigo1);
 getchar();
 fgets(cidade1,sizeof(cidade1),stdin);
 cidade1[strcspn(cidade1,"\n")] = 0;

 scanf("%lu",&populacao1);
 scanf("%f",&area1);
 scanf("%f",&PIB1);
 scanf("%d",&NPT1);

 densidade1 = populacao1 / area1;
 percapita1 = PIB1 / populacao1;

 printf("\nDigite os dados da segunda carta:\n");
 scanf(" %c",&estado2);
 scanf("%s",codigo2);
 getchar();
 fgets(cidade2,sizeof(cidade2),stdin);
 cidade2[strcspn(cidade2,"\n")] = 0;

 scanf("%lu",&populacao2);
 scanf("%f",&area2);
 scanf("%f",&PIB2);
 scanf("%d",&NPT2);

 densidade2 = populacao2 / area2;
 percapita2 = PIB2 / populacao2;

 float SuperPoder1 = populacao1 + area1 + PIB1 + NPT1 + percapita1 + densidade1;
 float SuperPoder2 = populacao2 + area2 + PIB2 + NPT2 + percapita2 + densidade2;

 printf("\nComparação De cartas:\n");
 printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
 printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
 printf("PIB: Carta 1 venceu (%d)\n", PIB1 > PIB2);
 printf("Pontos Turísticos: Carta 1 venceu (%d)\n", NPT1 > NPT2);
 printf("Densidade: Carta 2 venceu (%d)\n", densidade1 < densidade2);
 printf("PIB per capita: Carta 1 venceu (%d)\n", percapita1 > percapita2);
 printf("Super Poder: Carta 1 venceu (%d)\n", SuperPoder1 > SuperPoder2);

 return 0;
}









