#include <stdio.h>

int main() {
    printf("******  DESAFIO CARTAS SUPER TRUNFO  ******\n");
    
    // Declaração das variáveis para armazenar os dados das cartas
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2, pib_per_capita1, pib_per_capita2;

    // Leitura dos dados da primeira carta
    printf("\nDigite os dados da primeira carta\n");
    printf("\n");
    printf("Estado (letra de A a H):");
    scanf(" %c", &estado1); // O espaço antes de %c é para garantir que o caractere anterior seja consumido
    
    printf("Código da Carta: ");
    scanf("%s", codigo1);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", cidade1); // O espaço antes de %[^\n]s permite ler uma linha inteira, incluindo espaços
   
    printf("População:");
    scanf("%d", &populacao1);
    
    printf("Área (em km²): ");
    scanf("%f", &area1);
   
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
   
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    //Densidade Populacional = População / Área da cidade
    //Pib Per Capita = Pib / População

    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    
    // Leitura dos dados da segunda carta
    printf("\nDigite os dados da segunda carta:\n");
    printf("\n");
   
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2); // O espaço antes de %c é para garantir que o caractere anterior seja consumido
    
    printf("Código da Carta: ");
    scanf("%s", codigo2);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", cidade2); // O espaço antes de %[^\n]s permite ler uma linha inteira, incluindo espaços
    
    printf("População: ");
    scanf("%d", &populacao2);
   
    printf("Área (em km²): ");
    scanf("%f", &area2);
   
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
   
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    //Densidade Populacional = População / Área da cidade
    //Pib Per Capita = Pib / População

    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / area2;

    
    // Exibição das informações da primeira carta
    printf("\n***  Carta 1  ***\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("Pib Per Capita: R$%.2f\n", pib_per_capita1);

    // Exibição das informações da segunda carta

    printf("\n***  Carta 2  ***\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("Pib Per Capita: R$%.2f\n", pib_per_capita2);

    return 0;
}