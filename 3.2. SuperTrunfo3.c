// data: 12/02/2026, qui
#include <stdio.h>

int main () {
    printf("\nOla, vamos criar 2 cartas para o Super Trunfo\n");

    // Carta 1~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    printf("\n --- Definindo Carta 1 --- \n");
    char estado[3];
    printf("Estado (sigla): ");
    scanf("%s", &estado);

    char cidade[30];
    printf("Cidade: ");
    scanf("%s", &cidade);

    // a população agora deve ser armazenada como unsigned long int 
    //para acomodar números maiores
    unsigned long int populacao;
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

    float densidade = (int) populacao / (float) area;
    float pibpercapita = (float) pib / (int) populacao;

    // NOVO! - SuperPoder
    // calcule o "Super Poder" somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder"). Armazene o Super Poder como float.
    float superpower = populacao + area + pib + turisticos + densidade + pibpercapita;

    // Carta 2 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    printf("\n --- Definindo Carta 2 --- \n");
    char estado2[3];
    printf("Estado (sigla): ");
    scanf("%s", &estado2);

    char cidade2[30];
    printf("Cidade: ");
    scanf("%s", &cidade2);

    unsigned long int populacao2;
    printf("Populacao: ");
    scanf("%d", &populacao2);

    float area2;
    printf("Area: ");
    scanf("%f", &area2);

    float pib2;
    printf("PIB: ");
    scanf("%f", &pib2);

    int turisticos2;
    printf("N de pontos turisticos: ");
    scanf("%d", &turisticos2);

    float densidade2 = (int) populacao2 / (float) area2;
    float pibpercapita2 = (float) pib2 / (int) populacao2;
    float superpower2 = populacao2 + area2 + pib2 + turisticos2 + densidade2 + pibpercapita2;

    printf("\n --- Carta 1 --- \n");
    printf("- Estado: %s\n", estado);
    printf("- Cidade: %s\n", cidade);
    printf("- Poplacao: %d\n", populacao);
    printf("- Area: %f\n", area);
    printf("- PIB: %f\n", pib);
    printf("- Pontos turisticos: %d\n", turisticos);
    printf("- Densidade Demografica: %.2f\n", densidade);
    printf("- PIB per capita: %.2f\n", pibpercapita);

    printf("\n --- Carta 2 --- \n");
    printf("- Estado: %s\n", estado2);
    printf("- Cidade: %s\n", cidade2);
    printf("- Poplacao: %d\n", populacao2);
    printf("- Area: %f\n", area2);
    printf("- PIB: %f\n", pib2);
    printf("- Pontos turisticos: %d\n", turisticos2);
    printf("- Densidade Demografica: %.2f\n", densidade2);
    printf("- PIB per capita: %.2f\n", pibpercapita2);

    // se superpower > superpower2 : carta 1 ganhou, se nao : carta 2 ganhou
    int carta1wins = superpower > superpower2;
    int carta2wins = superpower2 > superpower;
    int empate = superpower == superpower2;

    printf("\n --- Hora da Batalha! --- \n");
    printf("%s/%s (%d) VS (%d) %s/%s \n", cidade, estado, carta1wins, carta2wins, cidade2, estado2);

    return 0;
}