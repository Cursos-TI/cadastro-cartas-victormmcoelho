#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2, codigo1[3], codigo2[3], cidade1[25], cidade2[25];
    int  populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2, densidade1, densidade2, capita1, capita2;

    // Área para entrada de dados
    printf("Insira os dados da Carta 1 conforme solicitados a seguir:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Código: ");
    scanf("%s", codigo1);
    printf("Cidade: ");
    scanf("%s", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);
    printf("\nInsira os dados da Carta 2 conforme solicitados a seguir:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Cidade: ");
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    //Calcular a densidade populacional e o pib per capita das cidades (Nível aventureiro)
    densidade1 = area1 / populacao1;
    densidade2 = area2 / populacao2;
    capita1 = pib1 / populacao1;
    capita2 = pib2 / populacao2;

    // Área para exibição dos dados da cidade
    printf("\nCarta 1:");
    printf("\nEstado: %c", estado1);
    printf("\nCódigo: %s", codigo1);
    printf("\nCidade: %s", cidade1);
    printf("\nPopulação: %d", populacao1);
    printf("\nÁrea: %.2f km²", area1);
    printf("\nPIB: %.2f bilhões de reais", pib1);
    printf("\nNúmero de Pontos Turísticos: %d", pontos1);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade1); //Nível aventureiro
    printf("\nPIB per Capita: %.2f reais", capita1); //Nível aventureiro
    printf("\n\nCarta 2:");
    printf("\nEstado: %c", estado2);
    printf("\nCódigo: %s", codigo2);
    printf("\nCidade: %s", cidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea: %.2f km²", area2);
    printf("\nPIB: %.2f bilhões de reais", pib2);
    printf("\nNúmero de Pontos Turísticos: %d", pontos2);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade2); //Nível aventureiro
    printf("\nPIB per Capita: %.2f reais", capita2); //Nível aventureiro

return 0;
}
