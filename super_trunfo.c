#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2, codigo1[3], codigo2[3], cidade1[25], cidade2[25];
    int  populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2, densidade1, densidade2, capita1, capita2, poder1, poder2;

    // Área para entrada de dados
    printf("Insira os dados da Carta 1 conforme solicitados a seguir:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Codigo: ");
    scanf("%s", codigo1);
    printf("Cidade: ");
    scanf("%s", cidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);
    printf("\nInsira os dados da Carta 2 conforme solicitados a seguir:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Codigo: ");
    scanf("%s", codigo2);
    printf("Cidade: ");
    scanf("%s", cidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);

    //Calcular a densidade populacional e o pib per capita das cidades (Nível aventureiro)
    densidade1 = area1 / populacao1;
    densidade2 = area2 / populacao2;
    capita1 = pib1 / populacao1;
    capita2 = pib2 / populacao2;

    //Calcular os Super Poderes das cartas (Nível mestre)
    poder1 = populacao1 + area1 + pib1 + pontos1 + capita1 - densidade1;
    poder2 = populacao2 + area2 + pib2 + pontos2 + capita2 - densidade2;

    // Área para exibição dos dados da cidade
    printf("\nCarta 1:");
    printf("\nEstado: %c", estado1);
    printf("\nCodigo: %s", codigo1);
    printf("\nCidade: %s", cidade1);
    printf("\nPopulacao: %d", populacao1);
    printf("\nArea: %.2f km²", area1);
    printf("\nPIB: %.2f bilhoes de reais", pib1);
    printf("\nNumero de Pontos Turisticos: %d", pontos1);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade1); //Nível aventureiro
    printf("\nPIB per Capita: %.2f reais", capita1); //Nível aventureiro
    printf("\n\nCarta 2:");
    printf("\nEstado: %c", estado2);
    printf("\nCodigo: %s", codigo2);
    printf("\nCidade: %s", cidade2);
    printf("\nPopulacao: %d", populacao2);
    printf("\nArea: %.2f km²", area2);
    printf("\nPIB: %.2f bilhoes de reais", pib2);
    printf("\nNumero de Pontos Turisticos: %d", pontos2);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade2); //Nível aventureiro
    printf("\nPIB per Capita: %.2f reais", capita2); //Nível aventureiro

    printf("\n\n### Comparacao de Cartas: ###\n"); //Nível mestre
    if (populacao1 > populacao2) {
        printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    } else {
        printf("Populacao: Carta 2 venceu (%d)\n", populacao1 > populacao2);
    }
    if (area1 > area2) {
        printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    } else {
        printf("Area: Carta 2 venceu (%d)\n", area1 > area2);
    }
    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    } else {
        printf("PIB: Carta 2 venceu (%d)\n", pib1 > pib2);
    }
    if (pontos1 > pontos2) {
        printf("Numero de Pontos Turisticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);
    } else {
        printf("Numero de Pontos Turisticos: Carta 2 venceu (%d)\n", pontos1 > pontos2);
    }
    if (densidade1 < densidade2) { //Quanto menor, melhor é
        printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    } else {
        printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidade1 < densidade2);
    }
    if (capita1 > capita2) {
        printf("PIB per Capita: Carta 1 venceu (%d)\n", capita1 > capita2);
    } else {
        printf("PIB per Capita: Carta 2 venceu (%d)\n", capita1 > capita2);
    }
    if (poder1 > poder2) {
        printf("Super Poder: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    } else {
        printf("Super Poder: Carta 2 venceu (%d)\n", populacao1 > populacao2);
    }
    
return 0;

}
