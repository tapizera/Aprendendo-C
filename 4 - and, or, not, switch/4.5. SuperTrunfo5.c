// data: 21/02/2026, sáb, 19:16
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// mesma coisa, mas com menu
int main () {
    int menu;
    printf("--- SuperTrunfo 5 ---\n1 - Jogar\n2 - Info\n3 - Sair\nSelecione: ");
    scanf("%d", &menu);
    switch (menu) {
        case 1: // jogar
            printf("\n--- Jogar ---\n");
            printf("Ola, vamos criar 2 cartas para o Super Trunfo\n");

            // Carta 1~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
            printf("\n- Definindo Carta 1\n");

            char estado[3];
            printf("Estado (sigla): ");
            scanf("%s", &estado);

            char cidade[30];
            printf("Cidade: ");
            scanf("%s", &cidade);

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
            printf("N de Pontos Turisticos: ");
            scanf("%d", &turisticos);

            float densidade = (int) populacao / (float) area;
            float pibpercapita = (float) pib / (int) populacao;
            float superpower = populacao + area + pib + turisticos + densidade + pibpercapita;

            // Carta 2 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
            printf("\n- Definindo Carta 2\n");
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
            printf("N de Pontos Turisticos: ");
            scanf("%d", &turisticos2);

            float densidade2 = (int) populacao2 / (float) area2;
            float pibpercapita2 = (float) pib2 / (int) populacao2;
            float superpower2 = populacao2 + area2 + pib2 + turisticos2 + densidade2 + pibpercapita2;

    
            // Comparar Atributos com Switch ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
            int atributopcomparar;
            printf("\n--- Atributo para Comparar ---\n");
            printf("1 - Populacao\n");
            printf("2 - Area\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turisticos\n");
            printf("5 - Densidade Demografica\n");
            printf("6 - PIB per capita\n");
            printf("Escolha um atributo para comparar: ");
            scanf("%d", &atributopcomparar);

            printf("\n--- Hora da Batalha! ---\n");
            printf(" %s/%s VS %s/%s\n", cidade, estado, cidade2, estado2);
            switch (atributopcomparar) {
                case 1:
                    if (populacao > populacao2) {
                        printf("Atributo escolhido: Populcao\n");
                        printf(" > WINNER: %s/%s <", cidade, estado);
                    }
                    else if (populacao < populacao2) {
                        printf("Atributo escolhido: Populcao\n");
                        printf(" > WINNER: %s/%s <", cidade2, estado2);
                    }
                    else {
                        printf("Atributo escolhido: Populacao\n");
                        printf("Empate");
                    }
                break;

                case 2:
                    if (area > area2) {
                        printf("Atributo escolhido: Area\n");
                        printf(" > WINNER: %s/%s <", cidade, estado);
                    }
                    else if (area < area2) {
                        printf("Atributo escolhido: Area\n");
                        printf(" > WINNER: %s/%s <", cidade2, estado2);
                    }
                    else {
                        printf("Atributo escolhido: Area\n");
                        printf("Empate");
                    }
                break;

                case 3:
                    if (pib > pib2) {
                        printf("Atributo escolhido: PIB\n");
                        printf(" > WINNER: %s/%s <", cidade, estado);
                    }
                    else if (pib < pib2) {
                        printf("Atributo escolhido: PIB\n");
                        printf(" > WINNER: %s/%s <", cidade2, estado2);
                    }
                    else {
                        printf("Atributo escolhido: PIB\n");
                        printf("Empate");
                    }
                break;
                
                case 4:
                    if (turisticos > turisticos2) {
                        printf("Atributo escolhido: Pontos Turisticos\n");
                        printf(" > WINNER: %s/%s <", cidade, estado);
                    }
                    else if (turisticos < turisticos2) {
                        printf("Atributo escolhido: Pontos Turisticos\n");
                        printf(" > WINNER: %s/%s <", cidade2, estado2);
                    }
                    else {
                        printf("Atributo escolhido: Pontos Turisticos\n");
                        printf("Empate");
                    }
                break;

                case 5:
                    if (turisticos > turisticos2) {
                        printf("Atributo escolhido: Densidade Demografica\n");
                        printf(" > WINNER: %s/%s <", cidade, estado);
                    }
                    else if (turisticos < turisticos2) {
                        printf("Atributo escolhido: Densidade Demografica\n");
                        printf(" > WINNER: %s/%s <", cidade2, estado2);
                    }
                    else {
                        printf("Atributo escolhido: Densidade Demografica\n");
                        printf("Empate");
                    }
                break;

                case 6:
                    if (pibpercapita > pibpercapita2) {
                        printf("Atributo escolhido: PIB per capita\n");
                        printf(" > WINNER: %s/%s <", cidade, estado);
                    }
                    else if (pibpercapita < pibpercapita2) {
                        printf("Atributo escolhido: PIB per capita\n");
                        printf(" > WINNER: %s/%s <", cidade2, estado2);
                    }
                    else {
                        printf("Atributo escolhido: PIB per capita\n");
                        printf("Empate");
                    }
                break;
                
                default:
                    if (superpower > superpower2) {
                        printf("Atributo escolhido: SuperPower\n");
                        printf(" > WINNER: %s/%s <", cidade, estado);
                    }
                    else if (superpower < superpower2) {
                        printf("Atributo escolhido: SuperPower\n");
                        printf(" > WINNER: %s/%s <", cidade2, estado2);
                    }
                    else {
                        printf("Atributo escolhido: SuperPower\n");
                        printf("Empate");
                    }
                break;
                    
            } break; //switch atributocomparar

        case 2: // info
            printf("\n--- Informaçãoes ---\n");
            printf("\nainda nao tem");
            break;

        case 3: // sair
            printf("\nSaindo...");
            break;

        default:
            printf("\nselecione uma das opçoes");
            break;
    } // switch menu
    return 0;
} // main