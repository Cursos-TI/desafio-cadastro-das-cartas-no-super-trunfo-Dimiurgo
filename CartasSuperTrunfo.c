#include <stdio.h>

int main() {
    // Variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1; // Nova variável para densidade populacional
    float pibPerCapita1; // Nova variável para PIB per capita

    // Variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2; // Nova variável para densidade populacional
    float pibPerCapita2; // Nova variável para PIB per capita

    // Variável para escolha do menu
    int opcao;

    // Leitura dos dados da primeira carta
    printf("\n=== Cadastro da Primeira Carta ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", cidade1);
    printf("Digite a população: ");
    scanf("%lu", &populacao1);
    printf("Digite a área em km²: ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculo da densidade populacional e PIB per capita para a primeira carta
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;

    // Leitura dos dados da segunda carta
    printf("\n=== Cadastro da Segunda Carta ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", cidade2);
    printf("Digite a população: ");
    scanf("%lu", &populacao2);
    printf("Digite a área em km²: ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade populacional e PIB per capita para a segunda carta
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

   
    printf("\n\n======= MENU DE COMPARAÇÃO =======\n");
    printf("Escolha o atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Digite sua opção (1-6): ");
    scanf("%d", &opcao);
    
    // Estrutura switch escolha do usuário
    switch(opcao) {
        case 1: // População - maior valor vence
            printf("\n======= COMPARAÇÃO DE CARTAS =======\n");
            printf("Atributo escolhido: População\n\n");
            
            printf("Carta 1 - %s: %lu habitantes\n", cidade1, populacao1);
            printf("Carta 2 - %s: %lu habitantes\n", cidade2, populacao2);
            
            if (populacao1 > populacao2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("\nResultado: Empate! Ambas as cartas têm a mesma população.\n");
            }
            break;
            
        case 2: // Área - maior valor vence
            printf("\n======= COMPARAÇÃO DE CARTAS =======\n");
            printf("Atributo escolhido: Área\n\n");
            
            printf("Carta 1 - %s: %.2f km²\n", cidade1, area1);
            printf("Carta 2 - %s: %.2f km²\n", cidade2, area2);
            
            if (area1 > area2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (area2 > area1) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("\nResultado: Empate! Ambas as cartas têm a mesma área.\n");
            }
            break;
            
        case 3: // PIB - maior valor vence
            printf("\n======= COMPARAÇÃO DE CARTAS =======\n");
            printf("Atributo escolhido: PIB\n\n");
            
            printf("Carta 1 - %s: %.2f bilhões de reais\n", cidade1, pib1);
            printf("Carta 2 - %s: %.2f bilhões de reais\n", cidade2, pib2);
            
            if (pib1 > pib2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pib2 > pib1) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("\nResultado: Empate! Ambas as cartas têm o mesmo PIB.\n");
            }
            break;
            
        case 4: // Pontos Turísticos - maior valor vence
            printf("\n======= COMPARAÇÃO DE CARTAS =======\n");
            printf("Atributo escolhido: Pontos Turísticos\n\n");
            
            printf("Carta 1 - %s: %d pontos\n", cidade1, pontosTuristicos1);
            printf("Carta 2 - %s: %d pontos\n", cidade2, pontosTuristicos2);
            
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("\nResultado: Empate! Ambas as cartas têm o mesmo número de pontos turísticos.\n");
            }
            break;
            
        case 5: // Densidade Populacional - MENOR valor vence 
            printf("\n======= COMPARAÇÃO DE CARTAS =======\n");
            printf("Atributo escolhido: Densidade Populacional\n\n");
            
            printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidadePopulacional1);
            printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidadePopulacional2);
            
            // Regra inversa: menor valor vence
            if (densidadePopulacional1 < densidadePopulacional2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
                printf("(Para densidade populacional, o menor valor vence!)\n");
            } else if (densidadePopulacional2 < densidadePopulacional1) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
                printf("(Para densidade populacional, o menor valor vence!)\n");
            } else {
                printf("\nResultado: Empate! Ambas as cartas têm a mesma densidade populacional.\n");
            }
            break;
            
        case 6: // PIB per Capita - maior valor vence
            printf("\n======= COMPARAÇÃO DE CARTAS =======\n");
            printf("Atributo escolhido: PIB per Capita\n\n");
            
            printf("Carta 1 - %s: %.2f reais\n", cidade1, pibPerCapita1);
            printf("Carta 2 - %s: %.2f reais\n", cidade2, pibPerCapita2);
            
            if (pibPerCapita1 > pibPerCapita2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pibPerCapita2 > pibPerCapita1) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("\nResultado: Empate! Ambas as cartas têm o mesmo PIB per Capita.\n");
            }
            break;
            
        default: // opção invalida
            printf("\nOpção inválida! Por favor, escolha um número de 1 a 6.\n");
            break;
    }
    
    return 0;
}