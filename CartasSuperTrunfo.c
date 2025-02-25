#include <stdio.h>

int main() {
    // Variáveis para a primeira carta
    char estado1, codigo1[4], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    // Variáveis para a segunda carta
    char estado2, codigo2[4], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // Cadastro da primeira carta
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01, B02, C03): ");
    scanf("%s", codigo1);

    getchar();

    printf("Digite o nome da cidade: ");
    scanf("%[^\n]", nomeCidade1);

    printf("Digite a populacao da cidade (Somente números inteiros): ");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade em bilhões de reais: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    getchar();

    // Cadastro da segunda carta
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: A01, B02, C03): ");
    scanf("%s", codigo2);

    getchar();

    printf("Digite o nome da cidade: ");
    scanf("%[^\n]", nomeCidade2);

    printf("Digite a populacao da cidade (Somente números inteiros): ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade em bilhões de reais: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // 
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);

    return 0;
}
