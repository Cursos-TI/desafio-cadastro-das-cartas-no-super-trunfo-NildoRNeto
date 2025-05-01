#include <stdio.h>

// Estrutura para armazenar os dados de cada carta
typedef struct {
    char nome[30];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadeDemografica;
} Carta;

// Função para mostrar os atributos disponíveis
void mostrarAtributosDisponiveis(int escolhido) {
    printf("Escolha um atributo:\n");
    if (escolhido != 1) printf("1. Populacao\n");
    if (escolhido != 2) printf("2. Area\n");
    if (escolhido != 3) printf("3. PIB\n");
    if (escolhido != 4) printf("4. Pontos Turisticos\n");
    if (escolhido != 5) printf("5. Densidade Demografica\n");
}

// Função para obter o valor de um atributo
float obterValor(Carta c, int atributo) {
    switch (atributo) {
        case 1: return c.populacao;
        case 2: return c.area;
        case 3: return c.pib;
        case 4: return c.pontosTuristicos;
        case 5: return c.densidadeDemografica;
        default: return 0;
    }
}

// Função para comparar dois atributos
int compararAtributo(float val1, float val2, int atributo) {
    return (atributo == 5) ? (val1 < val2) : (val1 > val2);
}

int main() {
    Carta carta1 = {"Brasil", 213000000, 8515767, 14450.0, 50, 25.0};
    Carta carta2 = {"Argentina", 45300000, 2780400, 4880.0, 30, 16.3};

    int atributo1, atributo2;
    float valor1c1, valor1c2, valor2c1, valor2c2;

    // Escolha do primeiro atributo
    mostrarAtributosDisponiveis(0);
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &atributo1);

    // Escolha do segundo atributo
    do {
        mostrarAtributosDisponiveis(atributo1);
        printf("Escolha o segundo atributo (diferente do primeiro): ");
        scanf("%d", &atributo2);
        if (atributo2 == atributo1)
            printf("Atributo repetido! Escolha outro.\n");
    } while (atributo2 == atributo1);

    // Obtem valores dos atributos
    valor1c1 = obterValor(carta1, atributo1);
    valor1c2 = obterValor(carta2, atributo1);
    valor2c1 = obterValor(carta1, atributo2);
    valor2c2 = obterValor(carta2, atributo2);

    // Mostra as cartas e os valores
    printf("\nComparando cartas:\n");
    printf("%s vs %s\n\n", carta1.nome, carta2.nome);
    printf("Atributo 1: valor do %s: %.2f | valor do %s: %.2f\n",
           carta1.nome, valor1c1, carta2.nome, valor1c2);
    printf("Atributo 2: valor do %s: %.2f | valor do %s: %.2f\n",
           carta1.nome, valor2c1, carta2.nome, valor2c2);

    // Soma dos atributos
    float soma1 = valor1c1 + valor2c1;
    float soma2 = valor1c2 + valor2c2;

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", carta1.nome, soma1);
    printf("%s: %.2f\n", carta2.nome, soma2);

    // Resultado final
    if (soma1 > soma2) {
        printf("\n%s venceu a rodada!\n", carta1.nome);
    } else if (soma2 > soma1) {
        printf("\n%s venceu a rodada!\n", carta2.nome);
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}
