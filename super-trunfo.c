#include <stdio.h>

int main() {
    // Cartas fixas com os dados dos países
    char pais1[] = "Brasil";
    int populacao1 = 213000000;
    float area1 = 8515767;
    float pib1 = 1.84; // em trilhões
    int pontos1 = 10;
    float densidade1 = populacao1 / area1;

    char pais2[] = "Canadá";
    int populacao2 = 38000000;
    float area2 = 9984670;
    float pib2 = 1.64; // em trilhões
    int pontos2 = 8;
    float densidade2 = populacao2 / area2;

    int escolha;

    // Mostra o menu
    printf("=== SUPER TRUNFO DOS PAÍSES ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Digite a opção: ");
    scanf("%d", &escolha);

    printf("\nVocê escolheu comparar %s x %s\n", pais1, pais2);

    // Switch para escolher o atributo
    switch (escolha) {
        case 1:
            printf("População:\n");
            printf("%s: %d habitantes\n", pais1, populacao1);
            printf("%s: %d habitantes\n", pais2, populacao2);
            if (populacao1 > populacao2)
                printf(">>> %s venceu!\n", pais1);
            else if (populacao2 > populacao1)
                printf(">>> %s venceu!\n", pais2);
            else
                printf(">>> Empate!\n");
            break;

        case 2:
            printf("Área:\n");
            printf("%s: %.2f km²\n", pais1, area1);
            printf("%s: %.2f km²\n", pais2, area2);
            if (area1 > area2)
                printf(">>> %s venceu!\n", pais1);
            else if (area2 > area1)
                printf(">>> %s venceu!\n", pais2);
            else
                printf(">>> Empate!\n");
            break;

        case 3:
            printf("PIB:\n");
            printf("%s: %.2f trilhões USD\n", pais1, pib1);
            printf("%s: %.2f trilhões USD\n", pais2, pib2);
            if (pib1 > pib2)
                printf(">>> %s venceu!\n", pais1);
            else if (pib2 > pib1)
                printf(">>> %s venceu!\n", pais2);
            else
                printf(">>> Empate!\n");
            break;

        case 4:
            printf("Pontos turísticos:\n");
            printf("%s: %d locais\n", pais1, pontos1);
            printf("%s: %d locais\n", pais2, pontos2);
            if (pontos1 > pontos2)
                printf(">>> %s venceu!\n", pais1);
            else if (pontos2 > pontos1)
                printf(">>> %s venceu!\n", pais2);
            else
                printf(">>> Empate!\n");
            break;

        case 5:
            printf("Densidade demográfica:\n");
            printf("%s: %.2f hab/km²\n", pais1, densidade1);
            printf("%s: %.2f hab/km²\n", pais2, densidade2);
            if (densidade1 < densidade2)
                printf(">>> %s venceu! (menor densidade)\n", pais1);
            else if (densidade2 < densidade1)
                printf(">>> %s venceu! (menor densidade)\n", pais2);
            else
                printf(">>> Empate!\n");
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
    }

    return 0;
}
