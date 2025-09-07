//trabalho principal do super trunfo c com cartas atualizadas //07-09-2025
#include <stdio.h>

// Estrutura da carta
typedef struct {
    char estado;             // Letra representando o estado
    char codigo[4];          // Ex: M01, M02
    char cidade[50];         // Nome da cidade
    int populacao;           // População
    float area;              // Área em km²
    float pib;               // PIB em bilhões
    int pontosTuristicos;    // Número de pontos turísticos
} Carta;

int main() {
    // Criando duas cartas com dados atualizados
    Carta carta1 = {'M', "M01", "Estreito - MA", 34353, 2719.964, 1.10, 6};
    Carta carta2 = {'M', "M02", "Porto Franco - MA", 24517, 1421.011, 1.00, 6};

    // Exibindo as cartas
    printf("=== Carta 1 ===\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.3f km²\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1.pontosTuristicos);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.3f km²\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2.pontosTuristicos);

    return 0;
}