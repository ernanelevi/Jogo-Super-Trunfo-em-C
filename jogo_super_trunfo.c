#include <stdio.h>

int main()
{
    // Variáveis
    char estado_carta1, codigo_carta1[3], cidade_carta1[50], estado_carta2, codigo_carta2[3], cidade_carta2[50];
    int populacao_carta1, pontos_turisticos_carta1, populacao_carta2, pontos_turisticos_carta2;
    float area_carta1, pib_carta1, area_carta2, pib_carta2, densidade_populacional1, densidade_populacional2, pib_percapita1, pib_percapita2;
    float super_poder1, super_poder2;

    // Carta 1
    printf("Digite o estado de A - H (Carta 1): ");
    scanf("%c", &estado_carta1);

    printf("Digite o código (Carta 1): ");
    scanf("%s", &codigo_carta1);
    getchar(); // Limpa o último \n e evita o erro com o fgets

    printf("Digite o nome da cidade (Carta 1): ");
    fgets(cidade_carta1, 50, stdin);

    printf("Digite o contigente populacional (Carta 1): ");
    scanf("%d", &populacao_carta1);

    printf("Digite a área em Km² (Carta 1): ");
    scanf("%f", &area_carta1);

    densidade_populacional1 = populacao_carta1 / area_carta1; // calculo da densidade populacional

    printf("Digite o PIB (Carta 1): ");
    scanf("%f", &pib_carta1);

    pib_percapita1 = pib_carta1 / populacao_carta1; // calculo pib per capita

    printf("Digite o número de pontos turísticos (Carta 1): ");
    scanf("%d", &pontos_turisticos_carta1);
    getchar();

    // Carta 2
    printf("\nDigite o estado de A - H (Carta 2): ");
    scanf("%c", &estado_carta2);

    printf("Digite o código (Carta 2): ");
    scanf("%s", &codigo_carta2);
    getchar();

    printf("Digite o nome da cidade (Carta 2): ");
    fgets(cidade_carta2, 50, stdin);

    printf("Digite o contigente populacional (Carta 2): ");
    scanf("%d", &populacao_carta2);

    printf("Digite a área em Km² (Carta 2): ");
    scanf("%f", &area_carta2);

    densidade_populacional2 = populacao_carta2 / area_carta2; // calculo da densidade populacional

    printf("Digite o PIB (Carta 2): ");
    scanf("%f", &pib_carta2);

    pib_percapita2 = pib_carta2 / populacao_carta2; // calculo do pib per capita

    printf("Digite o número de pontos turísticos (Carta 2): ");
    scanf("%d", &pontos_turisticos_carta2);

    super_poder1 = (float)populacao_carta1 + area_carta1 + pib_carta1 + (float)pontos_turisticos_carta1 + pib_percapita1 + (1.0f / densidade_populacional1);
    super_poder2 = (float)populacao_carta2 + area_carta2 + pib_carta2 + (float)pontos_turisticos_carta2 + pib_percapita2 + (1.0f / densidade_populacional2);

    // Impressão (Carta 1)
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado_carta1);
    printf("Código: %c%s\n", estado_carta1, codigo_carta1);
    printf("Nome da cidade: %s", cidade_carta1);
    printf("População: %d\n", populacao_carta1);
    printf("Área: %.2f Km²\n", area_carta1);
    printf("PIB: %.2f bilhões de reais\n", pib_carta1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos_carta1);
    printf("Densidade populacional: %.2f hab/Km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_percapita1);
    printf("Super Poder: %.2f\n", super_poder1);

    // Impressão (Carta 2)
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado_carta2);
    printf("Código: %c%s\n", estado_carta2, codigo_carta2);
    printf("Nome da cidade: %s", cidade_carta2);
    printf("População: %d\n", populacao_carta2);
    printf("Área: %.2f Km²\n", area_carta2);
    printf("PIB: %.2f bilhões de reais\n", pib_carta2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos_carta2);
    printf("Densidade populacional: %.2f hab/Km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_percapita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparação das Cartas 1 e 2
    printf("\nComparação das Cartas:\n");
    printf("População: Carta %d venceu\n", (populacao_carta1 > populacao_carta2) + 1 - (populacao_carta1 == populacao_carta2));
    printf("Área: Carta %d venceu\n", (area_carta1 > area_carta2) + 1 - (area_carta1 == area_carta2));
    printf("PIB: Carta %d venceu\n", (pib_carta1 > pib_carta2) + 1 - (pib_carta1 == pib_carta2));
    printf("Pontos Turísticos: Carta %d venceu\n", (pontos_turisticos_carta1 > pontos_turisticos_carta2) + 1 - (pontos_turisticos_carta1 == pontos_turisticos_carta2));
    printf("Densidade Populacional: Carta %d venceu\n", (densidade_populacional1 < densidade_populacional2) + 1 - (densidade_populacional1 == densidade_populacional2));
    printf("PIB Per Capita: Carta %d venceu\n", (pib_percapita1 > pib_percapita2) + 1 - (pib_percapita1 == pib_percapita2));
    printf("Super Poder: Carta %d venceu\n", (super_poder1 > super_poder2) + 1 - (super_poder1 == super_poder2));

    return 0;
}