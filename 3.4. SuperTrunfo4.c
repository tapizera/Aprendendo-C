/* data: 13/02/2026, sex
Depois de definir os status das 2 cartas...

---> Objetivo: Comparar 1 atributo por rodada
(digamos, eu jogo carta 1, escolho meu atributo sem saber como é a carta do outro, comparamos quem ganha, vez do oponente (Pc) ele escolhe seu atributo (random) e comparamos quem ganha, quem ganhar 3 rodadas ganha a partida e Definir o vencedor (if else)
*/

// data: 20/02/2026, qui
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

    /*
    // Comparar Atributos ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    int atributopcomparar;
    printf("escolha um atributo para comparar: ");
    printf("1 - Poplacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("6 - PIB per capita\n");
    scanf("%s", &atributopcomparar);
    
    // Definir Vencedor ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    if (atributopcomparar == 1) {
        printf("\n --- Hora da Batalha! --- \n");
        printf(" %s/%s VS %s/%s\n", cidade, estado, cidade2, estado2);
        printf(" Atributo escolhido: Populcao\n")
        if (populacao > populacao2) {
            printf("%s/%s - 1 X 0 - %s/%s \n", cidade, estado, cidade2, estado2);
        }
        else if (populacao2 > populacao) {
            printf("\n --- Hora da Batalha! --- \n");
            printf(" %s/%s - 0 X 1 - %s/%s\n", cidade, estado, cidade2, estado2);
    }
    // aí tem q fazer isso pra cada atributo, não vou fazer pq é melhor criar um função, mas n sei fazer isso ainda então.. vamo seguido!
    */

    // se superpower > superpower2 : carta 1 ganhou, se nao : carta 2 ganhou
    int carta1wins = superpower > superpower2;
    int carta2wins = superpower2 > superpower;
    int empate = superpower == superpower2;

    printf("\n --- Hora da Batalha! --- \n");
    printf("%s/%s (%d) VS (%d) %s/%s \n", cidade, estado, carta1wins, carta2wins, cidade2, estado2);

    return 0;
}