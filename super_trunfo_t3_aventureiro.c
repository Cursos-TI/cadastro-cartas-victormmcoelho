#include <stdio.h>

//Nível aventureiro

int main() {
    // Área para definição das variáveis para armazenar as propriedades dos países
    char pais1[25], pais2[25];
    int  opcao, populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2, densidade1, densidade2, capita1, capita2, poder1, poder2;

    // Área para entrada de dados
    printf("Insira os dados da Carta 1 conforme solicitados a seguir:\n");
    printf("Pais: ");
    scanf("%s", pais1); //sem espaços
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);
    printf("\nInsira os dados da Carta 2 conforme solicitados a seguir:\n");
    printf("Pais: ");
    scanf("%s", pais2); //sem espaços
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);

    //Calcular a densidade demográfica, renda per capita das cidades e os Super Poderes das cartas
    densidade1 = area1 / populacao1;
    densidade2 = area2 / populacao2;
    capita1 = pib1 / populacao1;
    capita2 = pib2 / populacao2;
    poder1 = populacao1 + area1 + pib1 + pontos1 + capita1 - densidade1;
    poder2 = populacao2 + area2 + pib2 + pontos2 + capita2 - densidade2;

    //Menu principal
    printf("\nEscolha qual atributo sera usado para comparar as cartas:");
    printf("\n1 - Exibir informacoes das cartas");
    printf("\n2 - Populacao");
    printf("\n3 - Area");
    printf("\n4 - PIB");
    printf("\n5 - Numero de Pontos Turisticos");
    printf("\n6 - Densidade Demografica");
    printf("\n7 - Renda per Capita");
    printf("\n8 - Super Poder");
    printf("\n9 - Sair");
    escolher: //Acrescentado a critério do aluno para poder testar várias vezes
    printf("\n\nEscolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
        printf("\nCarta 1:");
        printf("\nPais: %s", pais1);
        printf("\nPopulacao: %d", populacao1);
        printf("\nArea: %2.f km²", area1);
        printf("\nPIB: %2.f bilhoes de reais", pib1);
        printf("\nNumero de Pontos Turisticos: %d", pontos1);
        printf("\nDensidade Demografica: %2.f hab/km²", densidade1);
        printf("\nRenda per Capita: R$ %2.f /hab", capita1);
        printf("\nSuper Poder: %2.f", poder1);
        printf("\n\nCarta 2:");
        printf("\nPais: %s", pais2);
        printf("\nPopulacao: %d", populacao2);
        printf("\nArea: %2.f km²", area2);
        printf("\nPIB: %2.f bilhoes de reais", pib2);
        printf("\nNumero de Pontos Turisticos: %d", pontos2);
        printf("\nDensidade Demografica: %2.f hab/km²", densidade2);
        printf("\nRenda per Capita: R$ %2.f /hab", capita2);
        printf("\nSuper Poder: %2.f", poder2);
        goto escolher;
    case 2:
        printf("\nAtributo: Populacao");
        printf("\n%s => %d", pais1, populacao1);
        printf("\n%s => %d", pais2, populacao2);
        if (populacao1 > populacao2) {
            printf("\nResultado: %s venceu! (Carta 1)", pais1);
        } else if (populacao2 > populacao1) {
            printf("\nResultado: %s venceu! (Carta 2)", pais2);
        } else {
            printf("\nResultado: Empate!");
        }
        goto escolher;
    case 3:
        printf("\nAtributo: Area");
        printf("\n%s => %.2f km²", pais1, area1);
        printf("\n%s => %.2f km²", pais2, area2);
        if (area1 > area2) {
            printf("\nResultado: %s venceu! (Carta 1)", pais1);
        } else if (area2 > area1) {
            printf("\nResultado: %s venceu! (Carta 2)", pais2);
        } else {
            printf("\nResultado: Empate!");
        }
        goto escolher;
    case 4:
        printf("\nAtributo: PIB");
        printf("\n%s => R$ %.2f ", pais1, pib1);
        printf("\n%s => R$ %.2f", pais2, pib2);
        if (pib1 > pib2) {
            printf("\nResultado: %s venceu! (Carta 1)", pais1);
        } else if (pib2 > pib1) {
            printf("\nResultado: %s venceu! (Carta 2)", pais2);
        } else {
            printf("\nResultado: Empate!");
        }
        goto escolher;
    case 5:
        printf("\nAtributo: Numero de Pontos Turisticos");
        printf("\n%s => %d", pais1, pontos1);
        printf("\n%s => %d", pais2, pontos2);
        if (pontos1 > pontos2) {
            printf("\nResultado: %s venceu! (Carta 1)", pais1);
        } else if (pontos2 > pontos1) {
            printf("\nResultado: %s venceu! (Carta 2)", pais2);
        } else {
            printf("\nResultado: Empate!");
        }
        goto escolher;
    case 6:
        printf("\nAtributo: Densidade Demografica");
        printf("\n%s => %.2f hab/km²", pais1, densidade1);
        printf("\n%s => %.2f hab/km²", pais2, densidade2);
        if (densidade1 < densidade2) {
            printf("\nResultado: %s venceu! (Carta 1)", pais1);
        } else if (densidade2 < densidade1) {
            printf("\nResultado: %s venceu! (Carta 2)", pais2);
        } else {
            printf("\nResultado: Empate!");
        }
        goto escolher;
    case 7:
        printf("\nAtributo: Renda per Capita");
        printf("\n%s => R$ %.2f/hab", pais1, capita1);
        printf("\n%s => R$ %.2f/hab", pais2, capita2);
        if (capita1 > capita2) {
            printf("\nResultado: %s venceu! (Carta 1)", pais1);
        } else if (capita2 > capita1) {
            printf("\nResultado: %s venceu! (Carta 2)", pais2);
        } else {
            printf("\nResultado: Empate!");
        }
        goto escolher;
    case 8:
        printf("\nAtributo: Super Poder");
        printf("\n%s => %.2f", pais1, poder1);
        printf("\n%s => %.2f", pais2, poder2);
        if (poder1 > poder2) {
            printf("\nResultado: %s venceu! (Carta 1)", pais1);
        } else if (poder2 > poder1) {
            printf("\nResultado: %s venceu! (Carta 2)", pais2);
        } else {
            printf("\nResultado: Empate!");
        }
        goto escolher;
    case 9:
        printf("\nSaindo...");
        break;
    default:
        printf("\nOpcao invalida! Tente novamente...");
        goto escolher;
    }   
    
    return 0;

} 