#include <stdio.h>

// Desafio Super trunfo - Estados
// Nível novato ao Mestre.

int main(){

    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float densidadeP1, densidadeP2;
    float pib1, pib2;
    float pibper1, pibper2;
    int pontosTuristicos1, pontosTuristicos2;
    float superPoder1, superPoder2;

// Entrada e Saida das cartas
   
//CARTA 1

    printf("--- CADASTRO DA CARTA 1 ---\n");

    printf("Estado de (A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    //CARTA 2

    printf("--- CADASTRO DA CARTA 2 ---\n");

    printf("Estado de (A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

//calculos
    
    densidadeP1 = (float)populacao1 / area1;
    densidadeP2 = (float)populacao2 / area2;

    pibper1 = (pib1 * 1000000000) / (float)populacao1;
    pibper2 = (pib2 * 1000000000) / (float)populacao2;

    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibper1 + (1.0f / densidadeP1);
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibper2 + (1.0f / densidadeP2);

// Exibição dos dados

    printf("--- CARTAS CADASTRADAS ---\n");

//01

    printf("--- CARTA 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais.\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidadeP1);
    printf("PIB per Capita: %.2f reais.\n", pibper1);

//02

    printf("--- CARTA 2 ---\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais.\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidadeP2);
    printf("PIB per Capita: %.2f reais.\n", pibper2);

 //Comparação das cartas
 
    printf("--- Resultados ---\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: %d\n", densidadeP1 < densidadeP2);
    printf("PIB per Capita: %d\n", pibper1 > pibper2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2);

    return 0;

}