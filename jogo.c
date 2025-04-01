#include <stdio.h>

// Estrutura para armazenar os dados de uma carta
typedef struct {
     char estado;
     char codigo[4];
     char nome[50];
     unsigned long int populacao;
     float area;
     float pib;
     int pontos_turisticos;
     float densidade_populacional;
     float pib_per_capita;
     float super_poder;
}  Carta;

int main() {
    Carta carta1, carta2;

    // Coletando os dados para a carta 1
    printf("Digite os dados da primeira carta:\n");
    printf("Estado: ");
    scanf(" %c", &carta1.estado);
    printf("Código da Carta: ");
    scanf(" %s", &carta1.codigo);
    printf("Nome da Cidade: ");
    scanf(" %s", &carta1.nome);
    printf("População: ");
    scanf(" %lu", &carta1.populacao);
    printf("Área (km²): ");
    scanf(" %f", &carta1.area);
    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &carta1.pib);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &carta1.pontos_turisticos);

    // Coletando os dados para a carta 2
    printf("Digite os dados da segunda carta:\n");
    printf("Estado: ");
    scanf(" %c", &carta2.estado);
    printf("Código da Carta: ");
    scanf(" %s", &carta2.codigo);
    printf("Nome da Cidade: ");
    scanf(" %s", &carta2.nome);
    printf("População: ");
    scanf(" %lu", &carta2.populacao);
    printf("Área (km²): ");
    scanf(" %f", &carta2.area);
    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &carta2.pib);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &carta2.pontos_turisticos);

    // Cálculos
    carta1.densidade_populacional = carta1.populacao / carta1.area;
    carta1.pib_per_capita = carta1.pib * 1000000000 / carta1.populacao;
    carta1.super_poder = carta1.populacao + carta1.area + carta1.pib + carta1.pontos_turisticos + carta1.pib_per_capita + (1 / carta1.densidade_populacional);

    carta2.densidade_populacional = carta2.populacao / carta2.area;
    carta2.pib_per_capita = carta2.pib * 1000000000 / carta2.populacao;
    carta2.super_poder = carta2.populacao + carta2.area + carta2.pib + carta2.pontos_turisticos + carta2.pib_per_capita + (1 / carta2.densidade_populacional);

    // Exibição dos dados
    printf("\nCarta 1:\n");
    printf("Estado: %c\nCódigo: %s\nNome: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nPontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPib per Capita: %.2f reais\nSuper Poder: %.2f\n",
            carta1.estado, carta1.codigo, carta1.nome, carta1.populacao, carta1.area, carta1.pib, carta1.pontos_turisticos, carta1.densidade_populacional, carta1.pib_per_capita, carta1.super_poder);

            printf("\nCarta 2:\n");
            printf("Estado: %c\nCódigo: %s\nNome: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nPontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPib per Capita: %.2f reais\nSuper Poder: %.2f\n",
                    carta2.estado, carta2.codigo, carta2.nome, carta2.populacao, carta2.area, carta2.pib, carta2.pontos_turisticos, carta2.densidade_populacional, carta2.pib_per_capita, carta2.super_poder);

            // Comparação das cartas
            printf("\nComparação de Cartas:\n");
            printf("População: %d\n", carta1.populacao > carta2.populacao);
            printf("Área: %d\n", carta1.area > carta2.area);
            printf("PIB: %d\n", carta1.pib > carta2.pib);
            printf("Pontos Turísticos: %d\n", carta1.pontos_turisticos > carta2.pontos_turisticos);
            printf("Densidae Populacional: %d\n", carta1.densidade_populacional > carta2.densidade_populacional);
            printf("PIB per Capital: %d\n", carta1.pib_per_capita > carta2.pib_per_capita);
            printf("Super Poder: %d\n", carta1.super_poder > carta2.super_poder);

            return 0;
}
