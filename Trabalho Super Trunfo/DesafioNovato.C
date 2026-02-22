#include <stdio.h>
#include <string.h>

int main()
{
  char estado1[10], estado2[10];
  char codigo1[10], codigo2[10];
  char cidade1[50], cidade2[50];
  unsigned long populacao1, populacao2;
  float area1, area2, PIB1, PIB2;
  int NPT1, NPT2, escolha01, escolha02;
  float percapita1, percapita2, densidade1, densidade2;
  int c;

  printf("Digite os dados da primeira carta:\n");
  scanf("%s", estado1);
  scanf("%s", codigo1);
  getchar();
  fgets(cidade1, sizeof(cidade1), stdin);
  cidade1[strcspn(cidade1, "\n")] = 0;
  scanf("%lu", &populacao1);
  scanf("%f", &area1);
  scanf("%f", &PIB1);
  scanf("%d", &NPT1);

  densidade1 = populacao1 / area1;
  percapita1 = PIB1 / populacao1;

  printf("\nDigite os dados da segunda carta:\n");
  scanf("%s", estado2);
  scanf("%s", codigo2);
  getchar();
  fgets(cidade2, sizeof(cidade2), stdin);
  cidade2[strcspn(cidade2, "\n")] = 0;
  scanf("%lu", &populacao2);
  scanf("%f", &area2);
  scanf("%f", &PIB2);
  scanf("%d", &NPT2);

  densidade2 = populacao2 / area2;
  percapita2 = PIB2 / populacao2;

  float SuperPoder1 = populacao1 + area1 + PIB1 + NPT1 + percapita1 + densidade1;
  float SuperPoder2 = populacao2 + area2 + PIB2 + NPT2 + percapita2 + densidade2;

  printf("\n###Bem vindo ao Jogo###\n");

  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Pontos turísticos\n");
  printf("5. Densidade demográfica\n");
  scanf("%d", &escolha01);

  printf("\nJogador 2 escolha:\n");
  scanf("%d", &escolha02);

  if (escolha01 == escolha02)
  {
    switch (escolha01)
    {
    case 1:
      printf("\nComparando População...\n");
      if (populacao1 > populacao2)
        printf("Vencedor: %s\n", cidade1);
      else if (populacao2 > populacao1)
        printf("Vencedor: %s\n", cidade2);
      else
        printf("Empate!\n");
      break;

    case 2:
      printf("\nComparando Área...\n");
      if (area1 > area2)
        printf("Vencedor: %s\n", cidade1);
      else if (area2 > area1)
        printf("Vencedor: %s\n", cidade2);
      else
        printf("Empate!\n");
      break;

    case 3:
      printf("\nComparando PIB...\n");
      if (PIB1 > PIB2)
        printf("Vencedor: %s\n", cidade1);
      else if (PIB2 > PIB1)
        printf("Vencedor: %s\n", cidade2);
      else
        printf("Empate!\n");
      break;

    case 4:
      printf("\nComparando Pontos Turísticos...\n");
      if (NPT1 > NPT2)
        printf("Vencedor: %s\n", cidade1);
      else if (NPT2 > NPT1)
        printf("Vencedor: %s\n", cidade2);
      else
        printf("Empate!\n");
      break;

    case 5:
      printf("\nComparando Densidade (MENOR vence)...\n");
      if (densidade1 < densidade2)
        printf("Vencedor: %s\n", cidade1);
      else if (densidade2 < densidade1)
        printf("Vencedor: %s\n", cidade2);
      else
        printf("Empate!\n");
      break;

    default:
      printf("Opção inválida!\n");
    }
  }
  else
  {
    printf("Os jogadores devem escolher o MESMO atributo!\n");
  }

  printf("\nComparação Final de Poder:\n");
  printf("%s: %.2f\n", cidade1, SuperPoder1);
  printf("%s: %.2f\n", cidade2, SuperPoder2);

  if (SuperPoder1 > SuperPoder2)
    printf("Vencedor Geral: %s\n", cidade1);
  else
    printf("Vencedor Geral: %s\n", cidade2);

  return 0;
}