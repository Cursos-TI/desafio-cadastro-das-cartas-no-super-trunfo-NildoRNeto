#include <stdio.h>
#include <string.h>

// Estrutura da carta
struct Carta {
    char estado[3];              // Estado (UF)
    char codigo[10];             // Código da carta
    char nome_cidade[50];        // Nome da cidade
    int populacao;               // População
    float area;                  // Área (em km²)
    float pib;                   // PIB (em bilhões de reais)
    int pontos_turisticos;       // Número de pontos turísticos
    float densidade_populacional;// Densidade populacional (habitantes por km²)
    float pib_per_capita;         // PIB per capita (em reais)
};

int main() {
    // Criando duas cartas manualmente
    struct Carta carta1 = {"SP", "SP01", "São Paulo", 12300000, 1521.0, 2300.0, 10, 0, 0};
    struct Carta carta2 = {"RJ", "RJ01", "Rio de Janeiro", 6700000, 1200.0, 360.0, 8, 0, 0};

    // Calculando Densidade Populacional e PIB per capita
    carta1.densidade_populacional = carta1.populacao / carta1.area;
    carta1.pib_per_capita = (carta1.pib * 1000000000) / carta1.populacao;

    carta2.densidade_populacional = carta2.populacao / carta2.area;
    carta2.pib_per_capita = (carta2.pib * 1000000000) / carta2.populacao;

    // Escolha fixa do atributo para comparação: População
    printf("=== Super Trunfo: Comparação de Cidades ===\n\n");

    printf("Atributo de comparação: População\n\n");

    printf("Carta 1 - %s (%s):\n", carta1.nome_cidade, carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("População: %d habitantes\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: R$ %.2f bilhões\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidade_populacional);
    printf("PIB per capita: R$ %.2f\n\n", carta1.pib_per_capita);

    printf("Carta 2 - %s (%s):\n", carta2.nome_cidade, carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("População: %d habitantes\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: R$ %.2f bilhões\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidade_populacional);
    printf("PIB per capita: R$ %.2f\n\n", carta2.pib_per_capita);

    // Comparação
    printf("Resultado da comparação (População):\n");

    if (carta1.populacao > carta2.populacao) {
        printf("Carta 1 - %s venceu!\n", carta1.nome_cidade);
    } else if (carta2.populacao > carta1.populacao) {
        printf("Carta 2 - %s venceu!\n", carta2.nome_cidade);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
