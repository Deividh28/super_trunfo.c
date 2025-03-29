#include <stdio.h>

int main() {
    // Declaração das variáveis para a Carta 1
    char estado1[20];
    char codigo1[5];
    char cidade1[50];
    int populacao1;
    float area1; 
    float pib1;
    int pontos1;

    // Declaração das variáveis para a Carta 2
    char estado2[20];
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2; 
    float pib2;
    int pontos2;

    // Coletando os dados para a Carta 1
    printf("Digite as informações para a Carta 1:\n");

    printf("Estado: ");
    scanf(" %s", &estado1);

    printf("Código da Carta: ");
    scanf("%s", &codigo1);

    printf("Nome da Cidade: ");
    scanf(" %s", &cidade1);  // Captura o nome da cidade com espaços

    printf("População: ");
    scanf(" %d", &populacao1);

    printf("Área (em km²): ");
    scanf(" %f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontos1);

    // Coletando os dados para a Carta 2
    printf("\nDigite as informações para a Carta 2:\n");

    printf("Estado: ");
    scanf(" %s", &estado2);

    printf("Código da Carta: ");
    scanf(" %s", &codigo2);

    printf("Nome da Cidade: ");
    scanf(" %s", &cidade2);

    printf("População: ");
    scanf(" %d", &populacao2);

    printf("Área (em km²): ");
    scanf(" %f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontos2);

    // Exibindo as informações da Carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);

    // Exibindo as informações da Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);

    return 0;
}

