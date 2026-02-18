// data: 12/02/2026, qui
#include <stdio.h>

// objetivo: implementar PIB per capita e Densidade
int main() {
    printf("\nOla, vamos criar 2 cartas para o Super Trunfo\n");

    char estado[3];
    printf("Estado (sigla): ");
    scanf("%s", &estado);

    char cidade[30];
    printf("Cidade: ");
    scanf("%s", &cidade);

    int populacao;
    printf("Populacao: ");
    scanf("%d", &populacao);

    float area;
    printf("Area: ");
    scanf("%f", &area);

    float pib;
    printf("PIB: ");
    scanf("%f", &pib);

    int turisticos;
    printf("N de pontos turisticos: ");
    scanf("%d", &turisticos);

    // NOVO! - Densidade Demográfica
    float densidade = (int) populacao / (float) area;

    // NOVO! - PIB per capita
    float pibpercapita = (float) pib / (int) populacao;

    printf("\n --- Carta 1 --- \n");
    printf("- Estado: %s\n", estado);
    printf("- Cidade: %s\n", cidade);
    printf("- Poplacao: %d\n", populacao);
    printf("- Area: %f\n", area);
    printf("- PIB: %f\n", pib);
    printf("- Pontos turisticos: %d\n", turisticos);

    // NOVO! - printando as novas implementações
    printf("- Densidade Demografica: %.2f\n", densidade);
    printf("- PIB per capita: %.2f\n", pibpercapita);

    return 0;
}