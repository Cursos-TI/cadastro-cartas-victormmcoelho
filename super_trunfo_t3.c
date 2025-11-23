#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1[2], estado2[2], codigo1[3], codigo2[3], cidade1[25], cidade2[25];
    int  populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2, densidade1, densidade2, capita1, capita2, poder1, poder2;

    // Área para entrada de dados
    printf("Insira os dados da Carta 1 conforme solicitados a seguir:\n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Codigo: ");
    scanf("%s", codigo1);
    printf("Cidade: ");
    scanf("%s", cidade1); //sem espaços
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
    scanf("%s", estado2);
    printf("Codigo: ");
    scanf("%s", codigo2);
    printf("Cidade: ");
    scanf("%s", cidade2); //sem espaços
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);

    //Calcular a densidade populacional e o pib per capita das cidades
    densidade1 = area1 / populacao1;
    densidade2 = area2 / populacao2;
    capita1 = pib1 / populacao1;
    capita2 = pib2 / populacao2;

    //Calcular os Super Poderes das cartas
    poder1 = populacao1 + area1 + pib1 + pontos1 + capita1 - densidade1;
    poder2 = populacao2 + area2 + pib2 + pontos2 + capita2 - densidade2;

    printf("\n\n### Comparacao de Cartas: ###\n\n");
    printf("Atributo: Populacao\n");
    printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);
    } else {
        printf("Resultado: Empate!\n\n");
    }
    printf("Atributo: Densidade Populacional\n");
    printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, densidade1);
    printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, densidade2);
    if (densidade1 < densidade2) { //Quanto menor, melhor é
        printf("Resultado: Carta 1 (%s) venceu!\n\n", cidade1);
    } else if (densidade2 < densidade1) {
        printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);
    } else {
        printf("Resultado: Empate!\n\n");
    }
    printf("Atributo: PIB per Capita\n");
    printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, capita1);
    printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, capita2);
    if (capita1 > capita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n\n", cidade1);
    } else if (capita2 > capita1) {
        printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);
    } else {
        printf("Resultado: Empate!\n\n");
    }
    printf("Atributo: Super Poder\n");
    printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, poder1);
    printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, poder2);
    if (poder1 > poder2) {
        printf("Resultado: Carta 1 (%s) venceu!\n\n", cidade1);
    } else if (poder2 > poder1) {
        printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);
    } else {
        printf("Resultado: Empate!\n\n");
    }
    
return 0;

} 