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

    // Menu de comparação
        // Menu de comparação
    int opcao1, opcao2;
    float valor1_carta1, valor1_carta2, valor2_carta1, valor2_carta2;

    printf("\n===== MENU DE COMPARACAO =====\n");
    printf("1. Populacao\n2. Area\n3. PIB\n4. Pontos Turisticos\n5. Densidade Populacional\n6. PIB per capita\n7. Super Poder\n");
    printf("Escolha o 1º atributo: ");
    scanf("%d", &opcao1);

    printf("\nEscolha o 2º atributo (diferente do primeiro): ");
    scanf("%d", &opcao2);

    if(opcao2 == opcao1) {
        printf("Você escolheu o mesmo atributo duas vezes! Escolha outro: ");
        scanf("%d", &opcao2);
    }

    // Pega os valores dos atributos escolhidos usando switch
    switch(opcao1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = pontosTuristicos1; valor1_carta2 = pontosTuristicos2; break;
        case 5: valor1_carta1 = densidadePopulacional1; valor1_carta2 = densidadePopulacional2; break;
        case 6: valor1_carta1 = pibPerCapita1; valor1_carta2 = pibPerCapita2; break;
        case 7: valor1_carta1 = superPoder1; valor1_carta2 = superPoder2; break;
        default: valor1_carta1 = 0; valor1_carta2 = 0;
    }
    switch(opcao2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = pontosTuristicos1; valor2_carta2 = pontosTuristicos2; break;
        case 5: valor2_carta1 = densidadePopulacional1; valor2_carta2 = densidadePopulacional2; break;
        case 6: valor2_carta1 = pibPerCapita1; valor2_carta2 = pibPerCapita2; break;
        case 7: valor2_carta1 = superPoder1; valor2_carta2 = superPoder2; break;
        default: valor2_carta1 = 0; valor2_carta2 = 0;
    }

    // Comparação dos atributos usando switch
    int pontos1 = 0, pontos2 = 0;

    // Comparação do primeiro atributo
    if (opcao1 == 5) { // Densidade Populacional: menor vence
        if (valor1_carta1 < valor1_carta2) pontos1++;
        else if (valor1_carta2 < valor1_carta1) pontos2++;
    } else { // Outros atributos: maior vence
        if (valor1_carta1 > valor1_carta2) pontos1++;
        else if (valor1_carta2 > valor1_carta1) pontos2++;
    }

    // Comparação do segundo atributo
    if (opcao2 == 5) { // Densidade Populacional: menor vence
        if (valor2_carta1 < valor2_carta2) pontos1++;
        else if (valor2_carta2 < valor2_carta1) pontos2++;
    } else { // Outros atributos: maior vence
        if (valor2_carta1 > valor2_carta2) pontos1++;
        else if (valor2_carta2 > valor2_carta1) pontos2++;
}

    // Soma dos atributos
    float soma1 = valor1_carta1 + valor2_carta1;
    float soma2 = valor1_carta2 + valor2_carta2;

    // Exibição clara do resultado
    printf("\n=========================================\n");
    printf("           RESULTADO DA RODADA           \n");
    printf("=========================================\n");
    printf("Cidade 1: %s\n", cidade1);
    printf("Cidade 2: %s\n", cidade2);

    // Nome dos atributos
    printf("-----------------------------------------\n");
    printf("Atributo 1: ");
    switch(opcao1) {
        case 1: printf("Populacao\n"); break;
        case 2: printf("Area\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turisticos\n"); break;
        case 5: printf("Densidade Populacional\n"); break;
        case 6: printf("PIB per capita\n"); break;
        case 7: printf("Super Poder\n"); break;
        default: printf("Invalido\n");
    }
    printf("  %s: %.2f\n", cidade1, valor1_carta1);
    printf("  %s: %.2f\n", cidade2, valor1_carta2);

    printf("Atributo 2: ");
    switch(opcao2) {
        case 1: printf("Populacao\n"); break;
        case 2: printf("Area\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turisticos\n"); break;
        case 5: printf("Densidade Populacional\n"); break;
        case 6: printf("PIB per capita\n"); break;
        case 7: printf("Super Poder\n"); break;
        default: printf("Invalido\n");
    }
    printf("  %s: %.2f\n", cidade1, valor2_carta1);
    printf("  %s: %.2f\n", cidade2, valor2_carta2);

    printf("-----------------------------------------\n");
    printf("Soma dos atributos:\n");
    printf("  %s: %.2f\n", cidade1, soma1);
    printf("  %s: %.2f\n", cidade2, soma2);
    printf("-----------------------------------------\n");

    if (soma1 > soma2)
        printf("Vencedora: Carta 1 (%s)\n", cidade1);
    else if (soma2 > soma1)
        printf("Vencedora: Carta 2 (%s)\n", cidade2);
    else
        printf("Empate!\n");

    return 0;
}