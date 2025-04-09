#include <stdio.h>
#include <string.h>

// Estrutura da carta
struct Carta {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_demografica;
};

int main() {
    // Criando duas cartas
    struct Carta carta1 = {"Brasil", 213000000, 8515767.0, 1445.0, 5, 25.0};
    struct Carta carta2 = {"Portugal", 10280000, 92212.0, 250.0, 3, 111.5};

    int escolha;

    printf("=== Super Trunfo: Comparação de Países ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    printf("\nComparando %s vs %s\n", carta1.nome, carta2.nome);

    switch (escolha) {
        case 1:
            printf("População: %d (Brasil) vs %d (Portugal)\n", carta1.populacao, carta2.populacao);
            if (carta1.populacao > carta2.populacao) {
                printf("%s venceu!\n", carta1.nome);
            } else if (carta2.populacao > carta1.populacao) {
                printf("%s venceu!\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;
        
        case 2:
            printf("Área: %.2f (Brasil) vs %.2f (Portugal)\n", carta1.area, carta2.area);
            if (carta1.area > carta2.area) {
                printf("%s venceu!\n", carta1.nome);
            } else if (carta2.area > carta1.area) {
                printf("%s venceu!\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("PIB: %.2f (Brasil) vs %.2f (Portugal)\n", carta1.pib, carta2.pib);
            if (carta1.pib > carta2.pib) {
                printf("%s venceu!\n", carta1.nome);
            } else if (carta2.pib > carta1.pib) {
                printf("%s venceu!\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Pontos Turísticos: %d (Brasil) vs %d (Portugal)\n", carta1.pontos_turisticos, carta2.pontos_turisticos);
            if (carta1.pontos_turisticos > carta2.pontos_turisticos) {
                printf("%s venceu!\n", carta1.nome);
            } else if (carta2.pontos_turisticos > carta1.pontos_turisticos) {
                printf("%s venceu!\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Densidade Demográfica: %.2f (Brasil) vs %.2f (Portugal)\n", carta1.densidade_demografica, carta2.densidade_demografica);
            if (carta1.densidade_demografica < carta2.densidade_demografica) {
                printf("%s venceu!\n", carta1.nome);
            } else if (carta2.densidade_demografica < carta1.densidade_demografica) {
                printf("%s venceu!\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Por favor, escolha um número de 1 a 5.\n");
            break;
    }

    return 0;
}
