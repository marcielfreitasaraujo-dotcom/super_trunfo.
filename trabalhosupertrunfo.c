
#include <stdio.h>

int main() {
    // Dados da cidade 1 - Porto Franco
    char nome1[] = "Porto Franco";
    int populacao1 = 23903;
    float area1 = 1421.011;
    float pib1 = 1026129000.0; // PIB mais recente
    int pontosTuristicos1 = 5; // exemplo

    // Dados da cidade 2 - Estreito
    char nome2[] = "Estreito";
    int populacao2 = 34353;
    float area2 = 2719.0;
    float pib2 = 1100000000.0;
    int pontosTuristicos2 = 7;

    // Cálculo da densidade populacional
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // PIB per capita (se houver PIB)
    float pibPerCapita1 = 0;
    float pibPerCapita2 = 0;

    if (pib1 > 0) {
        pibPerCapita1 = pib1 / populacao1;
    }

    if (pib2 > 0) {
        pibPerCapita2 = pib2 / populacao2;
    }

    // Exibir dados
    printf("=== Dados das Cidades ===\n\n");

    printf("Cidade: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n\n", pibPerCapita1);

    printf("Cidade: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n\n", pibPerCapita2);

    // ===== Comparação 01 =====
    printf("=== Comparacao por Populacao ===\n");

    if (populacao1 > populacao2) {
        printf("%s venceu! Populacao: %d\n", nome1, populacao1);
    } else if (populacao2 > populacao1) {
        printf("%s venceu! Populacao: %d\n", nome2, populacao2);
    } else {
        printf("Empate! Ambas as cidades possuem a mesma populacao.\n");
    }
    //===== Comparação 02 =====
    printf("=== Comparacao por Area ===\n");

    if (area1 > area2) {
        printf("%s venceu! Area: %.2f km²\n", nome1, area1);
    } else if (area2 > area1) {
        printf("%s venceu! Area: %.2f km²\n", nome2, area2);
    } else {
        printf("Empate! Ambas as cidades possuem a mesma area.\n");
    }
    //===== Comparação 03 =====
     printf("=== Comparacao por Densidade Populacional ===\n");

    if (densidade1 > densidade2) {
        printf("%s venceu! Densidade: %.2f\n", nome1, densidade1);
    } else if (densidade2 > densidade1) {
        printf("%s venceu! Densidade: %.2f\n", nome2, densidade2);
    } else {
        printf("Empate! Ambas as cidades possuem a mesma densidade populacional.\n");
    }
    //===== Comparação 04 =====
        printf("=== Comparacao por PIB per capita ===\n");

    if (pibPerCapita1 > pibPerCapita2) {
        printf("%s venceu! PIB per capita: %.2f\n", nome1, pibPerCapita1);
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("%s venceu! PIB per capita: %.2f\n", nome2, pibPerCapita2);
    } else {
        printf("Empate! Ambas as cidades possuem o mesmo PIB per capita.\n");
    }
    //===== Comparação 05 =====
     printf("=== Comparacao por Pontos Turisticos ===\n");

    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("%s venceu! Pontos Turisticos: %d\n", nome1, pontosTuristicos1);
    } else if (pontosTuristicos2 > pontosTuristicos1) {
        printf("%s venceu! Pontos Turisticos: %d\n", nome2, pontosTuristicos2);
    } else {
        printf("Empate! Ambas as cidades possuem o mesmo numero de pontos turisticos.\n");
    }

    return 0;
}
