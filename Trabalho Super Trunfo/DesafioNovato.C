#include <stdio.h>
#include <string.h>

int main() {
    char estado1[10], estado2[10];
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    unsigned long populacao1, populacao2;
    float area1, area2, PIB1, PIB2;
    int NPT1, NPT2;
    float densidade1, densidade2, percapita1, percapita2;

    int escolha1, escolha2;

    // ================= CADASTRO CARTA 1 =================
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

    // ================= CADASTRO CARTA 2 =================
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

    printf("\n====== SUPER TRUNFO ======\n");

    // ================= ESCOLHA DO PRIMEIRO ATRIBUTO =================
    printf("\nEscolha o PRIMEIRO atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    scanf("%d", &escolha1);

    // ================= MENU DINÂMICO =================
    printf("\nEscolha o SEGUNDO atributo:\n");

    switch(escolha1) {
        case 1:
            printf("2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade\n");
            break;
        case 2:
            printf("1 - População\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade\n");
            break;
        case 3:
            printf("1 - População\n2 - Área\n4 - Pontos turísticos\n5 - Densidade\n");
            break;
        case 4:
            printf("1 - População\n2 - Área\n3 - PIB\n5 - Densidade\n");
            break;
        case 5:
            printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n");
            break;
        default:
            printf("Opção inválida!\n");
            return 0;
    }

    scanf("%d", &escolha2);

    if (escolha1 == escolha2) {
        printf("Erro: você escolheu o mesmo atributo!\n");
        return 0;
    }

    // ================= CAPTURA DOS VALORES =================
    float v1_c1, v1_c2, v2_c1, v2_c2;

    switch(escolha1) {
        case 1: v1_c1 = populacao1; v1_c2 = populacao2; break;
        case 2: v1_c1 = area1;      v1_c2 = area2;      break;
        case 3: v1_c1 = PIB1;       v1_c2 = PIB2;       break;
        case 4: v1_c1 = NPT1;       v1_c2 = NPT2;       break;
        case 5: v1_c1 = densidade1; v1_c2 = densidade2; break;
    }

    switch(escolha2) {
        case 1: v2_c1 = populacao1; v2_c2 = populacao2; break;
        case 2: v2_c1 = area1;      v2_c2 = area2;      break;
        case 3: v2_c1 = PIB1;       v2_c2 = PIB2;       break;
        case 4: v2_c1 = NPT1;       v2_c2 = NPT2;       break;
        case 5: v2_c1 = densidade1; v2_c2 = densidade2; break;
    }

    // ================= REGRA ESPECIAL DA DENSIDADE =================
    if (escolha1 == 5) { v1_c1 *= -1; v1_c2 *= -1; }
    if (escolha2 == 5) { v2_c1 *= -1; v2_c2 *= -1; }

    // ================= SOMA FINAL =================
    float soma1 = v1_c1 + v2_c1;
    float soma2 = v1_c2 + v2_c2;

    // ================= RESULTADO =================
    printf("\n--- Resultado da Rodada ---\n");
    printf("%s: %.2f\n", cidade1, soma1);
    printf("%s: %.2f\n", cidade2, soma2);

    if (soma1 > soma2)
        printf("Vencedor: %s\n", cidade1);
    else if (soma2 > soma1)
        printf("Vencedor: %s\n", cidade2);
    else
        printf("Empate!\n");

    return 0;
}