// data: 10/02/2026
#include <stdio.h>

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

    printf("\n --- Carta 1 --- \n");
    printf("- Estado: %s\n", estado);
    printf("- Cidade: %s\n", cidade);
    printf("- Poplacao: %d\n", populacao);
    printf("- Area: %f\n", area);
    printf("- PIB: %f\n", pib);
    printf("- N de pontos turisticos: %d\n", turisticos);
    return 0;
}