#include <stdio.h>

int main() {
    // Variáveis para a primeira carta
    char estado1, codigo1[4], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidade1, percapita1;

    // Variáveis para a segunda carta
    char estado2, codigo2[4], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidade2, percapita2;

    int escolha; // Variável para armazenar a escolha do usuário

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

    // Cálculo da Densidade Populacional e PIB per Capita
    densidade1 = (float) populacao1 / area1;
    percapita1 = (float) pib1 / populacao1;

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

    // Cálculo da Densidade Populacional e PIB per Capita
    densidade2 = (float) populacao2 / area2;
    percapita2 = (float) pib2 / populacao2;

    // Exibição das cartas
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\nCódigo: %s\nNome: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nPontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n",
           estado1, codigo1, nomeCidade1, populacao1, area1, pib1, pontosTuristicos1, densidade1, percapita1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\nCódigo: %s\nNome: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nPontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n",
           estado2, codigo2, nomeCidade2, populacao2, area2, pib2, pontosTuristicos2, densidade2, percapita2);

    // Menu de escolha do atributo
    printf("\n=== Escolha o Atributo para Comparação ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional (Menor valor vence!)\n");
    printf("Digite o número correspondente ao atributo: ");
    scanf("%d", &escolha);

    // Comparação com base na escolha
    printf("\n=== Resultado da Comparação ===\n");

    switch (escolha) {
        case 1: // População
            printf("Comparando População...\n");
            printf("%s: %d habitantes vs %s: %d habitantes\n", nomeCidade1, populacao1, nomeCidade2, populacao2);
            if (populacao1 > populacao2) printf("Vencedor: %s\n", nomeCidade1);
            else if (populacao2 > populacao1) printf("Vencedor: %s\n", nomeCidade2);
            else printf("Empate!\n");
            break;

        case 2: // Área
            printf("Comparando Área...\n");
            printf("%s: %.2f km² vs %s: %.2f km²\n", nomeCidade1, area1, nomeCidade2, area2);
            if (area1 > area2) printf("Vencedor: %s\n", nomeCidade1);
            else if (area2 > area1) printf("Vencedor: %s\n", nomeCidade2);
            else printf("Empate!\n");
            break;

        case 3: // PIB
            printf("Comparando PIB...\n");
            printf("%s: %.2f bilhões vs %s: %.2f bilhões\n", nomeCidade1, pib1, nomeCidade2, pib2);
            if (pib1 > pib2) printf("Vencedor: %s\n", nomeCidade1);
            else if (pib2 > pib1) printf("Vencedor: %s\n", nomeCidade2);
            else printf("Empate!\n");
            break;

        case 4: // Pontos Turísticos
            printf("Comparando Pontos Turísticos...\n");
            printf("%s: %d pontos vs %s: %d pontos\n", nomeCidade1, pontosTuristicos1, nomeCidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) printf("Vencedor: %s\n", nomeCidade1);
            else if (pontosTuristicos2 > pontosTuristicos1) printf("Vencedor: %s\n", nomeCidade2);
            else printf("Empate!\n");
            break;

        case 5: // Densidade Populacional (menor vence)
            printf("Comparando Densidade Populacional...\n");
            printf("%s: %.2f hab/km² vs %s: %.2f hab/km²\n", nomeCidade1, densidade1, nomeCidade2, densidade2);
            if (densidade1 < densidade2) printf("Vencedor: %s\n", nomeCidade1);
            else if (densidade2 < densidade1) printf("Vencedor: %s\n", nomeCidade2);
            else printf("Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}
