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

    //Cálculo da Densidade Populacional;
    densidade1 = (float) populacao1 / area1;

    //Cálculo do PIB per Capita;
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

    //Cálculo da Densidade Populacional;
    densidade2 = (float) populacao2 / area2;

    //Cálculo do PIB per Capita;
    percapita2 = (float) pib2 / populacao2;

    // 
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", percapita1);


    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", percapita2);


     // Comparação baseada no PIB per Capita
     printf("\n=== Comparação ===\n");
     printf("Comparando o PIB per Capita das duas cidades...\n");
     printf("Carta 1 (PIB per Capita: R$%.2f ) vs Carta 2 (PIB per Capita: R$%.2f )\n", percapita1, percapita2);
 
     if (percapita1 > percapita2) {
         printf("A Carta 1 venceu!\n");
     } else if (percapita2 > percapita1) {
         printf("A Carta 2 venceu!\n");
     } else {
         printf("Empate! As duas cidades têm o mesmo PIB per Capita.\n");
     }
 
     return 0;


    return 0;
}
