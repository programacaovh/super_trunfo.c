
#include <stdio.h>

int main (){
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    int pontos1, pontos2;
    float area1, area2, pib1, pib2;

    printf("Informe os dados da Carta 1:");
    printf("Estado (A-H)");
    scanf(" %c", &estado1);
    printf("Codigo da carta A01:");
    scanf("%s",codigo1);
    printf("Nome da Cidade:");
    scanf("%s",cidade1);
    printf("populacao:");
    scanf("%d", &populacao1);
    printf("area (em km²):");
    scanf("%f", &pib1);
    printf("numero de pontos turisticos");
    scanf("%d", &pontos1);

    printf("Informe os dados da Carta 2:");
    printf("Estado (A-H)");
    scanf(" %c", &estado2);
    printf("Codigo da carta A02:");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf("%s",cidade2);
    printf("populacao:");
    scanf("%d", &populacao2);
    printf("area (em km²):");
    scanf("%f", &pib2);
    printf("numero de pontos turisticos");
    scanf("%d", &pontos2);

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n");

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n");

    return 0;





}