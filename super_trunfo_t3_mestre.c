#include <stdio.h>
#include <string.h>

//Nível mestre

int main() {
    // Área para definição das variáveis para armazenar as propriedades dos países
    char pais1[25], pais2[25], atributo1[30], atributo2[30];
    int  opcao1, opcao2, populacao1, populacao2, pontos1, pontos2, continuar;
    float area1, area2, pib1, pib2, densidade1, densidade2, capita1, capita2, poder1, poder2, valor11, valor12, valor21, valor22, resultado1, resultado2;

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
    escolher: //Acrescentado a critério do aluno para poder testar várias vezes
    printf("\nEscolha o PRIMEIRO atributo que sera usado para comparar as cartas:");
    printf("\n1 - Populacao");
    printf("\n2 - Area");
    printf("\n3 - PIB");
    printf("\n4 - Numero de Pontos Turisticos");
    printf("\n5 - Densidade Demografica");
    printf("\n6 - Renda per Capita");
    printf("\n7 - Super Poder");
    printf("\n8 - Sair");
    printf("\n\nEscolha uma opcao: ");
    scanf("%d", &opcao1);

    switch (opcao1) {
    case 1:
        strcpy(atributo1, "Populacao");
        valor11 = populacao1;
        valor12 = populacao2;
        break;
    case 2:
        strcpy(atributo1, "Area");
        valor11 = area1;
        valor12 = area2;
        break;
    case 3:
        strcpy(atributo1, "PIB");
        valor11 = pib1;
        valor12 = pib2;
        break;
    case 4:
        strcpy(atributo1, "Numero de Pontos Turisticos");
        valor11 = pontos1;
        valor12 = pontos2;
        break;
    case 5:
        strcpy(atributo1, "Densidade Demografica");
        valor11 = densidade1;
        valor12 = densidade2;
        break;
    case 6:
        strcpy(atributo1, "Renda per Capita");
        valor11 = capita1;
        valor12 = capita2;
        break;
    case 7:
        strcpy(atributo1, "Super Poder");
        valor11 = poder1;
        valor12 = poder2;
        break;
    case 8:
        printf("\nSaindo...");
        break;
    default:
        printf("\nOpcao invalida! Tente novamente...\n");
        goto escolher;
    }   

    printf("\nEscolha o SEGUNDO atributo que sera usado para comparar as cartas:");
    printf(opcao1 != 1 ? "\n1 - Populacao" : "\n1 -");
    printf(opcao1 != 2 ? "\n2 - Area" : "\n2 -");
    printf(opcao1 != 3 ? "\n3 - PIB" : "\n3 -");
    printf(opcao1 != 4 ? "\n4 - Numero de Pontos Turisticos" : "\n4 -");
    printf(opcao1 != 5 ? "\n5 - Densidade Demografica" : "\n5 -");
    printf(opcao1 != 6 ? "\n6 - Renda per Capita" : "\n6 -");
    printf(opcao1 != 7 ? "\n7 - Super Poder" : "\n7 -");
    printf("\n8 - Sair");
    printf("\n\nEscolha uma opcao: ");
    scanf("%d", &opcao2);

    switch (opcao2) {
    case 1:
        strcpy(atributo2, "Populacao");
        valor21 = populacao1;
        valor22 = populacao2;
        break;
    case 2:
        strcpy(atributo2, "Area");
        valor21 = area1;
        valor22 = area2;
        break;
    case 3:
        strcpy(atributo2, "PIB");
        valor21 = pib1;
        valor22 = pib2;
        break;
    case 4:
        strcpy(atributo2, "Numero de Pontos Turisticos");
        valor21 = pontos1;
        valor22 = pontos2;
        break;
    case 5:
        strcpy(atributo2, "Densidade Demografica");
        valor21 = densidade1;
        valor22 = densidade2;
        break;
    case 6:
        strcpy(atributo2, "Renda per Capita");
        valor21 = capita1;
        valor22 = capita2;
        break;
    case 7:
        strcpy(atributo2, "Super Poder");
        valor21 = poder1;
        valor22 = poder2;
        break;
    case 8:
        printf("\nSaindo...");
        break;
    default:
        printf("\nOpcao invalida! Tente novamente...");
        goto escolher;
    }   

    if (opcao1 < 8 && opcao2 < 8) {
        if (opcao1 == opcao2) {
            printf("\nO primeiro e o segundo atributo precisam ser diferentes! Tente novamente...\n");
            goto escolher;
        } else {
            printf("\nAtributo1: %s", atributo1);
            printf("\n%s => %.2f", pais1, valor11);
            printf("\n%s => %.2f", pais2, valor12);
            printf("\n\nAtributo2: %s", atributo2);
            printf("\n%s => %.2f", pais1, valor21);
            printf("\n%s => %.2f", pais2, valor22);
            resultado1 = valor11 + valor21;
            resultado2 = valor12 + valor22;
            if (opcao1 == 5 || opcao2 == 5) { //Densidade demográfica
                if (resultado1 < resultado2) {
                    printf("\n\nResultado: %s venceu! (Carta 1)", pais1);
                } else if (resultado2 < resultado1) {
                    printf("\n\nResultado: %s venceu! (Carta 2)", pais2);
                } else {
                    printf("\n\nResultado: Empate!");
                }
            } else {
                if (resultado1 > resultado2) {
                    printf("\n\nResultado: %s venceu! (Carta 1)", pais1);
                } else if (resultado2 > resultado1) {
                    printf("\n\nResultado: %s venceu! (Carta 2)", pais2);
                } else {
                    printf("\n\nResultado: Empate!");
                }
            }
            printf("\n\nDeseja continuar jogando com as mesmas cartas? (1-Sim 2-Nao) ");
            scanf("%d", &continuar);
            if (continuar == 1) {
                goto escolher;
            }
        }
    }
    
    return 0;

} 