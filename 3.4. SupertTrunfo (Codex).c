// data: 20/02/2026, qui (feito pelo Codex GPT)
#include <stdio.h>
#include <stdlib.h>

/*
Comparar 1 atributo por rodada
(digamos, eu jogo carta 1, escolho meu atributo sem saber como é a carta do outro, compararmos quem ganha, vez do oponente (Pc) ele escolhe seu atributo (random) e comparamos quem ganha, 
quem ganhar 3 rodadas ganha a partida
*/
typedef struct {
    char estado[3];
    char cidade[30];
    unsigned long int populacao;
    float area;
    float pib;
    int turisticos;
    float densidade;
    float pib_per_capita;
} Carta;

//Definir o vencedor (if else)
void ler_carta(Carta *carta, int numero) {
    printf("\n--- Definindo Carta %d ---\n", numero);

    printf("Estado (sigla): ");
    scanf("%2s", carta->estado);

    printf("Cidade: ");
    scanf("%29s", carta->cidade);

    printf("Populacao: ");
    scanf("%lu", &carta->populacao);

    printf("Area: ");
    scanf("%f", &carta->area);

    printf("PIB: ");
    scanf("%f", &carta->pib);

    printf("N de pontos turisticos: ");
    scanf("%d", &carta->turisticos);

    carta->densidade = carta->populacao / carta->area;
    carta->pib_per_capita = carta->pib / carta->populacao;
}

int comparar_atributo(Carta carta1, Carta carta2, int atributo) {
    float valor1 = 0.0f;
    float valor2 = 0.0f;

    switch (atributo) {
        case 1:
            valor1 = carta1.populacao;
            valor2 = carta2.populacao;
            break;
        case 2:
            valor1 = carta1.area;
            valor2 = carta2.area;
            break;
        case 3:
            valor1 = carta1.pib;
            valor2 = carta2.pib;
            break;
        case 4:
            valor1 = carta1.turisticos;
            valor2 = carta2.turisticos;
            break;
        case 5:
            // densidade: menor valor vence
            valor1 = carta1.densidade;
            valor2 = carta2.densidade;
            if (valor1 < valor2) return 1;
            if (valor2 < valor1) return -1;
            return 0;
        case 6:
           valor1 = carta1.pib_per_capita;
            valor2 = carta2.pib_per_capita;
            break;
        default:
            return 2; // atributo invalido
    }

    if (valor1 > valor2) return 1;
    if (valor2 > valor1) return -1;
    return 0;
}

void mostrar_menu(void) {
    printf("\nEscolha um atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turisticos\n");
    printf("5 - Densidade demografica (menor vence)\n");
    printf("6 - PIB per capita\n");
    printf("Atributo escolhido: ");
}

int main(void) {
    Carta carta1, carta2;
    int vitorias_carta1 = 0;
    int vitorias_carta2 = 0;

    printf("Ola, vamos comparar 2 cartas no Super Trunfo!\n");

    ler_carta(&carta1, 1);
    ler_carta(&carta2, 2);

    for (int rodada = 1; rodada <= 3; rodada++) {
        int atributo = 0;
        int resultado = 2;

        printf("\n=== Rodada %d ===\n", rodada);

        do {
            mostrar_menu();
            scanf("%d", &atributo);
            resultado = comparar_atributo(carta1, carta2, atributo);

            if (resultado == 2) {
                printf("Atributo invalido. Tente novamente.\n");
            }
        } while (resultado == 2);

        if (resultado == 1) {
            vitorias_carta1++;
            printf("Carta 1 venceu a rodada!\n");
        } else if (resultado == -1) {
            vitorias_carta2++;
            printf("Carta 2 venceu a rodada!\n");
        } else {
            printf("Empate na rodada!\n");
        }

        printf("Placar: %s/%s (%d) X (%d) %s/%s\n",
               carta1.cidade, carta1.estado, vitorias_carta1,
               vitorias_carta2, carta2.cidade, carta2.estado);
    }

    printf("\n=== Resultado Final ===\n");
    if (vitorias_carta1 > vitorias_carta2) {
        printf("Carta 1 venceu a partida!\n");
    } else if (vitorias_carta2 > vitorias_carta1) {
        printf("Carta 2 venceu a partida!\n");
    } else {
        printf("A partida terminou empatada!\n");
    }

    printf("Placar final: %s/%s (%d) X (%d) %s/%s\n",
           carta1.cidade, carta1.estado, vitorias_carta1,
           vitorias_carta2, carta2.cidade, carta2.estado);

    return 0;
}