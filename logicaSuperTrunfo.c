#include <stdio.h>

int main() {
    // Carta 1
    char estado1 [10];
    char codigo1[4];
    char cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    // Carta 2
    char estado2[10];
    char codigo2[4];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    //carta 1
    printf("\n================ CADASTRO CARTA 1 ================\n");
    printf("Digite o estado da carta 1: ");
    scanf(" %s", estado1);

    printf("Digite o codigo da carta 1: ");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade da carta 1: ");
    scanf("%s", cidade1);

    printf("Digite a populacao da carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a area em km2 da carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da carta 1: ");
    scanf("%d", &pontosTuristicos1); 

    // Cálculos carta 1
    densidadePopulacional1 = (float) populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1/densidadePopulacional1);

    //carta 2
    printf("\n================ CADASTRO CARTA 2 ================\n");
    printf("Digite o estado da carta 2: ");
    scanf("%s", estado2);

    printf("Digite o codigo da carta 2: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da carta 2: ");
    scanf("%s", cidade2);

    printf("Digite a populacao da carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a area em km2 da carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da carta 2: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos carta 2
    densidadePopulacional2 = (float) populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1/densidadePopulacional2);

    // Mostrando os dados da carta 1
    printf("\n================ CARTA 1 ================\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);   
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("A densidade Populacional e: %.2f\n", densidadePopulacional1);
    printf("O PIB per capita e: %.2f\n", pib1/populacao1);
    printf("O Super Poder e: %.2f\n", superPoder1);

    //Mostrando os dados da carta 2
    printf("\n================ CARTA 2 ================\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("A densidade Populacional e: %.2f\n", densidadePopulacional2);
    printf("O PIB per capita e: %.2f\n", pib2/populacao2);
    printf("O Super Poder e: %.2f\n", superPoder2);

    //Menu interativo
    int opcao;
     printf("\n=========================================\n");
    printf("           MENU DE COMPARACAO            \n");
    printf("=========================================\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Super Poder\n");
    printf("Digite o numero da opcao desejada: ");
    scanf("%d", &opcao);

    // Resultado das comparações
    printf("\n=========================================\n");
    printf("           COMPARACAO DE CARTAS          \n");
    printf("=========================================\n");
   
    switch(opcao){
        case 1:
            if (populacao1 > populacao2) 
                printf("A carta 1 vence na populacao!\n");
            else if (populacao1 < populacao2) 
                printf("A carta 2 vence na populacao!\n");
            else 
                printf("Empate na populacao!\n");
            break;
        case 2:
            if (area1 > area2) 
                printf("A carta 1 vence na area!\n");
            else if (area1 < area2) 
                printf("A carta 2 vence na area!\n");
            else 
                printf("Empate na area!\n");
            break;
        case 3:
            if (pib1 > pib2) 
                printf("A carta 1 vence no PIB!\n");
            else if (pib1 < pib2) 
                printf("A carta 2 vence no PIB!\n");
            else 
                printf("Empate no PIB!\n");
            break;
        case 4:
            if (pontosTuristicos1 > pontosTuristicos2) 
                printf("A carta 1 vence nos pontos turisticos!\n");
            else if (pontosTuristicos1 < pontosTuristicos2) 
                printf("A carta 2 vence nos pontos turisticos!\n");
            else
                printf("Empate nos pontos turisticos!\n");
            break;
        case 5:
            if (densidadePopulacional1 < densidadePopulacional2) 
                printf("A carta 1 vence na densidade populacional!\n");
            else if (densidadePopulacional1 > densidadePopulacional2) 
                printf("A carta 2 vence na densidade populacional!\n");
            else 
                printf("Empate na densidade populacional!\n");
            break;
        case 6:
            if (pibPerCapita1 > pibPerCapita2) 
                printf("A carta 1 vence no PIB per capita!\n");
            else if (pibPerCapita1 < pibPerCapita2) 
                printf("A carta 2 vence no PIB per capita!\n");
            else 
                printf("Empate no PIB per capita!\n");
            break;
        case 7:
            if (superPoder1 > superPoder2) 
                printf("A carta 1 vence no Super Poder!\n");
            else if (superPoder1 < superPoder2) 
                printf("A carta 2 vence no Super Poder!\n");
            else 
                printf("Empate no Super Poder!\n");
            break;
        default:
            printf("Opcao invalida! Por favor, escolha um numero entre 1 e 7.\n");
        }
    return 0;
}